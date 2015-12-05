#include "stdafx.h"
#include "Problem16.h"
#include <iostream>
#include <math.h>

using namespace std;

Problem16::Problem16()
{
	int arr[400];
	int arrSize = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < arrSize; i++)
	{
		arr[i] = 0;
	}
	arr[0] = 2;

	cout << "111111111111111111111111111" << endl;
	int carry = 0;
	for (int i = 0; i < 999; i++)
	{
		
		for (int j = 0; j < arrSize; j++)
		{
			int tempSum = 0;
			tempSum = arr[j] + arr[j] + carry;
			arr[j] = tempSum % 10;
			carry = (tempSum - tempSum % 10)/10;
		}
	}
	int digitsSum = 0;
	for (int i = 0; i < arrSize; i++)
	{
		digitsSum += arr[i];
		//cout << arr[i];
	}
	cout << digitsSum << endl;
}

Problem16::~Problem16()
{
}