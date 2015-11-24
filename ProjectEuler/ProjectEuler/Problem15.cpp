#include "stdafx.h"
#include "Problem15.h"
#include <iostream>

using namespace std;

const int gridWidth = 21;
const int gridHeight = 21;
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

void Problem15::findPathNumber(int curX, int curY, int tarX, int tarY, int gridWidth, int gridHeight, unsigned __int64 * count)
{
	if (grid[curX][curY] == 2)
	{
		cout << *count << endl;
		*count = *count + 1;
		return;
	}
	if (curX < gridWidth)
	{
		Problem15::findPathNumber(curX + 1, curY, gridWidth - 1, gridHeight - 1, gridWidth, gridHeight, count);
	}
	if (curY < gridHeight)
	{
		Problem15::findPathNumber(curX, curY + 1, gridWidth - 1, gridHeight - 1, gridWidth, gridHeight, count);
	}
}
