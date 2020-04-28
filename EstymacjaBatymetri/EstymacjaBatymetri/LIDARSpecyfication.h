#pragma once
#include <string>
#include "Specyfication.h"
using namespace std;

class LIDARSpecyfication: public Specyfication
{
protected:
    float averageScanDensity; // [ pkt / m² ]
    float slipXY; // average mistake P(X,Y) location [ m ]
    float slipH; //average mistake H ordinate [ m ]
    
public:
    LIDARSpecyfication(float averageScanDensity, float slipXY, float slipH, string saveFormat, double surfaceCoverage); 
};
