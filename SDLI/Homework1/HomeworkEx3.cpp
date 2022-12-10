//
// Write a program that prompts the user to enter the coordinates of two points(x_1, y_1)
// and (x_2, y_2), and displays the slope of the line that connects the two points.The
// formula of the slope is (y_2 - y_1) / (x_2 - x_1)
//
// Created by Ivan Kosiakov on 9/10/2021
//
#include <iostream>

using namespace std;

int main() {

	double x1, y1, x2, y2, slope;

	cout << "Enter the coordinates of the first point: ";
	cin >> x1 >> y1; // User enteres x1 and y1
	cout << "Enter the coordinates of the second point: ";
	cin >> x2 >> y2; // User enteres x2 and y2

	slope = (y2 - y1) / (x2 - x1); // Formula from condition

	cout << "The slope of the line connecting (" << x1 << ", " << y1 << ")";
	cout << " and (" << x2 << ", " << y2 << ") is: " << slope;

	return 0;
}
