#pragma once
#include <string>
using namespace std;

class Specyfication
{
protected: 
	string saveFormat;
	double surfaceCoverage; // [ km² ]
public:
    Specyfication(string saveFormat,double surfaceCoverage);
};
