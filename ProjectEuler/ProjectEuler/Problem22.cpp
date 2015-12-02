#include "stdafx.h"
#include "Problem22.h"
#include <string>
#include <iostream>
#include <fstream>
#include <vector>

#define FILE_NAME  "./names.txt"
using namespace std;

Problem22::Problem22()
{
	string namesRaw;
	string singleName;
	int dude[10] = { 4,6,3,5,4,34,12,7,3,1 };
	ifstream file;
	file.open(FILE_NAME, ios::in);
	file >> namesRaw;
	vector<string> names;
	//cout << namesRaw.substr(namesRaw.find("\"")+1, namesRaw.find("\"", 1)-1) << endl;
	int quoteIndexFirst, quoteIndexSecond;
	unsigned __int64 totalScore = 0;
	for (int i = -1; i != namesRaw.rfind("\"");)
	{
		//cout << "Damn son" << endl;
		quoteIndexFirst = namesRaw.find("\"", i + 1);
		quoteIndexSecond = namesRaw.find("\"", quoteIndexFirst + 1);
		i = quoteIndexSecond;
		singleName = namesRaw.substr(quoteIndexFirst + 1, quoteIndexSecond - quoteIndexFirst - 1);
		names.push_back(singleName);
	}
	cout << names.size() << endl;
	quickSort(&names, 0, names.size()-1);
	for (int j = 0; j < names.size(); j++)
	{
		totalScore += findNameScore(names[j], j);
	}
	cout << totalScore << endl;
	//cout << names[937] << endl;
	//cout << findNameScore(names[937], 937) << endl;
}

Problem22::~Problem22()
{
}

void Problem22::quickSort(std::vector<std::string> * arr, int left, int right) {
	int i = left, j = right;
	string tmp;
	string pivot = (*arr)[(left + right) / 2];

	/* partition */
	while (i <= j) {
		while ((*arr)[i].compare(pivot) < 0)
			i++;
		while ((*arr)[j].compare(pivot) > 0)
			j--;
		if (i <= j) {
			tmp = (*arr)[i];
			(*arr)[i] = (*arr)[j];
			(*arr)[j] = tmp;
			i++;
			j--;
		}
	};

	/* recursion */
	if (left < j)
		quickSort(arr, left, j);
	if (i < right)
		quickSort(arr, i, right);
}

int Problem22::findNameScore(std::string name, int index)
{
	int charScore = 0;
	unsigned int totalScore = 0;
	for (int i = 0; i < name.length(); i++)
	{
		charScore = name[i] - 64;
		totalScore += charScore;
	}
	totalScore *= (index + 1);
	return totalScore;
}
