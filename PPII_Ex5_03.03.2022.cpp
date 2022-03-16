/*
		Valid names: Write a program that reads a person’s name and checks if the name is
	valid or not, printing an appropriate message in each case. A valid name can contain
	letters (i.e. alphabetic characters), humphens (-), apostrophes (’) and spaces only.

		Made by Ivan Kosiakov on 03/03/2022
*/

#include <iostream>

using namespace std;

int main()
{
	const int MAX_SYMB = 1500;
	char userName[MAX_SYMB];
	bool correct = true;

	cout << "Enter a name: ";
	cin.getline(userName, MAX_SYMB);

	for (int i = 0; userName[i] != '\0'; i++)
		if (!((userName[i] >= 97 && userName[i] <= 122) || (userName[i] >= 65 && userName[i] <= 90) || userName[i] == 39 || userName[i] == 45 || userName[i] == 32))
			correct = false;

	if (correct == true)
		cout << "Name is valid";
	else
		cout << "Name is NOT valid";

	return 0;
}