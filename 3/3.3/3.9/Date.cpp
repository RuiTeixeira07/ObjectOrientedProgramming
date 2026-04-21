
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

std::ostream& operator<<(std::ostream& os, Date date)
{
    os << date.getDay() << "/" << date.getMonth() << "/" << date.getYear();

    return os;
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