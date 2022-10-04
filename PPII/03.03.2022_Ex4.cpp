/*
		Encryption: a) Write an encryption program which reads a string (containing only
	alphabetic characters and spaces) and encrypts it using the following coding
	technique: replace an ‘a’ with a ‘b’, ‘b’ with ‘c’ and so on, up to ‘z’ which is replaced
	by an ‘a’. The space ‘ ‘ is replaced by a star ‘*’.

		Re-write the above exercise with functions: Write a function called encrypt which
	takes as a parameter a string and changes it to the encrypted version (as described
	above). Write also a function called decrypt which takes as a parameter a string an
	decrypts the string i.e. restores it to the original. For example decrypting the string s1
	containing “dbu” will convert it back to the string “cat”. (i.e. replace ‘d’ with ‘c’, ‘b’
	with ‘a’ and so on, thus reversing the coding scheme used for encryption above).
	Write a main program to test both functions.

		Made by Ivan Kosiakov on 03/03/2022
*/

#include <iostream>

using namespace std;

void encrypt(char[]);
void decrypt(char[]);

int main()
{
	const int MAX_SYMB = 1500;
	char userString[MAX_SYMB];
	int userChoice;

	cout << "Enter a string (only alphabetic and spaces): ";
	cin.getline(userString, MAX_SYMB);

	do {
		cout << "Choose: Encrypt(0) or Decrypt(1): ";
		cin >> userChoice;
	} while (userChoice < 0 || userChoice > 1);

	switch (userChoice)
	{
	case 0: {
		encrypt(userString);
		cout << "Encrypted string: " << userString;
		break;
	}
	case 1: {
		decrypt(userString);
		cout << "Dencrypted string: " << userString;
		break;
	}
	}

	return 0;
}

void encrypt(char userString[]) {
	int counter = 0;

	//Counting lenght of the string
	for (int i = 0; userString[i] != '\0'; i++) {
		counter++;
	}

	//Replacing symbols with special one
	for (int i = 0; i < counter; i++) {
		if (userString[i] == 122)
			userString[i] = 97;
		else
			if (userString[i] == 32)
				userString[i] = 42;
			else
				userString[i]++;
	}
}

void decrypt(char userString[]) {
	int counter = 0;

	//Counting lenght of the string
	for (int i = 0; userString[i] != '\0'; i++) {
		counter++;
	}

	//Replacing symbols with special one
	for (int i = 0; i < counter; i++) {
		if (userString[i] == 97)
			userString[i] = 122;
		else
			if (userString[i] == 42)
				userString[i] = 32;
			else
				userString[i]--;
	}
}