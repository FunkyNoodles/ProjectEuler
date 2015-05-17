// ProjectEuler.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int _tmain(int argc, _TCHAR* argv[]){
	int totalSum = 0;
	for (int i = 0; i < 1000; i++){
		if (i % 3 == 0 || i % 5 == 0){
			totalSum += i;
		}
	}
	cout << totalSum << endl;
	cout << "dude" << endl;
	return 0;
}
