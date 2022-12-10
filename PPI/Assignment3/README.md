# COMP111 – Programming Principles I
 Programming Assignment 3

## 1. Assignment Objectives
- Gain practical experience with the C++ repetition statements and functions.

## 2. Assignment Description
Your task is to develop programs for the assigned exercises. Your programs should
follow proper formatting guidelines (see sample program on the course site). Lack of
comments and indentation will be penalized.

## 3. Assignment Deliverables and Submission
You need to send the source files (.cpp) of all programs (6 cpp files) and a pdf document
with screenshots of the execution of all programs. You must electronically submit your
source files and pdf document via the course online platform.

## 4. Problems
1. Suppose that the tuition for a university is $10,000 this year (year 1) and increases
5% every year. Write a program that computes the tuition in x years from now, with
x being a number given by the user. In addition, the program should compute the
total cost of y years’ worth of tuition starting from now, with y being a number given
by the user. Finally, the program should display the tuition for x years along with the
total tuition cost at the end of each year. Your program will terminate when the user
enters 0.

Here is a sample run:

```
Welcome to the tuition calculator!

1 Compute the yearly tuition in x years from today
2 Compute the total tuition cost for y years from today
3 Compute yearly tuition and total tuition cost at the end of each year, for x years
0 Quit program

Enter choice: 1
You want to know the yearly tuition in how many years from today? 2
The yearly tuition after 2 years from today will be 11025

Enter choice: 2
You want to know the total tuition cost after how many years from today? 2
The total tuition cost after 2 years from today will be 20500

Enter choice: 3
How many years you want to consider starting from today? 3

Year  Tuition   Total Tuition Cost at the End of Year
1     10000     10000
2     10500     20500
3     11025     31525

Enter choice: 0
Goodbye!
```
___

2. Write a program that displays 10 numbers per line, all numbers from 100 to 1000 that are divisible by 5 and 6.

___

3. You can approximate π by using the following series:
![image](https://user-images.githubusercontent.com/92152254/206851325-02848eb5-f31c-459a-8b34-b02ee4c07a58.png)

Write a program that displays the π value for i=10000, 20000, ..., 100000

___

4. A pentagonal number is defined as n(3n-1)/2 for n=1, 2, ..., and so on. The first few
numbers are 1,5,12, 22, ...Write the following function that returns a pentagonal
number:

**int getPentagonalNumber(int n)**

Write a test program that displays the first 100 pentagonal numbers with 10 numbers on each line.

___

5. Write the following function to return the reverse of an integer number:

   **int reverse(int number)**

   For example, reverse(3456) returns 6543. Write a test program that prompts the
user to enter an integer and displays its reversal.

___

6. Write the following function that tests whether or not a point is within a rectangle
centered at (0,0):

**void pointInRectangle(double width, double height, double x, double y, bool
&inRectangle)**

    Write a test program that prompts the user to enter the dimensions of a rectangle
and the coordinates of a point and displays the appropriate message depending on
whether or not the point is within the rectangle. The process is repeated until the
user enters 0 for the width and 0 for the height. Your program should do error
checking on the width and height.
