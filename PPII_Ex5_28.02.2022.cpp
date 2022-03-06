/*
		Some students were asked to rate the quality of food in the cafeteria on a
	scale 0 to 20 (0 for awful and 20 for excellent). Write a program which will
	summarize their responses in the following form.

		Made by Ivan Kosiakov on 28/02/2022
*/

#include <iostream>
#include <iomanip>

using namespace std;

void amountOfStars(int[], int, int);

int main()
{
	const int MAX_STARS = 20, MIN_STARS = 0, STUDENTS = 100, TO_FINISH = -1;
	int studentChoice, foodRate[STUDENTS], i = 0;

	do {
		//Checking for a negative value
		do {
			cout << "Enter amount of stars to rate food (-1 to finish): ";
			cin >> foodRate[i];
			if (foodRate[i] < TO_FINISH || foodRate[i] > MAX_STARS)
				cout << endl << "You've entered an invalid number! Try again!" << endl;
		} while (foodRate[i] < TO_FINISH || foodRate[i] > MAX_STARS);

		i++;
	} while (foodRate[i - 1] != TO_FINISH);

	//Showing ratings for all 21 ratings
	for (int j = 0; j <= MAX_STARS; j++) {
		cout << "Rating: " << j << setw(15) << "Frequency: ";
		amountOfStars(foodRate, j, i);
	}
}

//This function show amount of students that selected the same amount of stars
void amountOfStars(int foodRate[], int amountOfStars, int size) {
	int counter = 0;

	for (int i = 0; i < size; i++)
		if (foodRate[i] == amountOfStars)
			counter++;

	for (int i = 0; i < counter; i++)
		cout << "*";
	cout << endl;
}