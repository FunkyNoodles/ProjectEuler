#include "stdafx.h"
#include "Problem7.h"
#include <iostream>
#include <math.h>

using namespace std;


Problem7::Problem7()
{
	//By brute force
	int count = 0;
	unsigned __int64 counter = 2;
	while (count < 10001)
	{
		
		if (checkPrimes(counter))
		{
			
			count++;
		}
		counter++;
	}
	cout << counter-1 << endl;
}


Problem7::~Problem7()
{
}

bool Problem7::checkPrimes(unsigned __int64 number) {
	unsigned __int64 max = 2;
	for (unsigned __int64 i = 2; i <= sqrt(number); i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}
	return true;
}