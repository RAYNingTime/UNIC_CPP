/*
	Ask the user to enter 3 numbers and find their average

	Made by Ivan Kosiakov on 04/10/2021
*/

#include <iostream>

using namespace std;

int main()
{
	const in AMOUNT_OF_NUMS = 3;
	int x, y, z, k;
	cout << " Enter 3 numbers: " << endl;
	cin >> x >> y >> z;
	k = (x + y + z) / AMOUNT_OF_NUMS;
	cout << "Averange of this numbers ( " << x << " , " << y << " and " << z << " ) is " << k;
	return 0;
}