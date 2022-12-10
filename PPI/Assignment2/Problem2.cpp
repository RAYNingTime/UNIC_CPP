/*
Write a program that prompts the user to enter the width w and height h of a
rectangle, along with a point (x,y). Your program is going to check if the point is
within the rectangle centered at (0,0) with width w and height h.

Created by Ivan Kosiakov on 18 / 11 / 2021
*/
#include <iostream>

using namespace std;

int main()
{
	const int BASE_X = 0, BASE_Y = 0;
	double height, width, pointX, pointY;

	do {
		cout << "Enter width and height of a rectangle centered at (" << BASE_X << "," << BASE_Y << ") : ";
		cin >> height >> width;

		//Checking for negative value
		if (height < 0 || width < 0) {
			cout << "You entered negative value! Try again!" << endl;
		}
	} while (height < 0 || width < 0);

	cout << "Enter the two coordinates of the point: ";
	cin >> pointX >> pointY;

	//Checking if point inside of rectangle
	if ((pointX <= width / 2) && (pointY <= height / 2)) {
		cout << endl << "Point (" << pointX << "," << pointY << ") is in the rectangle.";
	}
	else
		cout << endl << "Point (" << pointX << "," << pointY << ") is not in the rectangle.";

	return 0;
}
