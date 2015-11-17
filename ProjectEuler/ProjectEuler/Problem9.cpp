#include "stdafx.h"
#include "Problem9.h"
#include <math.h>
#include <iostream>

using namespace std;


Problem9::Problem9()
{
	int a, b, c;
	for (int a = 0; a < 1000; a++)
	{
		for (int b = a+1; b < 1000; b++)
		{
			for (int c = b+1; c < 1000; c++)
			{
				if (pow(a,2) + pow(b,2) == pow(c,2) && a+b+c ==1000)
				{
					cout << a*b*c << endl;
				}
			}
		}
	}
}


Problem9::~Problem9()
{
}
