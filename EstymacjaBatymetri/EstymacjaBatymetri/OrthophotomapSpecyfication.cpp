#include "OrthophotomapSpecyfication.h"

OrthophotomapSpecyfication::OrthophotomapSpecyfication(float slipXY, double pxResolution, string saveFormat, double surfaceCoverage) 
	:Specyfication(saveFormat, surfaceCoverage) {
	this-> slipXY=slipXY; 
	this-> pxResolution= pxResolution;
}