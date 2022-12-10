//
//	Week 10 Lab Exercise 2
//
//Created by Ivan Kosiakov on 01 / 12 / 2021

#include <iostream>

using namespace std;

int sumOfSeries(int);

int main()
{
	const int SERIES = 5;

	int answer;

	answer = sumOfSeries(SERIES);

	cout << "Answer is: " << answer;

	return 0;
}

//Function that calculates the sum of the series
int sumOfSeries(int number) {
	int firstNum = 1, secondNum, answer = 0;
	for (int i = 1; i <= number; i++) {
		//Loop for calculcating the factorial
		for (int j = 1; j <= i; j++) {
			firstNum = firstNum * j;
		}

		secondNum = firstNum / i;
		answer += secondNum;

		firstNum = 1;
	}

	return answer;
}
