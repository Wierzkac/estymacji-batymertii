#pragma once
#include "Specyfication.h"

class OrthophotomapSpecyfication : public Specyfication
{
public: 
	float slipXY; // average mistake P(X,Y) location [ m ]
	double pxResolution; // [ m ]
public:
	OrthophotomapSpecyfication();
	OrthophotomapSpecyfication(float slipXY,double pxResolution, string saveFormat,double surfaceCoverage);
};

