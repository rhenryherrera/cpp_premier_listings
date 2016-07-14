// listing2_1.cpp : Defines the entry point for the console application.
//



#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	#if __cplusplus==201402L
		std::cout << "C++14" << std::endl;
	#elif __cplusplus==201103L
		std::cout << "C++11" << std::endl;
	#else
		std::cout << "C++" << std::endl;
	#endif

	cout << "Come up snf C++ me some time. " << endl;
	cout << "You won;t regret it!" << endl;
	cin.get();
	return 0;
}

