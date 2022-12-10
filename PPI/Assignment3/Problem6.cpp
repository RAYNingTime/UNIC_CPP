/*
	Write the following function that tests whether or not a point is within a rectangle
	centered at (0,0):

		void pointInRectangle(double width, double height, double x, double y, bool &inRectangle)

	Write a test program that prompts the user to enter the dimensions of a rectangle
	and the coordinates of a point and displays the appropriate message depending on
	whether or not the point is within the rectangle. The process is repeated until the
	user enters 0 for the width and 0 for the height. Your program should do error
	checking on the width and height.

	Made by Ivan Kosiakov on 01/01/2022
*/

#include <iostream>

using namespace std;

void pointInRectangle(double, double, double, double, bool&);

int main()
{
	double width, height, x, y;
	bool inRectangle;

	do {
		//Error checking for negative value
		do {
			cout << "Enter width and height of a rectangle : ";
			cin >> width >> height;

			if (height < 0 || width < 0) {
				cout << "You entered negative value! Try again!" << endl << endl;
			}
		} while (height < 0 || width < 0);

		//Checking for a point 0,0
		if (height != 0 || width != 0) {
			cout << "Enter the two coordinates of the point: ";
			cin >> x >> y;

			pointInRectangle(width, height, x, y, inRectangle);

			//Program displays message depending on whether or not the point is within the rectangle
			if (inRectangle == true)
				cout << "Point is within a rectangle" << endl << endl;
			else
				cout << "Point is NOT withing a rectangle" << endl << endl;
		}
	} while (height != 0 || width != 0);

	cout << endl << "Goodbye!";

	return 0;
}

//This function tests whether or not a point is within a rectangle centered at 0,0
void pointInRectangle(double width, double height, double x, double y, bool& inRectangle) {
	if (x < 0)
		x = -x;
	
	if (y < 0)
		y = -y;

	if ((x <= width / 2) && (y <= height / 2)) {
		inRectangle = true;
	}
	else
		inRectangle = false;
}
