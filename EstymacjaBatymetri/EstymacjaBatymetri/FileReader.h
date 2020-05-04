#pragma once
#include "MonitoringInfo.h"
#include "LidarFile.h"
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

class FileReader
{
protected:
	const char* filePath;
	ifstream  txtFile, binFile;

private :
	void openTxtFile();
	void openBinFile();

public:
	FileReader(const char* pathToFile);
	void printPath();
	void printFile();
	MonitoringInfo* readMonitoringInfo();
	LidarFile*  readLidarFile();

private:
	TimeRange* readDateValues(string& line);
	Date* readDate(string& line);
	float readFloatValue(string& line);
	double readDoubleValue(string& value);
	void readInfoLine(int lineNumber, string& value, MonitoringInfo* info);
};

