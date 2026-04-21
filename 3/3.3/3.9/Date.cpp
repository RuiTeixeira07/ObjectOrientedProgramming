
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

std::istream& operator>>(std::istream& is, Date& date)
{
    std::cout << "Day: ";
    is >> date._day;
    std::cout << "Month: "; 
    is >> date._month;
    std::cout << "Year: ";
    is >> date._year;

    return is;
}

std::ostream& operator<<(std::ostream& os, Date date)
{
    os << date.getDay() << "/" << date.getMonth() << "/" << date.getYear();

    return os;
}