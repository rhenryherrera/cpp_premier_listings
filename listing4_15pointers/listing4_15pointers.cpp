// listing4_15pointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

// pointer.cpp -- our first pointer variable
#include <iostream>
int main()
{
	using namespace std;
	int updates = 6; // declare a variable
	int * p_updates; // declare pointer to an int
	p_updates = &updates; // assign address of int to pointer
	// express values two ways
	cout << "Values: updates = " << updates;
	cout << ", *p_updates = " << *p_updates << endl;
	// express address two ways
	cout << "Addresses: &updates = " << &updates;
	cout << ", p_updates = " << p_updates << endl;
	// use pointer to change value
	*p_updates = *p_updates + 1;
	cout << "Now updates = " << updates << endl;

	int ducks{ 12 };
	int * birddog = &ducks;
	cout << "Values: birddog = " << birddog;
	cout << ", *birddog = " << *birddog << endl;
	
	// listing 4.16 
	int higgens = 5;
	int * pt = &higgens;
	cout << "Value of higgens = " << higgens
		<< "; Address of higgens = " << &higgens << endl;
	cout << "Value of *pt = " << *pt
		<< "; Value of pt = " << pt << endl;


	int * pt1;
	pt1 = (int*) 0xB8000000; // type mismatch

	int higgens2;
	int * pt2 = &higgens2;

	return 0;
}
