// PP_II_17.02.2022.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int a[100], i = 0;

	do {
		cin >> a[i];
		i++;
	} while (a[i - 1] != -1);

	return 0;
}