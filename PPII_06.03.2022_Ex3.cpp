/*
		Modify the Example program 2 of slide 45 (Topic 2 Arrays) so that it also gives the
	sum of each column (as well as the sum of each row).

		Made by Ivan Kosiakov on 06/03/2022
*/

#include <iostream>
using namespace std;
int main()
{
	const int rows = 3;
	const int columns = 3;
	int A[rows][columns];
	int i, j, total = 0;
	cout << "Enter " << rows * columns << " integers, " << columns << " per row: " << endl;
	for (i = 0; i < rows; i++)
	{
		cout << "Row " << i << " : " << endl;
		for (j = 0; j < columns; j++)
			cin >> A[i][j];
	}
	cout << "Table with the totals of each row is: " << endl;
	for (i = 0; i < rows; i++)
	{
		total = 0; //reset total at the beginning of each row
		for (j = 0; j < columns; j++)
		{
			cout << A[i][j] << " ";
			total = total + A[i][j]; //add to total
		}
		cout << " = " << total << endl; //print total
	}

	//Added part (total of each column)
	cout << "Table with the totals of each column is: " << endl;
	for (i = 0; i < columns; i++)
	{
		total = 0; //reset total at the beginning of each row
		for (j = 0; j < rows; j++)
		{
			cout << A[j][i] << " ";
			total = total + A[j][i]; //add to total
		}
		cout << " = " << total << endl; //print total
	}

	return 0;
}//main