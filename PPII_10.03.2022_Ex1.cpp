/*
		a) Define a structure data type suitable for holding the information for stock item,
	such as: stock’s name, price of the stock and the date of purchase.

		b) Declare a stock structure variable and initialize it to the following data:

		Stock: IBM
		Price Purchased:1150.50
		Date purchased: 12/7/1999

		c) Modify the structure definition so that you include a Date structure inside the stock
	structure, in order to store the date of purchase (similar to the Date structure shown as
	an example on the slides). Declare a variable using this modified structure, accept the
	data from the user and display them.

	Made by Ivan Kosiakov on 10/03/2022
*/

#include <iostream>

using namespace std;

struct itemInfo
{
	char name[50];
	double price;
	int date[3];
};

int main()
{
	itemInfo stockItem;

	cout << "Enter the name of the stock item: ";
	cin >> stockItem.name;

	do {
		cout << "Enter price of the " << stockItem.name << ": ";
		cin >> stockItem.price;
		if (stockItem.price < 0)
			cout << "You've entered negative value! Try again!" << endl;
	} while (stockItem.price < 0);

	cout << "Enter day of the purchase (DD/MM/YYYY): ";
	for (int i = 0; i < 3; i++)
		cin >> stockItem.date[i];

	cout << endl << "Stock: " << stockItem.name << endl
		<< "Price Purchased: " << stockItem.price << endl
		<< "Date purchased: " << stockItem.date[0] << "/" << stockItem.date[1] << "/" << stockItem.date[2];

	return 0;
}