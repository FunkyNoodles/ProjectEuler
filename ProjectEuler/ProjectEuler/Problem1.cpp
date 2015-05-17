#include "stdafx.h"
#include <iostream>

using namespace std;



public namespace Problem1{
	public  Problem1(){
		int totalSum = 0;
		for (int i = 0; i < 1000; i++){
			if (i % 3 == 0 || i % 5 == 0){
				totalSum += i;
			}
		}
		cout << totalSum << endl;
		cout << "dude" << endl;
	}
	
}
