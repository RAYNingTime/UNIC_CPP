# COMP 118 – Software Development Lab II - Lab Tutorial I
## Tutorial 1: Shape Tutorial

### Step 0: Create a new project that will be hosted in your repository in github.com
- You should name the project Lab1
- Remember to check the Add to source control

___

### Step 1: Create a menu showing the following options:

```
- 1) Draw a horizontal line
- 2) Draw a vertical line
- 3) Draw a square
- 4) Draw a rectangle
- 5) Quit
```

- Compile your program and make sure it runs.

___

### Step 2: Ask user to enter an option number and keep the user’s choice:

```
- Enter your Option: _
```

- Compile your program and make sure it runs, then
Check In to the git.

___

### Step 3: Create following function prototypes:

```
- void drawHorizontalLine(int length, char ch) ;
- void drawVerticalLine(int height, char ch);
- void drawSquare(int size, char ch);
- void drawRectangle(int height, int length, char ch);
```

- Compile your program and make sure it runs, then
Check In to the git.

___

### Step 4: write the skeleton for each of the functions and inside each function write one line of code that show the name of the function
```
{
cout << “\nI am drawHorizontalLine”;
}
```

___

### Step 5: write your program one function at a time

- After successfully finishing each function, Check In your code

- An example of how your program should look

![image](https://user-images.githubusercontent.com/92152254/208267308-c6631172-8171-4009-bd26-4208b3b88b0b.png)

### Add the following two functions to your project

```
// Fills array shapeTy with values 1 - 4, to indicate which shape type to print
// Fills array shapeLen with values 1 - 20, the length of the shape
// Fills array shapeCh with values from the printable ASCII table, i.e. 33 - 126
// size can be defined in the main function like this:
// const int MAX_ARRAY = 10;
void initializeArrays(int shapeTy[], int shapeLen[], char shapeCh[], int size);
// Loops and prints all the shapes that are specified in the arrays
void drawShapes(int shapeTy[], int shapeLen[], char shapeCh[], int size)
```

Hints:
```
#include<cstdlib>
#include<ctime>

srand (time(NULL));
int randomValue = rand()%100; // Random number in range 0 - 99
```
