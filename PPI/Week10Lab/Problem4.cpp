//
//	Week 10 Lab Exercise 4
//
//Created by Ivan Kosiakov on 01 / 12 / 2021

#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath> // M_PI

using namespace std;

double areaOfCircle(double);
double perimetrOfCircle(double);

int main()
{
	double radius, perimeter, area;

	cout << "Enter radius of circle: ";
	cin >> radius;

	// S = p * r^2
	area = areaOfCircle(radius);

	// P = 2p * r
	perimeter = perimetrOfCircle(radius);

	cout << "Perimeter is: " << perimeter << endl
		<< "Area is: " << area << endl;

	return 0;
}

//Function for calculating the area of the circle
double areaOfCircle(double radius) {
	double area;
	area = M_PI * pow(radius, 2);

	return area;
}

//Function for calculationt the are of the circle
double perimetrOfCircle(double radius) {
	double perimeter;
	perimeter = 2 * M_PI * radius;

	return perimeter;
}
