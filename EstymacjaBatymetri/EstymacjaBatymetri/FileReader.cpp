#include "FileReader.h"
#include <cassert>

FileReader::FileReader(const char* pathToFile)
{
	this->filePath = pathToFile;
}

void FileReader::printPath() {
	cout << "path: " << this->filePath;
}

void FileReader::openTxtFile() {
	txtFile = ifstream(this->filePath);
}

void FileReader::openBinFile() {
	binFile = ifstream(this->filePath, ios::binary);
}

void FileReader::printFile() {
	openTxtFile();
	int dotsIndex = 0;
	for (string line; getline(txtFile, line); )
	{
		dotsIndex= line.find_first_of(':');
		if(dotsIndex>-1)
			cout<<line.substr(dotsIndex+1,100) << endl;
	}

}

TimeRange* FileReader::readDateValues(string& value)
{
	cout << value << endl;
	int dashIndex=value.find_first_of('-');
	string begining, end;
	begining = value.substr(0, dashIndex - 1);
	end = value.substr(dashIndex + 1, 100);
	TimeRange* range=new TimeRange();
	range->begining = readDate(begining);
	range->end = readDate(end);
	return range;
}

Date* FileReader::readDate(string& value)
{
	int slashIndex, year, month, day;
		string line;
	Date* date = new Date();

	slashIndex = value.find_first_of('/');
	line = value.substr(0, slashIndex );
	year = stoi(line);
	line = value.substr(slashIndex + 1, 100);

	slashIndex = line.find_first_of('/');
	month= stoi(line.substr(0, slashIndex ));
	day = stoi(line.substr( slashIndex + 1,slashIndex+3));

	date->year = year;
	date->month = month;
	date->day = day;

	return date;
}

float FileReader::readFloatValue(string& value)
{
	int spaceIndex = value.find_first_of(' ');
	return stof(value.substr(0, spaceIndex));
}

double FileReader::readDoubleValue(string& value)
{
	int spaceIndex = value.find_first_of(' ');
	return stod(value.substr(0, spaceIndex));
}

//if you had better idea i am ready to change this xd THIS IS UGLY CODE
void FileReader::readInfoLine(int lineNumber, string& value,MonitoringInfo* info) {
	switch (lineNumber) {
	case 0:
		info->coverage->type = value;
		break;
	case 1:
		info->coverage->range = value;
		break;
	case 2:
		info->coverage->contractor = value;
		break;
	case 3:
		info->coverage->orderer = value;
		break;
	case 4:
		info->sweepDates = readDateValues(value);
		break;

	case 5:
		info->flatCoordinateSystem = value;
		break;
	case 6:
		info->altitudeSystem = value;
		break;
	case 7:
		info->orthophotomap->slipXY = readFloatValue(value);
		break;
	case 8:
		info->orthophotomap->pxResolution = readFloatValue(value);
		break;
	case 9:
		info->orthophotomap->saveFormat = value;
		break;
	case 10:
		info->orthophotomap->surfaceCoverage = readDoubleValue(value);
		break;
	case 11:
		info->lidar->averageScanDensity = readFloatValue(value);
		break;
	case 12:
		info->lidar->slipXY = readFloatValue(value);
		break;
	case 13:
		info->lidar->slipH = readFloatValue(value);
		break;
	case 14:
		info->lidar->saveFormat = value;
		break;
	case 15:
		info->lidar->surfaceCoverage = readDoubleValue(value);
		break;
	case 16:
		info->grid->pxResolution = readFloatValue(value);
		break;
	case 17:
		info->grid->saveFormat = value;
		break;
	case 18:
		info->grid->surfaceCoverage = readDoubleValue(value);
		break;
	}
}

MonitoringInfo* FileReader::readMonitoringInfo() {
	openTxtFile();
	MonitoringInfo *info=new MonitoringInfo();
	int dotsIndex = 0;
	string line,value;
	int i = 0;
	while ( getline(txtFile, line) )
	{
		dotsIndex = line.find_first_of(':');
		value = line.substr(dotsIndex + 1, 100);
		if (dotsIndex > -1 && value!="") {
			readInfoLine(i, value, info);
			i++;
		}
	}
	return info;
}

LidarFile* FileReader::readLidarFile()
{
	openBinFile();
	LidarFile* lidarFile=new LidarFile();
	binFile.read((char*)&lidarFile->header, sizeof(lidarFile->header));

	assert(lidarFile->header.versionMaj == 1 && lidarFile->header.versionMin == 2);
	assert(lidarFile->header.headerSize == sizeof(lidarFile->header));
	assert(lidarFile->header.pointDataRecordFormat == 3);

	binFile.seekg(lidarFile->header.pointDataOffset);
	for (uint32_t i = 0; i < lidarFile->header.numberOfPoints; i++)
	{
		LidarPointRecord3 point; 
		binFile.read((char*)&point, sizeof(LidarPointRecord3));
		point.x = point.x * lidarFile->header.scaleX;
		point.y = point.y * lidarFile->header.scaleY;
		point.z = point.z * lidarFile->header.scaleZ;
		
		lidarFile->verts.push_back(point);
	}

	if (!binFile.good())
		throw runtime_error("Error");

	return lidarFile;
}
