/*
Write a program that creates and prints a two-dimensional square array that looks
as the following examples.

Made by Ivan Kosiakov on 06/03/2022
*/
#include <iostream>

using namespace std;

int main()
{
	const int MAX_SIZE = 1000;
	int size;
	char squareArray[MAX_SIZE][MAX_SIZE];

	cout << "Enter a size of the square: ";
	cin >> size;

	size--;

	for (int i = 0; i <= size; i++)
		for (int j = 0; j <= size; j++) {
			//Algorithm to make a cross
			if (i == j) {
				squareArray[i][j] = '*';
				squareArray[i][size - j] = '*';
			}

			//Filling all the empty spaces with '_'
			if (squareArray[i][j] != '*')
				squareArray[i][j] = '_';
		}

	for (int i = 0; i <= size; i++) {
		for (int j = 0; j <= size; j++)
			cout << squareArray[i][j];
		cout << endl;
	}

	return 0;
}
