#include "LIDARSpecyfication.h"

LIDARSpecyfication::LIDARSpecyfication(float averageScanDensity,float slipXY,float slipH,string saveFormat,double surfaceCoverage) 
    :Specyfication(saveFormat, surfaceCoverage)
{
    this->averageScanDensity = averageScanDensity;
    this->slipXY = slipXY;
    this->slipH = slipH;
}
