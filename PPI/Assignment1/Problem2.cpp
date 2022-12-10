//Write a program that prompts the user to enter two points(x1, y1) and (x2, y2) and display their distance.
//The formula for computing the distance is shown below :
//  d = ((x_2 - x_1)^2 + (y_2 - y_1)^2)^0.5

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	double x1, x2, y1, y2, d = 0; // Numbers must be double to have an fractional part

	cout << "Enter x1 and y1: ";
	cin >> x1 >> y1;

	cout << "Enter x2 and y2: ";
	cin >> x2 >> y2;

	d = pow(pow(x2 - x1, 2) + pow(y2 - y1, 2), 0.5); // Formula for computing the distance

	cout << "\nThe distance between this points (" << x1 << "," << y1 << ") and (" << x2 << "," << y2 << ") is "; printf("%.4f", d); 
	// I am using  printf("%.4f", d) to round down number up to 4 digits after point

	return 0;
}
