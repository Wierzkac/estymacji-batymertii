#include "LIDARSpecyfication.h"

LIDARSpecyfication::LIDARSpecyfication()
    :Specyfication("",0.0)
{
    this->averageScanDensity = 0.0;
    this->slipXY = 0.0;
    this->slipH = 0.0;
}

LIDARSpecyfication::LIDARSpecyfication(float averageScanDensity,float slipXY,float slipH,string saveFormat,double surfaceCoverage) 
    :Specyfication(saveFormat, surfaceCoverage)
{
    this->averageScanDensity = averageScanDensity;
    this->slipXY = slipXY;
    this->slipH = slipH;
}
