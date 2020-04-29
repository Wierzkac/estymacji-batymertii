#include "GRIDSpecyfication.h"

GRIDSpecyfication::GRIDSpecyfication() :Specyfication("", 0.0)
{
	this->pxResolution = 0.0;
}

GRIDSpecyfication::GRIDSpecyfication(double pxResolution,string saveFormat,double surfaceCoverage):Specyfication( saveFormat,surfaceCoverage)
{	
	this->pxResolution = pxResolution;
}
