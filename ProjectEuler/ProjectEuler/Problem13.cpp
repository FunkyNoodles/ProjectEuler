#include "stdafx.h"
#include "Problem13.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int sizeArr = 100;
const int digitLength = 50;
string arr[sizeArr];

Problem13::Problem13()
{
	string nextLine;
	
	ifstream inFile;
	inFile.open("./Problem13.txt", ios::in);
	//Read file to array
	for (int i = 0; i < sizeArr; i++)
	{
		inFile >> nextLine;
		//cout << nextLine << endl;
		arr[i] = nextLine;
	}
	string finalString = "";
	Problem13::buildString(&finalString, 0, 1, sizeArr);
	inFile.close();
	cout << endl << finalString << endl;
	cout << endl << finalString.substr(0, 10) << endl;
}

Problem13::~Problem13()
{
}
//digitPos is 1 indexed
//using a ripple carry adder since strings are too long
void Problem13::buildString(string * soFar, int carry, int digitPos, int sizeArr)
{
	int build = 0; //sum of all the digits from the same bit
	
	if (digitPos > digitLength)
	{
		//Finished
		if (carry != 0)
		{
			//Only append when the fisrt carry is not zero
			*soFar = std::to_string(carry) + *soFar;
		}
	}
	else {
		for (int i = 0; i < sizeArr; i++)
		{
			//Add up all the digits of the same digit position from the strings
			build += stoi(arr[i].substr(digitLength - digitPos, 1));
		}
		build += carry; //Add the carry from previous addition
		int newCarry = 0;
		newCarry = (int)(build / 10); //The new carry is just everythin except build's unit digit
		int unitOfBuild;
		unitOfBuild = ((float)((build / 10.0) - newCarry) * 10); //find the unit digit of build, it'll become the answer for this digit position
		*soFar = std::to_string(unitOfBuild) + *soFar;
		buildString(soFar, newCarry, digitPos + 1, sizeArr); //Repeat for next digit position
	}
}