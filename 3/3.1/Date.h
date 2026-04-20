
#pragma once

class Date
{
private:
	int _day;
	int _month;
	int _year;

public:
	void setDay(int day);
	void setMonth(int month);
	void setYear(int year);
	int getDay();
	int getMonth();
	int getYear();
};