#include <iostream>

using namespace std;

int main() 
{
	int count;
	int num = 2;

	count = num;
	cout << "The value of count is " << count << endl;

	num++;
	cout << "The value of num is " << num << endl;

	count = num++;
	cout << "The value of count is " << count << endl;
	cout << "The value of num is " << num << endl;

	count = --num;
	cout << "The value of count is " << count << endl;
	cout << "The value of num is " << num << endl;

	++count;
	cout << "The value of count is " << count << endl;

	count = num++ + 2;
	cout << "The value of count is " << count << endl;
	cout << "The value of num is " << num << endl;

	count = 2 * num++;
	cout << "The value of count is " << count << endl;
	cout << "The value of num is " << num << endl;

	count = --num * 10;
	cout << "The value of count is " << count << endl;
	cout << "The value of num is " << num << endl;

	return 0;
}
