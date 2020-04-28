#pragma once
#include "Date.h"

class TimeRange
{
protected:
	Date begining;
	Date end;

public:
	TimeRange(Date begining, Date end);
};

