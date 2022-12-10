//
// Develop a program that displays on the console the length of the hypotenuse of a triangle
// for different lengths of the other sides of the triangle based on the Pythagorean theorem1.
//	
// Created by Ivan Kosiakov on 9/10/2021
//
#include <iostream>

using namespace std;

int main() {

	double sideA, sideB, sideC;

	cout << "Input the lengths of the sides of a triangle" << endl;
	cout << endl << "Side A length: "; 
	cin >> sideA; // User enteres A side of the triangle
	cout << endl << "Side B length: ";
	cin >> sideB; // User enteres B side of the triangle

	sideC = pow(pow(sideA, 2) + pow(sideB, 2), 0.5); // I am not sure that we covered powers, but I don't know how to make square root without power

	cout << endl << "Based on the Pythagorean theorem, the lenght of side C is: " << sideC;

	return 0;
}
