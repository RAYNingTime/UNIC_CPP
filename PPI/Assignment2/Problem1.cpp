/*
Write a program that reads a characterand returns whether or not is a vowel or consonant.If
the user enters a nonalphabetic character, the program will display an error message.

 Created by Ivan Kosiakov on 18/11/2021
*/

#include <iostream>

using namespace std;

int main()
{
	char answer;

	cout << "Enter character: ";
	cin >> answer;

	//Checking for uppercase letter
	if (isupper(answer))
		cout << "You entered an uppercase letter!";

	//All alphabet in ASCII code
	else if (answer > 60 && answer < 123) {
		//List of vowels
		if (answer == 'a' || answer == 'e' || answer == 'i' || answer == 'o' || answer == 'u')
			cout << answer << " is a vowel";

		else if (answer == 'y')
			cout << answer << " sometimes acts as vowel or a consonant";

		//Rest are consonants
		else
			cout << answer << " is a consonant";
	}
	else

		//Checking for invalid character
		cout << "You entered an invalid character!";

	return 0;
}
