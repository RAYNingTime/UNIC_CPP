//
//	Week 10 Lab Exercise 1
//
//Created by Ivan Kosiakov on 01 / 12 / 2021

#include <iostream>

using namespace std;

bool evenOrOdd(int);

int main()
{
	int number;
	bool answer;

	cout << "Enter the number: ";
	cin >> number;

	answer = evenOrOdd(number);

	if (answer == true)
		cout << "This number is even!";
	else if (answer == false)
		cout << "This number is odd!";

	return 0;
}

//Function that checks number (Is it odd or even);
bool evenOrOdd(int num) {
	bool answ;

	if (num % 2 == 0)
		answ = true;
	else if (num % 2 == 1)
		answ = false;

	return answ;
}
