//Body Mass Index (BMI) is a measure of health on weight. It can be calculated by
//taking your weight in kilogramsand dividing by the square of your height in meters.
//Write a program than prompts the user to enter a weight in poundsand height in
//inchesand display the BMI.Note that 1 pound is 0.45359237 kilogram and 1 inch is
//0.0254 meter

#include <iostream>

using namespace std;

int main()
{
	double BMI, weight, height;

	cout << "Enter weight in pounds: ";
	cin >> weight;

	cout << "Enter height in inches: ";
	cin >> height;
	
	//THE formula for BMI
	BMI = (weight * 0.45359237 / pow(height * 0.0254, 2));
	cout << "BMI is " << BMI;

	return 0;
}
