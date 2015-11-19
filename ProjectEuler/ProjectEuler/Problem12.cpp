#include "stdafx.h"
#include "Problem12.h"
#include <math.h>
#include <iostream>

using namespace std;

Problem12::Problem12()
{
	int counter = 1;
	unsigned __int64 triangleNum = 1;
	int numOfDivisors = 1;
	while (findNumberOfDivisors(triangleNum) <= 500)
	{
		counter++;
		triangleNum += counter;
	}
	cout << triangleNum << endl;
}

Problem12::~Problem12()
{
}

int Problem12::findNumberOfDivisors(unsigned __int64 n)
{
	int i = 1;
	int count = 0;
	while (i <= sqrt(n))
	{
		if (n % i ==0)
		{
			count++;
			if (n != n/i)
			{
				count++;
			}
		}
		i++;
	}
	count++;//n itself
	return count;
}
