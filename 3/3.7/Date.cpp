
#include "Date.h"

Date::Date(int day, int month, int year)
{
    _day = day;
    _month = month;
    _year = year;
}

bool Date::is_equal(Date date)
{
    if (_day == date.getDay() && _month == date.getMonth() && _year == date.getYear())
    {
        return true;
    }

    return false;
}