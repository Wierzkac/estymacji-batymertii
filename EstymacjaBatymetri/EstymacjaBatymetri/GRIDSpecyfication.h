#pragma once
#include <string>
#include "Specyfication.h"

using namespace std;

// NMT and NMPT specyfication
class GRIDSpecyfication: public Specyfication
{
protected:
    double pxResolution; // [ m ]

public:
    GRIDSpecyfication(double pxResolution, string saveFormat, double surfaceCoverage);
};
