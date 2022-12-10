#include <iostream>

/*
A child’s parents promise to give the child $10 on her 12th birthday, and double that amount on every subsequent birthday until the amount exceeds $1000. 
Write a program that determines on which birthday the last amount is given and the total amount received.
*/

using namespace std;

int main()
{
	int k = 12, amount = 10;

	cout << "Birthday \t\tAmount Given" << endl
		<< "-------- \t\t-----------" << endl;

	while (amount < 1000)
	{
		cout << k << "\t\t\t" << amount << endl;
		k++;
		amount = amount * 2;
	}

	cout << k << "\t\t\t" << amount << endl;

	cout << "--------------------------------------------" << endl
		<< "On birthday " << k << ", the child will receive $" << amount << endl;
	return 0;
}
