#pragma once
#include <string>
#include <vector>
class Problem22
{
public:
	Problem22();
	~Problem22();
	void quickSort(std::vector<std::string> * arr, int left, int right);
	int findNameScore(std::string name, int index);
};

