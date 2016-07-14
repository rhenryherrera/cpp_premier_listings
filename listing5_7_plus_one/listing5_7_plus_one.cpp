// listing5_7_plus_one.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


// plus_one.cpp -- the increment operator
#include <iostream>
int main()
{
	using std::cout;
	int a = 20;
	int b = 20;
	cout << "a = " << a << ": b = " << b << "\n";
	cout << "a++ = " << a++ << ": ++b = " << ++b << "\n";
	cout << "a = " << a << ": b = " << b << "\n";
	int c = 10;
	c += a;
	cout << "c = " << c << ": a = " << a << "\n";
	int d = 10;
	d -= a;
	cout << "d = " << d << ": a = " << a << "\n";

	return 0;
}
