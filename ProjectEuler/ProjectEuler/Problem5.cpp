#include "stdafx.h"
#include "Problem5.h"
#include <iostream>
using namespace std;


Problem5::Problem5()
{
	//Done by brute force
	int number = 1;
	while (checkDivisibleAll(number, 20) == false)
	{
		number++;
	}
	cout << number << endl;
}


Problem5::~Problem5()
{
}

bool Problem5::checkDivisibleAll(int number, int range)
{
	for (int i = 1; i <= range; i++)
	{
		if (number % i != 0)
		{
			return false;
		}
	}
	return true;
}
