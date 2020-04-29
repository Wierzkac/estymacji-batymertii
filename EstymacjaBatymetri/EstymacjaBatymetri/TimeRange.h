#pragma once
#include "Date.h"

class TimeRange
{
public:
	Date* begining;
	Date* end;

public:
	TimeRange();
	TimeRange(Date* begining, Date* end);
};

