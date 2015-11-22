#include "stdafx.h"
#include "Problem14.h"
#include <iostream>

using namespace std;

Problem14::Problem14()
{
	unsigned int max = 0;
	int maxN = 0;
	unsigned int count = 0;
	for (unsigned int i = 1; i < 1000000; i++)
	{
		count = findCollatzNumber(i);
		if (max < count)
		{
			max = count;
			maxN = i;
		}
	}
	cout << max << "\t" << maxN << endl;
}

Problem14::~Problem14()
{
}

unsigned int Problem14::findCollatzNumber(unsigned __int64 n)
{
	unsigned int count = 1;
	while (n != 1)
	{
		count++;
		if (n % 2 == 0)
		{
			n = n / 2;
		}
		else {
			n = 3 * n + 1;
		}
	}
	return count;
}
