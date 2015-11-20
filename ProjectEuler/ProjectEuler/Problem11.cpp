#include "stdafx.h"
#include "Problem11.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


Problem11::Problem11()
{
	string nextLine;
	const int sizeArr = 400;
	const int gridLength = 20;
	const int gridHeight = 20;
	const int sequenceLength = 4;
	string arr[sizeArr];
	ifstream inFile;
	inFile.open("./Problem11.txt", ios::in);
	//Read file to array
	for (int i = 0; i < sizeArr; i++)
	{
		inFile >> nextLine;
		//cout << nextLine << endl;
		arr[i] = nextLine;
	}
	unsigned __int64 product = 1;
	unsigned __int64 max = 0;
	for (int i = 0; i < gridLength - sequenceLength+1; i++)
	{
		for (int j = 0; j < gridHeight; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				if (k == 0)
				{
					//search horz
					product = stoi(arr[i+ j*gridLength])*stoi(arr[i + 1 + j*gridLength])*stoi(arr[i + 2 + j*gridLength])*stoi(arr[i + 3 + j*gridLength]);
				}
				else if (k == 1 && j < 17)
				{
					//search diagonal
					product = stoi(arr[i + j*gridLength])*stoi(arr[i + 1 + (j + 1)*gridLength])*stoi(arr[i + 2 + (j + 2)*gridLength])*stoi(arr[i + 3 + (j + 3)*gridLength]);
				}
				else if (k == 2 && j < 17){
					//search vert
					product = stoi(arr[i + j*gridLength])*stoi(arr[i + (j + 1)*gridLength])*stoi(arr[i + (j + 2)*gridLength])*stoi(arr[i + (j + 3)*gridLength]);
				}
				if (product == 5438256)
				{
					cout << i << "\t" << j << endl;
				}
				if (max < product)
				{
					max = product;
				}
				//cout << product << endl;
			}
		}
	}
	cout << max << endl;
}

Problem11::~Problem11()
{
}
