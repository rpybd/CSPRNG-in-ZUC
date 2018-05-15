
// ConsoleApplication1.cpp : ??????????????
//

#include "rng.h"
#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;

#define ROUND 31250*10
int main() {
	OzRng myRng;
	ofstream out("D://data.txt");
	FILETIME beg, end;
	GetSystemTimeAsFileTime(&beg);
	myRng.RNG(19937, ROUND, NULL);
	GetSystemTimeAsFileTime(&end);
	long dur = 100 * (end.dwLowDateTime - beg.dwLowDateTime);
	cout << dur;
	system("pause");

}


