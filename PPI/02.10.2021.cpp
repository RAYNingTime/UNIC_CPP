/*
		Body Mass Index(BMI) is a measure of health on weight.It can be calculated by
	taking your weight in kilogramsand dividing by the square of your height in meters.
	Write a program than prompts the user to enter a weight in poundsand height in
	inchesand display the BMI.Note that 1 pound is 0.45359237 kilogram and 1 inch is
	0.0254 meter

	Made by Ivan Kosiakov on 02/10/2021
*/

#include <iostream>

using namespace std;

int main()
{
	double BMI, weight, height;

	cout << "Enter weight in pounds: " << endl;
	cin >> weight;

	cout << "Enter height in inches: " << endl;
	cin >> height;

	BMI = (weight * 0.45359237 / pow(height * 0.0254, 2));
	cout << "BMI is " << BMI << endl;

	return 0;
}