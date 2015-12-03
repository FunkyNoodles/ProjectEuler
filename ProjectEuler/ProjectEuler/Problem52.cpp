#include "stdafx.h"
#include "Problem52.h"
#include <iostream>

using namespace std;

Problem52::Problem52()
{
	unsigned long n1 = 0;
	bool same = false;
	//cout << checkSameDigits(125874, 251784);
	while (!same)
	{
		n1++;
		//cout << n1 << endl;
		for (int i = 1; i < 7; i++)
		{
			if (checkSameDigits(n1, i*n1))
			{
				same = true;
			}
			else
			{
				same = false;
				break;
			}
		}
	}
	cout << n1 << endl;
}

Problem52::~Problem52()
{
}

bool Problem52::checkSameDigits(unsigned long n1, unsigned long n2)
{
	int digits[10];
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		digits[i] = 0;
	}
	while (n1 != 0)
	{
		digits[n1 % 10]++;
		n1 /= 10;
	}
	while (n2 != 0)
	{
		digits[n2 % 10]--;
		n2 /= 10;
	}
	for (i = 0; i < 10; i++)
	{
		if (digits[i] != 0)
		{
			return false;
		}
	}
	return true;
}
