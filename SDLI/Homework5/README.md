# Software Development Lab I (COMP-116)
## Homework 5

**Ex. 1**

In this assignment you will write a program for the popular 7/11 dice game. This game is also
known as “crabs”. In this game a user rolls two dice.

- If the user gets a 7 or 11 -> the user wins!
- If the user get a 2, 3 or 12 -> the user loses L

In the case where the user gets a 4, 5, 6, 8, 9, 10 this result becomes the new “goal” and the user
rolls the dice again:
- If the user meets the goal -> the user wins!
- Otherwise -> the user loses L
Examples:

![image](https://user-images.githubusercontent.com/92152254/207451205-4f039d94-d332-4406-858e-f5a7507c84af.png)

___

**Ex. 2**

Write a program that randomly computes student grades for University Professors who are bored
and do not want to actually grade their student exams and homework.

The program must, first, prompt the user to enter if the student attended more than 20% of the
class lectures. In the case where the student did not, then the program should give the student
an “F”. In the case where the student did attend more than 20% of the classes, then the program
must next prompt the user to enter how many homework assignments the student completed
out of a total of 5 assignments. Afterwards, the program will randomly generate a number
between 60 and 100. This number will then receive a 3% increment for each completed
assignment. The student grade is then outputted with an “A” given if the number is >= 90, a “B”
is given if it is between 80 and 90, a “C” is given if it is between 70 and 80, or a “D” if it is between
60 and 70.
