
#include "Date.h"
#include <iostream>

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

void Date::show()
{
    std::cout << "Day: " << _day << std::endl;
    std::cout << "Month: " << _month << std::endl;
    std::cout << "Year: " << _year << std::endl;
}

void Date::update()
{
    std::cout << "Day: ";
    std::cin >> _day;

    std::cout << "Month: ";
    std::cin >> _month;

    std::cout << "Year: ";
    std::cin >> _year;
}

void Date::update(int day, int month, int year)
{
    _day = day;
    _month = month;
    _year = year;
}