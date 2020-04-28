#include "FileReader.h"
FileReader::FileReader(string pathToFile)
{
	this->filePath = pathToFile;
}

void FileReader::printPath() {
	cout << "path: " << this->filePath;
}
