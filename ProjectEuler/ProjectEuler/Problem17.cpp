#include "stdafx.h"
#include "Problem17.h"
#include <string>

using namespace std;

Problem17::Problem17()
{
}


Problem17::~Problem17()
{
}

string Problem17::convertNum2String(int n)
{
	string text;
	
	//Database
	//Irregulars
	string irr[20];
	irr[0] = "one";
	irr[1] = "two";
	irr[2] = "three";
	irr[3] = "four";
	irr[4] = "five";
	irr[5] = "six";
	irr[6] = "seven";
	irr[7] = "eight";
	irr[8] = "nine";
	irr[9] = "ten";
	irr[10] = "eleven";
	irr[11] = "twelve";
	irr[12] = "thirteen";
	irr[13] = "fourteen";
	irr[14] = "fifteen";
	irr[15] = "sixteen";
	irr[16] = "seventeen";
	irr[17] = "eighteen";
	irr[18] = "nineteen";
	irr[19] = "twenty";
	return text;
}
