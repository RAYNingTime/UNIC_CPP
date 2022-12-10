# COMP111 – Programming Principles I
 Programming Assignment 2
 Grade	-	100.00 / 100.0 

## 1. Assignment Objectives
- Gain practical experience with the C++ selection statements.

## 2. Assignment Description
Your task is to develop programs for the assigned exercises. Your programs should
follow proper formatting guidelines (see sample program on the course site). Lack of
comments and indentation will be penalized.

## 3. Assignment Deliverables and Submission
You need to send the source files (.cpp) of all programs (5 cpp files) and a pdf document
with screenshots of the execution of all programs. You must electronically submit your
source files and pdf document via the course online platform.

## 4. Problems
1. Words are built from vowels (a,e,i,o,u) and consonants (the rest letters except y).
The letter y sometimes acts as a consonant and sometimes it acts as a vowel. Write a
program that reads a character and returns whether or not is a vowel or consonant. If
the user enters a nonalphabetic character, the program will display an error message.

Here is a sample run:

```
Enter character: x
x is a consonant
```

___

2. Write a program that prompts the user to enter the width w and height h of a
rectangle, along with a point (x,y). Your program is going to check if the point is
within the rectangle centered at (0,0) with width w and height h. Hint: a point is in
the rectangle if its horizontal distance to (0,0) is less or equal to w/2 and its vertical
distance to (0,0) is less or equal to h/2 .

Here is a sample run:

```
Enter width and height of a rectangle centered at (0,0) : 10 5
Enter the two coordinates of the point: 2.0 1.1

Point (2.0,1.1) is in the rectangle.
```

Here is another sample run:

```
Enter width and height of a rectangle centered at (0,0): 10 5
Enter the two coordinates of the point: 6 2

Point (6,2) is not the rectangle.
```

___

3. Write a program that prompts the user to enter three numbers and displays them in
an ascending order and also in a descending order. Here is a sample run:

```
Enter 3 numbers: 4 -2 3

Ascending order: -2 3 4
Descending order: 4 3 -2
```

___

4. Write a program that prompts the user to enter an integer and determines whether or
not it is divisible by 5 and 6, whether it is divisible by 5 or 6, and whether it is
divisible by 5 or 6 but not both. Here is a sample run:

```
Enter an integer: 10

Is 10 divisible by 5 and 6? No
Is 10 divisible by 5 or 6? Yes
Is 10 divisible by 5 or 6, but not both? Yes
```

___

5. Rewrite the Body Mass Index problem from Programming Assignment 1 so that it
will also display the interpretation of the calculated BMI as follows:

![image](https://user-images.githubusercontent.com/92152254/206851018-983dc34f-fbb2-4501-8073-2e411a9b0511.png)

Here is a sample run:

```
Enter weight in pounds: 146
Enter height in inches: 70

Your BMI is 20.9486
You are normal weight
```
