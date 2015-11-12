#include "stdafx.h"
#include "Problem2.h"
#include <iostream>

using namespace std;

Problem2::Problem2()
{
	unsigned __int32 numPrevious = 1;
	unsigned __int32 numCurrent = 2;
	unsigned __int32 numNext = 0;
	unsigned __int32 sum = 0;
	while (numPrevious <= 4000000) {
		if (numPrevious % 2 == 0) {
			sum += numPrevious;
		}
		numNext = numPrevious + numCurrent;
		numPrevious = numCurrent;
		numCurrent = numNext;
	}
	cout << sum << endl;
}