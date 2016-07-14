// listing3_14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


// typecast.cpp -- forcing type changes
#include <iostream>
int main()
{
	using namespace std;
	int auks, bats, coots;
	// the following statement adds the values as double,
	// then converts the result to int
	auks = 19.99 + 11.99;
	char grade1 = 88;
	cout << grade1 << endl;
	cout.put(char(88));
	char grade2 = 'A';
	cout << 'A' << endl;
	cout << grade2 << endl;
	cout.put ('$');


	const int code = 66;
	int x = 66;
	char c1 =  31325; // narrowing, not allowed
	char c2 = { 66 }; // allowed because char can hold 66
	char c3{ code }; // ditto
	//char c4 = { x }; // not allowed, x is not constant
	x = 31325;
	char c5 = x; // allowed by this form of initialization

	// these statements add values as int
	bats = (int) 19.99 + (int) 11.99; // old C syntax
	coots = int(19.99) + int(11.99); // new C++ syntax
	cout << "auks = " << auks << ", bats = " << bats;
	cout << ", coots = " << coots << endl;
	char ch = 'Z';
	cout << "The code for " << ch << " is "; // print as char
	cout << int(ch) << endl; // print as int
	cout << "Yes, the code is ";
	cout << static_cast<int>(ch) << endl; // using static_cast
	return 0;
}