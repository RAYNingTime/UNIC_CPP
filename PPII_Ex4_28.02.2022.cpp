#include <iostream>

using namespace std;

void swap(int&, int&);
void reverce(int[], int);

int main()
{
	const int SIZE = 1000;
	int arraySwap[SIZE];
	int i = 0;
	cout << "Enter array of the numbers, -1 to finish: ";

	do {
		cin >> arraySwap[i];
		i++;
	} while (arraySwap[i - 1] != -1);

	reverce(arraySwap, i - 2);

	for (int j = 0; j < i - 1; j++)
		cout << arraySwap[j] << " ";

	return 0;
}

void reverce(int a1[], int n)
{
	int step = 0;
	bool finish = false;
	do {
		swap(a1[step], a1[n - step]);
		step++;
		if (step == n - step || step + 1 == n - step)
			finish = true;
	} while (finish == false);
}

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}