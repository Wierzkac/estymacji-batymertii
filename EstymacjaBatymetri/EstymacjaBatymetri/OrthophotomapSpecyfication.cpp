#include "OrthophotomapSpecyfication.h"

OrthophotomapSpecyfication::OrthophotomapSpecyfication() :Specyfication("", 0.0) {
	this->slipXY = 0.0;
	this->pxResolution = 0.0;
}

OrthophotomapSpecyfication::OrthophotomapSpecyfication(float slipXY, double pxResolution, string saveFormat, double surfaceCoverage) 
	:Specyfication(saveFormat, surfaceCoverage) {
	this-> slipXY=slipXY; 
	this-> pxResolution= pxResolution;
}