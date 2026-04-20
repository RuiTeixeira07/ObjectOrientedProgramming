
#include "Date.h"

Date::Date() 
{
    _day = 1;
    _month = 1;
    _year = 1970;
}

Date::Date(int day, int month, int year)
{
    _day = day;
    _month = month;
    _year = year;
}