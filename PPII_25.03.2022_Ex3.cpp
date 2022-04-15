/*
	   Using pointers, write a function minElem that takes two integer pointers, first and last, and
	returns a pointer to the minimum element in an array of integers, within the range first to last
	inclusive (first points to the start of the range and last points to the end of the range). Test your
	function.

	Made by Ivan Kosiakov on 24.03.2022
*/
#include <iostream>

using namespace std;

int* minElem(int*, int*);

int main()
{
	int* numberList, * p, index, arraySize, first, last;

	cout << "How many numbers would you like to enter? ";
	cin >> arraySize;

	numberList = new int[arraySize];

	cout << "Enter " << arraySize << " numbers: ";
	for (int i = 0; i < arraySize; i++)
		cin >> numberList[i];

	do {
		cout << "Enter first index: ";
		cin >> first;

		cout << "Enter last index: ";
		cin >> last;

		cout << "Your points are out of range! Try again!" << endl;
	} while (first < 0 || last > arraySize);

	last++;

	if (first > last) {
		int temp = last;
		last = first;
		first = temp;
	}

	p = numberList;

	cout << "The minimum element is " << *minElem((p + first), (p + last)) << " at index " << minElem((p + first), (p + last)) - (p + first) << ".";

	return 0;
}

int* minElem(int* first, int* last) {
	int* min = first;

	for (int i = 0; (first + i) != last; i++)
		if (*(first + i) < *min)
			min = (first + i);

	return min;
}