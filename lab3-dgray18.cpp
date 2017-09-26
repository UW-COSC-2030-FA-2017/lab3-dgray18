//Dustin Gray
// overflows.cpp : Defines the entry point for the console application.


#include "stdafx.h"
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	//Max value for short n 255 overflows at 255 sum is 32640 and at 256 it overflows to -32640

	//max value for long n is 5097082 the sum is 2143902799 at 5097083 the sum is -2145967414

	//the max value of n for short fact is 15 and will overflow to -32768 at 16 if n is equal to 18 or greater fact will = 0

	//the max value of n for long fact is 19 with a value of 109641728 and overflow at 20 with a value of -2102132736

	//the max value of n for double fact is 9 with a value of 362880 and overflow at 10 with a value of 3.6288e+06

	// the max value of n for the double of the function f(n) is 5 with a value of 0 and an overflow value of -1.11022e-16 with a value of 6
	// if n is a float its max n is 8 with a value of 0 and an overflow at 9 with a value of 2.22045e-16


	/*
	int n = 0;
	cin >> n;
	double number = 0;

	for (int i = 0; i < n; i++) {

		number += 1.0/n;
		
	}



	cout << number - 1;
	*/

	for (double i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}
	// the numeric error occurs when i is a float when i does not stop at 4.2 (the last value less than 4.4) but continues to 4.4 when i is a double it stops at the correct number
	system("pause");


	return 0;
}

