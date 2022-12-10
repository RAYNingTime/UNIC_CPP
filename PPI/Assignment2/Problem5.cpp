/*
  Rewrite the Body Mass Index problem from Programming Assignment 1 so that it
  will also display the interpretation of the calculated BMI as follows

  Created by Ivan Kosiakov on 18 / 11 / 2021
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	const double UNDERWEIGHT = 18.5, NORMAL = 25.0, OVERWEIGHT = 30.0, POUND_TO_KG = 0.45359237, INCHES_TO_METER = 0.0254;
	double BMI, weight, height;

	do {
		cout << "Enter weight in pounds: ";
		cin >> weight;

		cout << "Enter height in inches: ";
		cin >> height;

		//Checking for negative value
		if (height < 0 || weight < 0) {
			cout << "You entered negative value! Try again!" << endl << endl;
		}
	} while (height < 0 || weight < 0);

	//Using formula for BMI
	BMI = (weight * POUND_TO_KG / pow(height * INCHES_TO_METER, 2));
	cout << "\nYour BMI is " << BMI << endl;

	cout << "You are ";

	//Checking interpretations of BMI
	if (BMI < UNDERWEIGHT)
		cout << "underweight";
	else if (BMI < NORMAL)
		cout << "normal";
	else if (BMI < OVERWEIGHT)
		cout << "overweight";
	else cout << "obese";

	cout << " weight";

	return 0;
}
