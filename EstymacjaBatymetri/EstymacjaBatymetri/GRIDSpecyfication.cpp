#include "GRIDSpecyfication.h"

GRIDSpecyfication::GRIDSpecyfication(double pxResolution,string saveFormat,double surfaceCoverage):Specyfication( saveFormat,surfaceCoverage)
{	
	this->pxResolution = pxResolution;
}
