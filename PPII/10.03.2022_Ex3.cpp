/*
		a) Using the data type declared for question (2) above, write a program that
	interactively accepts data into an array of 5 Book structures. Once the data have been
	entered, the program should list the details of all books.
		b) Write a function that takes as parameters an array of book structures and the array
	size, and returns the index position of the most expensive book (no printing is done in
	this function). Test this function in the main program by printing the book details of
	the most expensive book.
		c) Write a function that takes as parameters an array of book structures and the array
	size, and displays all the details of all the books in the array. Test your function.

	Made by Ivan Kosiakov on 10/03/2022
*/

#include <iostream>
using namespace std;

struct book {
	char author[50];
	char title[50];
	char publisher[50];
	int yearOfPublication;
	char isbn[50];
	double price;
};

int mostExpensiveBook(book[], const int);
void showAllBooks(book[], const int);

int main()
{
	const int MAX_BOOKS = 5;
	int theBiggestIndex;
	book userBooks[MAX_BOOKS];

	for (int i = 0; i < MAX_BOOKS; i++) {
		cout << endl << endl << "Enter title of the " << i + 1 << " book: ";
		cin >> userBooks[i].title;

		cout << "Enter name of author of this " << i + 1 << " book: ";
		cin >> userBooks[i].author;

		cout << "Enter publisher of this " << i + 1 << " book: ";
		cin >> userBooks[i].publisher;

		cout << "Enter year of the " << i + 1 << " publication: ";
		cin >> userBooks[i].yearOfPublication;

		cout << "Enter ISBN of this " << i + 1 << " book: ";
		cin >> userBooks[i].isbn;

		cout << "Enter price of " << i + 1 << "  book: ";
		cin >> userBooks[i].price;
	}

	theBiggestIndex = mostExpensiveBook(userBooks, MAX_BOOKS);

	cout << endl << endl << "The most expensive book:" << endl
		<< "Name: " << userBooks[theBiggestIndex].title << endl
		<< "Author: " << userBooks[theBiggestIndex].author << endl
		<< "Publisher: " << userBooks[theBiggestIndex].publisher << endl
		<< "Year of the publication: " << userBooks[theBiggestIndex].yearOfPublication << endl
		<< "ISBN: " << userBooks[theBiggestIndex].isbn << endl
		<< "Price: " << userBooks[theBiggestIndex].price << endl;

	showAllBooks(userBooks, MAX_BOOKS);

	return 0;
}

int mostExpensiveBook(book userBooks[], const int MAX_BOOKS) {
	int maxIndex;
	double maxValue;
	for (int i = 0; i < MAX_BOOKS; i++) {
		if (i == 0) {
			maxIndex = i;
			maxValue = userBooks[i].price;
		}
		else {
			if (userBooks[i].price > userBooks[i - 1].price) {
				maxIndex = i;
				maxValue = userBooks[i].price;
			}
		}
	}

	return maxIndex;
}

void showAllBooks(book userBooks[], const int MAX_BOOKS) {
	for (int i = 0; i < MAX_BOOKS; i++) {
		cout << endl << endl << "Book number " << i + 1 << endl
			<< "Name: " << userBooks[i].title << endl
			<< "Author: " << userBooks[i].author << endl
			<< "Publisher: " << userBooks[i].publisher << endl
			<< "Year of the publication: " << userBooks[i].yearOfPublication << endl
			<< "ISBN: " << userBooks[i].isbn << endl
			<< "Price: " << userBooks[i].price << endl;
	}
}
