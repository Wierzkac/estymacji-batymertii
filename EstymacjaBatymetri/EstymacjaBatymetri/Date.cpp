#include "Date.h"

Date::Date()
{
	this->year = 0;
	this->month = 0;
	this->day = 0;
}

Date::Date(int year, int month, int day)
{
	this->year = year;
	this->month = month;
	this->day = day;
}
