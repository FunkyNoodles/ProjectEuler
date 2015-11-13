#include "stdafx.h"
#include "Problem3.h"
#include <iostream>
#include <math.h>

using namespace std;


Problem3::Problem3()
{
	Problem3::findPrimes(600851475143);
}


Problem3::~Problem3()
{
}

void Problem3::findPrimes(unsigned __int64 number) {
	unsigned __int64 max = 2;
	while (number % 2 == 0)
	{
		cout << 2 << " ";
		number = number / 2;
	}
	for (unsigned __int64 i = 3; i <= sqrt(number); i += 2)
	{
		while (number % i == 0)
		{
			number = number / i;
			cout << i << " ";
			max = i;
		}
	}
	if (number > 2)
	{
		cout << number << " ";
		max = number;
	}
	cout << endl << max << endl;
}
