#include "stdafx.h"
#include "Problem19.h"

using namespace std;

Problem19::Problem19()
{
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
			return 30;
		}
	}
	return 0;
}
