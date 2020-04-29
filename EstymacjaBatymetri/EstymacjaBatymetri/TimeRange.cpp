#include "TimeRange.h"

TimeRange::TimeRange()
{
	this->begining =new  Date();
	this->end = new Date();
}

TimeRange::TimeRange(Date* begining, Date* end)
{
	this->begining = begining;
	this->end = end;
}
