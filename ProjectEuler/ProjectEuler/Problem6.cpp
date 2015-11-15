#include "stdafx.h"
#include "Problem6.h"
#include <math.h>
#include <iostream>

using namespace std;


Problem6::Problem6()
{
	cout << sumOfSquares(100) - sqareOfSums(100)  << endl;
}

Problem6::~Problem6()
{
}

unsigned int Problem6::sumOfSquares(int n)
{
	return pow(n*(n+1)/2,2);
}

unsigned int Problem6::sqareOfSums(int n)
{
	return n*(n+1)*(2*n+1)/6;
}
