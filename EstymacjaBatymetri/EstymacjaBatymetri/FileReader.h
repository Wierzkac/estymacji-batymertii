#pragma once
#include <string>
#include <iostream>
using namespace std;

class FileReader
{
protected:
	string filePath;

public:
	FileReader(string pathToFile);
	void printPath();
};

