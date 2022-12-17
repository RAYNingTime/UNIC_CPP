# COMP118 – Software Dev. Lab II
## Lab Tutorial 0


### Exercise 1:
Create an Empty C++ project in Visual Studio. Your program will have 4
functions in addition to main. In main the program presents a menu to the
user with 5 choices. Choice 1 - 4 calls one of the 4 functions while the 5th
choice exits the program. Example of how main could look like

```
1) Sum two numbers
2) Calculate area of a circle
3) Calculate circumference of a circle
4) Calculate price with VAT
5) Exit
Enter your choice __
```

The function prototype of the 4 functions are the following:

```
// Returns the sum of the two numbers
double sumTwoNumbers(double num1, double num2);
// Returns the area of a circle given the radius
// HINT: area = pi * radius * radius
double areaOfCircle(double radius);
// Returns the circumference of a circle given the radius
// HINT: circumference = pi * (radius + radius)
double circumferenceOfCircle(double radius);
// Returns the price including the vat (given as %)
// Example price is 55, vat 21%, then
// priceWithVAT = price + (price * vat/100)
// 66.55 = 55 + (55 * 21/100)
double priceIncludingVAT(double price, int vat);
```

___

### Exercise 2:
You will implement (i.e. write the code for main and 1 of the 4 functions).

___

### Exercise 3:
As most applications are developed by a team of programmers, another
student will implement 2 function of your program. The other student is not
allowed to use your computer, so you must transfer your program to him/her
somehow. While the other student is working on your two functions, you will
implement the last function of your program.

1. Explain how the code was transferred:
2. Explain how you combined the program (the 2 functions from the other student and the function you wrote)

___

### Exercise 4:
You will give your program to a friend to test it for you and inform you if there
are any bugs in the program

1. How will you give your friend the latest version of your program?
2. How will your friend report any bugs back to you?

___

### Exercise 5:
You will continue to work on this program next week.
1. How do you intend to store your program (maybe on a USB stick)?
2. How do you intend to remember to bring the program with you next week?

___

### FINAL NOTE:
1. For exercise 3 - 5 create type your document in text editor
(Word, OpenOffice, etc. ) and upload a PDF version on the
Moodle page under Lab 0
2. Upload your source file (i.e. the .cpp) to the Moodle page for
this course under Lab 0
