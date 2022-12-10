#include <iostream>

using namespace std;

int main() {
	char option;
	double a, b, h, r, S;

	cout << "MENU" << endl;
	cout << "r - Rectangle" << endl;
	cout << "t - Triangle" << endl;
	cout << "s - Square" << endl;
	cout << "c - Circle" << endl;
	cout << "Choose an option: ";

	cin >> option; // 'option' gonna save letter
	
	switch (option) {
	case 't': { // Programm of counting area of a triangle
		cout << "\nEnter a of the Triangle (cm): " << endl;
		cin >> a;
		cout << "Enter height of the Triange: " << endl;
		cin >> h;
		S = (a * h) * 1 / 2; // S = 1/2 * a * h
		cout << "Area of the Triangle is " << S << " cm^2 " << endl;
		break;
	}

	case 'r': { // Programm of counting area of a rectangle
		cout << "\nEnter a side of the Rectangle (cm): " << endl;
		cin >> a;
		cout << "Enter b side of the Rectangle (cm): " << endl;
		cin >> b;
		S = a * b; // S = a * b
		cout << "Area of the rectangle is " << S << " cm^2 " << endl;
		break;
	}

	case 'c': { // Programm of counting area of a circle
		cout << "\nEnter radius of the Circle (cm): " << endl;
		cin >> r;
		S = pow(r, 2) * 3.14; // S = r^2 * pi
		cout << "Area of the circle is: " << S << " cm^2 " << endl;
		break;
	}

	case 's': { // Programm of counting area of a square
		cout << "\nEnter a of the Square (cm): " << endl;
		cin >> a;
		S = pow(a, 2); // S = a * a
		cout << "Area of the square is " << S << " cm^2 " << endl;
		break;
	}

	default: {
				cout << "\nYou entered a wrong symbol!"; // If 'option' contains not t/r/c/s user going to have an error.
				return 0;
			}
	}
}
