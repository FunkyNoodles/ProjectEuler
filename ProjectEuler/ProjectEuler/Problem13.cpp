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
	int build = 0;
	
	if (digitPos > digitLength)
	{
		if (carry != 0)
		{
			*soFar = std::to_string(carry) + *soFar;
		}
	}
	else {
		for (int i = 0; i < sizeArr; i++)
		{
			build += stoi(arr[i].substr(digitLength - digitPos, 1));
		}
		build += carry;
		
		int newCarry = 0;
		newCarry = (int)(build / 10);
		int unitOfBuild;
		unitOfBuild = ((float)((build / 10.0) - newCarry) * 10);
		//cout << build << "\t" << unitOfBuild << endl;
		*soFar = std::to_string(unitOfBuild) + *soFar;
		//cout << newCarry << "\t" << unitOfBuild << "\t" << *soFar << endl;
		buildString(soFar, newCarry, digitPos + 1, sizeArr);
		/*cout << build << endl;
		cout << newCarry << endl;
		cout << unitOfBuild << endl;*/
	}
}