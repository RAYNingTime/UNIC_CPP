/*
		a) Define a single structure data type called Book suitable for a storing details for
	books on sale. The details should include: author, title, publisher, year of publication,
	ISBN and price.
		b) Write a program that creates a Book structure variable and accepts the data of a
	book from the user and then displays the information entered.

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

int main()
{
	book userBook;

	cout << "Enter title of the book: ";
	cin >> userBook.title;

	cout << "Enter name of author of this book: ";
	cin >> userBook.author;

	cout << "Enter publisher of this book: ";
	cin >> userBook.publisher;

	cout << "Enter year of the publication: ";
	cin >> userBook.yearOfPublication;

	cout << "Enter ISBN of this book: ";
	cin >> userBook.isbn;

	cout << "Enter price of this book: ";
	cin >> userBook.price;

	cout << endl << endl << "Name: " << userBook.title << endl
		<< "Author: " << userBook.author << endl
		<< "Publisher: " << userBook.publisher << endl
		<< "Year of the publication: " << userBook.yearOfPublication << endl
		<< "ISBN: " << userBook.isbn << endl
		<< "Price: " << userBook.price << endl;

	return 0;
}