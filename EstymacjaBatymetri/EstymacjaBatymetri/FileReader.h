#pragma once
#include "MonitoringInfo.h"
#include <fstream>
#include <iostream>
using namespace std;

class FileReader
{
protected:
	const char* filePath;
	ifstream  txtFile;

private :
	void openFile();

public:
	FileReader(const char* pathToFile);
	void printPath();
	void printFile();
	MonitoringInfo* readMonitoringInfo();

private:
	TimeRange* readDateValues(string& line);
	Date* readDate(string& line);
	float readFloatValue(string& line);
	double readDoubleValue(string& value);
	void readInfoLine(int lineNumber, string& value, MonitoringInfo* info);
};

