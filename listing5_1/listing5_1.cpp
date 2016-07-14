// listing5_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


// forloop.cpp -- introducing the for loop
#include <iostream>
int main()
{
	using namespace std;
	int i; // create a counter
	// initialize; test ; update
	for (i = 0; i < 5; i++){
		cout << "C++ knows loops.\n";
		cout << "i = " << i << "\n";
	
	}
	cout << "C++ knows when to stop.\n";

	for (int num = 1; num <= 64; num *= 2) 
		cout << num << " ";

	int x = (1, 024);
	int y;
	y = 1, 024;

	return 0;
}