#include <iostream>

using namespace std;

int main()
{
	int number = 1, negNum = 0, posNum = 0, negAver = 0, posAver = 0;

	while (number != 0) {
		cout << "Enter the number: ";
		cin >> number;
		if (number < 0) {
			negNum += 1;
			negAver += number;
		}
		else if (number > 0) {
			posNum += 1;
			posAver += number;
		}
	}

	posAver = posAver / posNum;
	negAver = negAver / negNum;

	cout << "Positive value: " << posNum << endl
		<< "Negative value: " << negNum << endl
		<< "Positive averange: " << posAver << endl
		<< "Negative averange: " << negAver << endl;

	return 0;
}
