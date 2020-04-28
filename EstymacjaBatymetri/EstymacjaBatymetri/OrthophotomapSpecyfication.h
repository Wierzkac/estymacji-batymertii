#pragma once
#include "Specyfication.h"

class OrthophotomapSpecyfication : public Specyfication
{
protected: 
	float slipXY; // average mistake P(X,Y) location [ m ]
	double pxResolution; // [ m ]
public:
	OrthophotomapSpecyfication(float slipXY,double pxResolution, string saveFormat,double surfaceCoverage);
};

