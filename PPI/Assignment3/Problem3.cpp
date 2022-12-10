/* You can approximate PI by using the following series:

	PI = 4 * ( 1 - 1/3 + 1/5 - 1/7 ... - 1/ (2i - 1) + 1/ (2i + 1)

   Write a program that displays the PI value for i=10000, 20000, …, 100000

Made by Ivan Kosiakov on 01/01/2022
*/

#include <iostream>
#include <cmath>

using namespace std;

void main()
{
	int const STEP = 10000, MAX = 100000;
	int min = 10000;
	double pi = 1;

	//"i" is going to increase on 10000 on each round
	for (min; min <= MAX; min += STEP) {
		//This loop is going to calculate PI via formula
		for (int i = 1; i <= min; i++) {
			pi += -pow((2.0 * i - 1.0), -1) + pow((2.0 * ++i + 1), -1);
		}

		pi = pi * 4;

		cout << "PI value for " << min << " is " << pi << endl;

		//Zero variable for new function loop
		pi = 1;
	}
}
