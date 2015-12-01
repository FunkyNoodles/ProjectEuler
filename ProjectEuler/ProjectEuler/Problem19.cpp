#include "stdafx.h"
#include "Problem19.h"
#include <iostream>

using namespace std;

struct Date
{
	int day; // 1 for sunday, 7 for saturday
	int date;
	int month;
	int year;
};

Problem19::Problem19()
{
	struct Date d1;
	//Date d2;
	unsigned int counter = 0;
	//Initialize
	d1.day = 2;
	d1.date = 1;
	d1.month = 1;
	d1.year = 1900;
	
	for (int i = d1.year; i <= 2000; i++)
	{
		//i traverses years
		for (int j = d1.month; j <= 12; j++)
		{
			//j traverses months
			for (int k = 0; k <= Problem19::numberOfDays(d1.month, d1.year); k++)
			{
				//k traverses days
				d1 = *(incrementDay(d1));
				if (d1.day == 1 && d1.date == 1 && d1.year >= 1901 && d1.year <= 2000)
				{
					counter++;
					cout << d1.month << "\t" << d1.year << endl;
				}
				//cout << d1.day << "\t" << d1.date << "\t" << d1.month << "\t" << d1.year << endl;
				//cout << d1.date << endl;
			}
		}
	}
	cout << counter << endl;
}

Problem19::~Problem19()
{
}

bool Problem19::checkLeapYear(int year)
{
	if (year % 4 == 0 && (year % 400 == 0 || year % 100 != 0))
	{
		return true;
	}
	return false;
}

int Problem19::numberOfDays(int month, int year)
{
	if (month == 9 || month == 4 || month == 6 || month == 11)
	{
		return 30;
	}
	else if (month == 2)
	{
		if (Problem19::checkLeapYear(year))
		{
			return 29;
		}
		else
		{
			return 28;
		}
	}
	else
	{
		return 31;
	}
	return 0;
}

Date * Problem19::incrementDay(Date & d)
{
	//Increment day
	if (d.day == 7)
	{
		d.day = 1;
	}
	else
	{
		d.day++;
	}
	//Increment date
	if (d.date == Problem19::numberOfDays(d.month, d.year))
	{
		d.date = 1;
		if (d.month == 12)
		{
			d.month = 1;
			d.year++;
		}
		else
		{
			d.month++;
		}
	}
	else
	{
		d.date++;
	}
	return &d;
	return nullptr;
}

