# COMP 118 – Software Development Lab II - Lab Tutorial III
## Tutorial 3: bug hunting and fixing

_All the GitHub excercise were made in special GitHub organization!_

### Step 0: Create a new program in Visual Studio and call it Lab3.
- Remember to check the _**Add to source control**_ during the project creation

### Step 1: Download the source file bugExample.cpp from the Moodle page
- Copy this code into your project

### Step 2: Share the program with [LECTURER EMAIL]
- Same as you did at the end of Tutorial 1.

### Step 3: Locate the logical bugs and fix them
- For each bug you fix make sure to _**Check In**_ the code with an appropriate comment.

### Step 4: Complete the 3 unfinished functions
- For each function you complete make sure to _**Check In**_ the code with an appropriate comment.

___

## Tutorial 3 - Part 2

_Create a Branch (see Lecture 6) named lab3Part2, in which you will do the following modification. Remember to Push the changes to the repository after every task._

### Task 1
 - In the _**main**_ function:
 - Initialize the values of the array _**price**_ using random numbers

### Task 2
 - In the _**multArrays**_ Function:
 - Add a constant to the program called VAT, which could be 21%
 - When you calculate the values for arrTotal you should add the VAT to the price
 
### Task 3
 - In _**printMenu**_ and _**main**_ function:
 - Update the menu to also include the choice to call the following functions
 - - sumOddArray
 - - isAllPositive
 - - avgOddArray

___

## Tutorial 3 - Part 3

_Create a new Branch (see Lecture 6) from the Branch you made in Part 2 and name it lab3Part3, in which you will do the following modification._

### Task 1

In _**multArrays**_ and _**main**_ function:
- Modify the array _**total**_ to be a 2D array, i.e. int total[SIZE][2], where
- _**total[i][0]**_ contains the total without VAT, and
- _**total[i][1]**_ contains the total with VAT.

_For this to work you will need to change some code in other functions as-well._

```
/////////////
Hints:
#include<cstdlib>
#include<ctime>
srand (time(NULL)); // You only call this function once, then you can call rand()
// as many times as you like
int randomValue = rand()%100; // Random number in range 0 - 99
```
