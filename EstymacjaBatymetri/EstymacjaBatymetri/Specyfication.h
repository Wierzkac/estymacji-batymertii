#pragma once
#include <string>
using namespace std;

class Specyfication
{
public: 
	string saveFormat;
	double surfaceCoverage; // [ km² ]
public:
    Specyfication(string saveFormat,double surfaceCoverage);
};
