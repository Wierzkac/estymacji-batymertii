#pragma once
#include "Coverage.h"
#include "TimeRange.h"
#include "OrthophotomapSpecyfication.h"
#include "LIDARSpecyfication.h"
#include "GRIDSpecyfication.h"

class MonitioringInfo
{
public:
	Coverage coverage;
	TimeRange sweepDates;
	string flatCoordinateSystem;
	string altitudeSystem;
	OrthophotomapSpecyfication orthophotomap;
	LIDARSpecyfication lidar;
	GRIDSpecyfication grid;
};

