/*
	   Using pointers, write a function findTarget that takes three parameters: an integer array, the
	array size and a target integer, and returns the address where the target is first found in the
	array. If the target is not found it returns NULL. Test your function.

	Made by Ivan Kosiakov on 24.03.2022
*/
#include <iostream>

using namespace std;

int* findTarget(int*, int, int);

int main()
{
	int* numberList, target, * p, arraySize;
	cout << "How many numbers would you like to enter? ";
	cin >> arraySize;

	numberList = new int[arraySize];

	cout << "Enter " << arraySize << " numbers: ";

	for (int i = 0; i < arraySize; i++)
		cin >> numberList[i];

	cout << "Enter a target: ";
	cin >> target;

	p = numberList;

	if (findTarget(p, arraySize, target) == NULL)
		cout << "There is no this target!";
	else cout << "Adress of your target is: " << findTarget(p, arraySize, target) << " ( " << *findTarget(p, arraySize, target) << " is your target ).";
}

int* findTarget(int* p, const int arraySize, int target) {
	for (int i = 0; i < arraySize; i++) {
		if (*(p + i) == target)
			return p + i;
	}
	return NULL;
}