#include "stdafx.h"
#include "Problem4.h"
#include <iostream>

using namespace std;

Problem4::Problem4()
{
	__int32 max = 0, product = 0;
	int i = 0, j = 0;
	for (i = 0; i < 1000;i++) {
		for (j = 0; j < 1000; j++)
		{
			product = i * j;
			//cout << product << endl;
			if (Problem4::checkPalindrome(product) == true && product > max)
			{
				//cout << product << endl;
				max = product;
			}
		}
	}
	cout << max << endl;
	
}

Problem4::~Problem4()
{
}

bool Problem4::checkPalindrome(__int32 number) {
	int digit;
	__int32 reverse = 0;
	__int32 numberOriginal = number;
	while (number > 0)
	{
		digit = number % 10;
		reverse = reverse * 10 + digit;
		number = (__int32)(number / 10);
	}
	if (numberOriginal == reverse)
	{
		return true;
	}
	return false;
}