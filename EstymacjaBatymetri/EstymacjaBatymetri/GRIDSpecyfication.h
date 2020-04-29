#pragma once
#include <string>
#include "Specyfication.h"

using namespace std;

// NMT and NMPT specyfication
class GRIDSpecyfication: public Specyfication
{
public:
    double pxResolution; // [ m ]

public:
    GRIDSpecyfication();
    GRIDSpecyfication(double pxResolution, string saveFormat, double surfaceCoverage);
};
