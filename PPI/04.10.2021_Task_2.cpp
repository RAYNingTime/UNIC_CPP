/*
	Ask the user to enter the radius of a circle and calculate the area of that circle.

	Made by Ivan Kosiakov on 04/10/2021
*/

//To include the mathematical constants, you need to use a #define macro called _USE_MATH_DEFINES and add it before importing the cmath library
#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double r, S;
	cout << " Enter r of the circle: ";
	cin >> r;
	S = pow(r, 2) * M_PI;
	cout << "Area of the circle is: " << S;
	return 0;
}