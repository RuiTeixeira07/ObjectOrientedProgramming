
#pragma once

class Date 
{
	private:
		int _day, _month, _year;
	
	public:
		void setDay(int day)
		{
			_day = day;
		}
		void setMonth(int month) 
		{
			_month = month;
		}
		void setYear(int year)
		{
			_year = year;
		}
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
};