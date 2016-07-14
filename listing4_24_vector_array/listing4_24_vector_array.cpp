// listing4_24_vector_array.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


// choices.cpp -- array variations
#include <iostream>
#include <vector> // STL C++98
#include <array> // C++11
int main()
{
	using namespace std;
	
	// C, original C++
	double a1[4] = { 1.2, 2.4, 3.6, 4.8 };
	
	// C++98 STL
	vector<double> a2(4); // create vector with 4 elements
	
	// no simple way to initialize in C98
	a2[0] = 1.0 / 3.0;
	a2[1] = 1.0 / 5.0;
	a2[2] = 1.0 / 7.0;
	a2[3] = 1.0 / 9.0;
	
	// C++11 -- create and initialize array object
	array<double, 4> a3 = { 3.14, 2.72, 1.62, 1.41 };
	array<double, 4> a4;
	a4 = a3; // valid for array objects of same size
	
	// use array notation
	cout << "a1[0]: " << a1[0] << " at " << &a1[0] << endl;
	cout << "a1[1]: " << a1[1] << " at " << &a1[1] << endl;
	cout << "a1[2]: " << a1[2] << " at " << &a1[2] << endl;
	cout << "a1[3]: " << a1[3] << " at " << &a1[3] << endl;
	
	cout << "a1[2]: " << a1[2] << " at " << &a1[2] << endl;
	cout << "a2[2]: " << a2[2] << " at " << &a2[2] << endl;
	cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
	cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;
	
	// misdeed
	a1[-2] = 20.2;
	cout << "a1[-2]:" << a1[-2] << " at " << &a1[-2] << endl;
	cout << "a2[2]: " << a2[2] << " at " << &a2[2] << endl;
	cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
	cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;
	
	// copy array into a vector example
	vector<int> lotteryNumVect(10); 
	int lotteryNumArray[5] = { 4, 13, 14, 24, 34 };
	lotteryNumVect.insert(lotteryNumVect.begin() + 3, lotteryNumArray, lotteryNumArray + 5);

	int oddlyold[5] = { 1, 3, 5, 7, 9 };
	array<int, 5> oddlynew = { 1, 3, 5, 7, 9 };
	//int arraycopy[5] = oddlynew.data; 

	int evenold = oddlyold[0] + oddlyold[4];

	int evennew = oddlynew[0] + oddlynew[4];


	return 0;
}
