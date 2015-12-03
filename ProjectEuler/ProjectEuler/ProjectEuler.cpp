// ProjectEuler.cpp : Defines the entry point for the console application.
#include "stdafx.h"
#include <iostream>
#include <time.h>

#include "Problem1.h"
#include "Problem2.h"
#include "Problem3.h"
#include "Problem4.h"
#include "Problem5.h"
#include "Problem6.h"
#include "Problem7.h"
#include "Problem8.h"
#include "Problem9.h"
#include "Problem10.h"
#include "Problem11.h"
#include "Problem12.h"
#include "Problem13.h"
#include "Problem14.h"
#include "Problem15.h"
#include "Problem19.h"
#include "Problem22.h"
#include "Problem52.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[]){
	clock_t t1, t2;
	t1 = clock();
	/* Change next line to execute different problems */
	Problem22 test;
	t2 = clock();
	float runTime = ((float)t2 - (float)t1);
	cout << "Run time: "<< runTime << "ms" << endl;
	system("pause");
	return 0;
}
