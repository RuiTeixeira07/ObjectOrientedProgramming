
#include "Date.h"
#include <iostream>

Date::Date(int day, int month, int year)
{
    _day = day;
    _month = month;
    _year = year;
}

bool Date::operator!=(Date date)
{
    if (_day != date.getDay() || _month != date.getMonth() || _year != date.getYear())
    {
        return true;
    }

    return false;
}

bool Date::operator<<(Date date)
{
    if (_year < date.getYear() ||
        _year == date.getYear() && _month < date.getMonth() ||
        _year == date.getYear() && _month == date.getMonth() && _day < date.getDay())
    {
        return true;
    }
   
    return false;
}

bool Date::operator>>(Date date)
{
    if (_year > date.getYear() ||
        _year == date.getYear() && _month > date.getMonth() ||
        _year == date.getYear() && _month == date.getMonth() && _day > date.getDay())
    {
        return true;
    }

    return false;
}