//
// Write a program that asks the user to type 5 doubles and writes the average of the 5
// doubles.This program can use only 2 variables.
//	
// Created by Ivan Kosiakov on 9/10/2021
//

#include <iostream>

using namespace std;

int main() {

	double Number, Average = 0; //Only 2 variables

	cout << "Give me 5 numbers: ";
	cin >> Number; //User enteres some number
	Average = Average + Number; // We gonna save it inside "Average"

	cin >> Number; // Actually the same that I've made before, but 4 more times
	Average = Average + Number;

	cin >> Number; // 3 more times
	Average = Average + Number;

	cin >> Number; // 2 more...
	Average = Average + Number;

	cin >> Number; // The last one
	Average = Average + Number;

	Average = Average / 5; // We are going to find average

	cout << endl << "The average of these 5 numbers is: " << Average;

	return 0;
}
