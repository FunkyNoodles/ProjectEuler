#include "stdafx.h"
#include "Problem10.h"
#include <math.h>
#include <iostream>

using namespace std;

Problem10::Problem10()
{
	unsigned int counter = 2;
	unsigned int primesUnder = 2000000;
	unsigned __int64 sum = 0;
	while (counter < primesUnder)
	{
		if (checkPrimes(counter) == true)
		{
			sum += counter;
		}
		counter++;
	}
	cout << sum << endl;
}

Problem10::~Problem10()
{
}

bool Problem10::checkPrimes(unsigned int number) {
	for (unsigned __int64 i = 2; i <= sqrt(number); i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}
	return true;
}