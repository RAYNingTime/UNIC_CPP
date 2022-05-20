/*
	1) Adding to the fraction class on slide 32:
		a) Provide an additional, second constructor for the fraction object that initializes the
	numerator and denominator to some given values.

		b) Add the following functions to the fraction object:
	 divide – returns the quotient of two fractions
	 mult – returns the product
	 dif – returns the difference

		c) Write a public function reduce that reduces the fraction to its simplest form. E.g.
	6/8 should be reduced to 3/4. (To reduce a fraction you divide both the numerator
	and the denominator by the greatest common divisor. You will need the gcd
	function we provided earlier in the course. This should also be a private
	function).

		d)Declare an array of 4 fraction objects, assign values to the data members of each
	one and perform the addition in pairs: first with second, third with fourth. Print
	the 4 fractions, along with the resulting additions.

	Made by Ivan Kosiakov on 12/04/2022
*/

#include <iostream>
using namespace std;

class fraction {
public:
	fraction();
	int numerator();
	int denominator();
	void assign(int n, int d);
	void reduce();
	fraction add(fraction f);
	fraction diff(fraction f);
	fraction mult(fraction f);
	fraction divide(fraction f);
private:
	int gcd(int, int);
	int num;
	int denom;
};

fraction::fraction()
{
	num = 0;
	denom = 1;
}

int fraction::numerator()
{
	return num;
}
int fraction::denominator()
{
	return denom;
}

void fraction::assign(int n, int d)
{
	num = n;
	denom = d;
}
fraction fraction::add(fraction f)
{
	fraction sum;
	sum.num = num * f.denom + f.num * denom;
	sum.denom = denom * f.denom;
	return sum;
}

fraction fraction::diff(fraction f)
{
	fraction difference;
	difference.num = num * f.denom - f.num * denom;
	difference.denom = denom * f.denom;
	return difference;
}

fraction fraction::mult(fraction f)
{
	fraction multiplication;
	multiplication.num = num * f.num;
	multiplication.denom = denom * f.denom;
	return multiplication;
}

fraction fraction::divide(fraction f)
{
	fraction dividation;
	dividation.num = num * f.denom;
	dividation.denom = denom * f.num;
	return dividation;
}

void fraction::reduce()
{
	int gcdNum;
	if (num > denom)
		gcdNum = gcd(num, denom);

	else
		gcdNum = gcd(denom, num);

	num = num / gcdNum;
	denom = denom / gcdNum;
}

int fraction::gcd(int num, int denom)
{
	for (int i = denom; i > 1; i--) {
		if (num % i == 0 && denom % i == 0)
			return i;
	}
}

int main()
{
	fraction result, furr[4];
	furr[0].assign(2, 3);
	furr[1].assign(1, 4);
	furr[2].assign(4, 5);
	furr[3].assign(3, 2);

	result = furr[0].add(furr[1]);
	cout << endl << "Add before reducing: " << result.numerator() << "/" << result.denominator() << endl;

	result.reduce();
	cout << "Add after reducing: " << result.numerator() << "/" << result.denominator() << endl;

	result = furr[0].diff(furr[1]);
	cout << endl << "Difference: " << result.numerator() << "/" << result.denominator() << endl;

	result.reduce();
	cout << "Difference after reducing: " << result.numerator() << "/" << result.denominator() << endl;

	result = furr[2].mult(furr[3]);
	cout << endl << "Multiplicate: " << result.numerator() << "/" << result.denominator() << endl;

	result.reduce();
	cout << "Multiplication after reducing: " << result.numerator() << "/" << result.denominator() << endl;

	result = furr[2].divide(furr[3]);
	cout << endl << "Divide: " << result.numerator() << "/" << result.denominator() << endl;

	result.reduce();
	cout << "Divide after reducing: " << result.numerator() << "/" << result.denominator() << endl;

	cout << endl;
	return 0;
}