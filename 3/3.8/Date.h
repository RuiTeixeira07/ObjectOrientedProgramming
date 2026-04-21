
#pragma once

class Date
{
	private:
		int _day, _month, _year;

	public:
		Date(int day, int month, int year);
		int getDay()
		{
			return _day;
		}
		int getMonth()
		{
			return _month;
		}
		int getYear()
		{
			return _year;
		}
		bool operator==(Date date);
};