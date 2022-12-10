# Software Development Lab I (COMP-116)
## Homework 3

1. Write a program following the software development process (requirements up to
testing) that calculates the total amount in a savings account at the end of a six-month
period. Specifically, the program should prompt the user to enter the amount he/she
would like to save every month and the annual interest rate of the user’s bank. The
program then calculates the amount that will be saved in the account after six months.
As an example, suppose the user enters 100 euros as the amount he/she wants to save
every month and then enters 5% as the bank annual interest rate1 .
After the first month, the value in the account becomes:

```
100 * (1 + 0.00417) = 100.417
After the second month, the value in the account becomes:
(100 + 100.417) * (1 + 0.00417) = 201.252
After the third month, the value in the account becomes:
(100 + 201.252) * (1 + 0.00417) = 302.507
and so on...
```

___

2. Write a program that reads an integer between 0 and 1000 and adds all the digits in
the integer. Your program must check that the given number falls in the (0,1000) range.
Example:

```
Enter an integer between 0 and 1000: 932
The sum of all the digits in 932 is 14
```

___

3. Write a program that prompts the user to enter a three-digit integer and determines
whether it is a palindrome number. A number is a palindrome if it reads the same from
right to left and from left to right.

Example 1:
```
Palindrome Number Check
Enter a three digit number: 121
The number 121 is a palindrome number
```

Example 2:
```
Palindrome Number Check
Enter a three digit number: 932
The number 932 is NOT a palindrome number
```

Example 3:
```
Palindrome Number Check
Enter a three digit number: 1598
Invalid number! The number 1598 has more than 3 digits.
```

___

4. The roots of a quadratic equation ax^2 + bx + c = 0 can be obtained using the
following formula:

![image](https://user-images.githubusercontent.com/92152254/206853119-7952eb96-cfec-4ea5-826f-e4855456bcb8.png)

where b^2 – 4ac is called the discriminant of the quadratic equation. If it is positive, the
equation has two real roots. If it is zero, the equation has one root. If it is negative, the
equation has no real roots.
Write a program that prompts the user to enter values for a, b, and c and displays the result
based on the discriminant. If the discriminant is positive, display two roots. If the discriminant
is 0, display one root. Otherwise, display “The equation has no real roots.

Example 1:
```
Quadratic Equation Solver
Enter value for a: 12.0
Enter value for b: -9.6
Enter value for c: 1.44

Two roots
r1 = 0.6
r2 = 0.2
```

Example 2:
```
Quadratic Equation Solver
Enter value for a: 2.0
Enter value for b: 3.0
Enter value for c: 1.125

One root
r1 = -0.75
```

Example 3:
```
Quadratic Equation Solver
Enter value for a: 4.0
Enter value for b: 0.0
Enter value for c: 3

The equation has no real roots
```

___

5. Write a program following the steps of the software development process (requirements
up to testing) which calculates the Body Mass Index (BMI) of a person. The BMI is a
measure of health on weight. It can be calculated by taking your weight in kilograms and
dividing by the square of your height in meters. The program must prompt the user to
enter his/her weight in pounds and height in inches and then calculates and displays the
BMI. Note that one pound is 0.45359237 kilograms and one inch is 0.0254 meters. The
following table presents the interpretations of the BMI for adults. Based on this table,
after calculating the BMI you must present to the user what his/her BMI denotes.

![image](https://user-images.githubusercontent.com/92152254/206853173-becd3ead-fd03-4b72-a6d8-9cd9e1139711.png)

Example:
```
Enter weight in pounds: 95.5
Enter height in inches: 50

Your BMI is 26.8573
Your BMI considers you are: Overweight
```
