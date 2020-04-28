#pragma once
#include <string>
using namespace std;

class Coverage
{
protected: 
	string type;
	string* range;
	string contractor;
	string orderer;

public:
	Coverage(string type, string* range, string contractor, string orderer);
};

