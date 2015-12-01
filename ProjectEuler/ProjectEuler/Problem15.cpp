#include "stdafx.h"
#include "Problem15.h"
#include <iostream>

using namespace std;

const int gridWidth = 4;
const int gridHeight = 6;
unsigned __int64 grid[gridWidth][gridHeight];

Problem15::Problem15()
{
	unsigned __int64 count = 0;

	for (int i = 0; i < gridWidth; i++)
	{
		for (int j = 0; j < gridHeight; j++)
		{
			grid[i][j] = 1;
		}
	}
	for (int i = 1; i < gridWidth; i++)
	{
		for (int j = 1; j < gridHeight; j++)
		{
			grid[i][j] = grid[i - 1][j] + grid[i][j - 1];
		}
	}
	cout << grid[gridWidth-1][gridHeight-1] << endl;
}

Problem15::~Problem15()
{
}