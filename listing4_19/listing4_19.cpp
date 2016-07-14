// listing4_19.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


// addpntrs.cpp -- pointer addition
#include <iostream>
int main()
{
	using namespace std;
	double wages[3] = { 10000.0, 20000.0, 30000.0 };
	short stacks[3] = { 3, 2, 1 };
	// Here are two ways to get the address of an array
	double * pw = wages; // name of an array = address
	short * ps = &stacks[0]; // or use address operator
	// with array element
	cout << "pw = " << pw << ", *pw = " << *pw << endl;
	pw = pw + 1;
	cout << "add 1 to the pw pointer:\n";
	cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";
	cout << "ps = " << ps << ", *ps = " << *ps << endl;
	ps = ps + 1;
	cout << "add 1 to the ps pointer:\n";
	cout << "ps = " << ps << ", *ps = " << *ps << "\n\n";
	cout << "access two elements with array notation\n";
	cout << "stacks[0] = " << stacks[0]
		<< ", stacks[1] = " << stacks[1] << endl;
	cout << "access two elements with pointer notation\n";
	cout << "*stacks = " << *stacks
		<< ", *(stacks + 1) = " << *(stacks + 1) << endl;
	cout << sizeof(wages) << " = size of wages array\n";
	cout << sizeof(pw) << " = size of pw pointer\n\n";

	cout << sizeof(stacks) << " = size of stacks array\n";
	cout << sizeof(ps) << " = size of ps pointer\n";

	short tell[10]; // tell an array of 20 bytes
	cout << tell << endl; // displays &tell[0]
	cout << &tell << endl; // displays address of whole array


	int tacos[10] = { 5, 2, 8, 4, 1, 2, 2, 4, 6, 8 };
	int * ptt = tacos; // suppose pf and tacos are the address 3000
	ptt = ptt + 1; // now pt is 3004 if a int is 4 bytes
	int *pe = &tacos[9]; // pe is 3036 if an int is 4 bytes
	pe = pe - 1; // now pe is 3032, the address of tacos[8]
	int diff = pe - ptt; // diff is 7, the separation between
	// tacos[8] and tacos[1]

	return 0;
}