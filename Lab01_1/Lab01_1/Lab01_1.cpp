// Lab01_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Tell me your favorite foods. ";
	string food1;
	string food2;
	cout << "What is the first food?: ";
	getline(cin, food1);
	cout << "What is your second food?: ";
	getline(cin, food2);
	cout << "Both foods: " << food1 << food2;
		getchar();

	return 0;
}

