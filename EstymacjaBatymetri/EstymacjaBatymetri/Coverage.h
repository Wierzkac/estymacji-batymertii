#pragma once
#include <string>
using namespace std;

class Coverage
{
public: 
	string type;
	string range;
	string contractor;
	string orderer;

public:
	Coverage();
	Coverage(string type, string range, string contractor, string orderer);
};

