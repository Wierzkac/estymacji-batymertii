#pragma once
#include <string>
#include "Specyfication.h"
using namespace std;

class LIDARSpecyfication: public Specyfication
{
public:
    float averageScanDensity; // [ pkt / m² ]
    float slipXY; // average mistake P(X,Y) location [ m ]
    float slipH; //average mistake H ordinate [ m ]
    
public:
    LIDARSpecyfication();
    LIDARSpecyfication(float averageScanDensity, float slipXY, float slipH, string saveFormat, double surfaceCoverage); 
};
