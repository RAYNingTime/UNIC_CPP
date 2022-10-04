/** \file SDLII_02.05.2022_Ex1.cpp
* \brief Small program to manipulate a matrix
* \author Ivan Kosiakov
* \date 02/05/2022
*/

#include <iostream>
#include <cassert>
#include <assert.h>

using namespace std;

//Global constants
const int MAX_COLUMN = 3;

//Function prototypes
void enterData(int[][MAX_COLUMN],const int);
void zeroData(int[][MAX_COLUMN],const int);
bool isAllPositive(const int[][MAX_COLUMN],const int);
void showData(const int[][MAX_COLUMN], const int);

/**
* Provides the user with a menu of the choices avialable
* @return Returns 0
*/

int main()
{
    const int MAX_ROW = 2;
    int choice;
    int matrix[MAX_ROW][MAX_COLUMN];

    do {
        cout << endl << "1) Enter data" << endl
            << "2) Zero out data" << endl
            << "3) All positive?" << endl
            << "4) Show content" << endl
            << "5) Exit" << endl
            << "Enter choice:";
        cin >> choice;

        switch (choice) {
        case 1:
            enterData(matrix, MAX_ROW);
            break;
        case 2:
            zeroData(matrix, MAX_ROW);
            break;
        case 3:
            if (isAllPositive(matrix, MAX_ROW) == true)
                cout << endl << "All numbers are positive!" << endl;
            else
                cout << endl << "At-least one element is negative!" << endl;
            break;
        case 4:
            showData(matrix, MAX_ROW);
            break;
        case 5:
            //No code needed, exit
            break;

        default:
            cerr << "Wrong number!" << endl;
            break;

        }
    } while (choice != 5);

    return 0;
}

/**
* Allows user to enter data into the matrix
* @param matrix The matrix that will be filled in
* @param MaxRow How many rows the matrix has
*/
void enterData(int matrix[][MAX_COLUMN],const int maxRow) {
    assert(maxRow > 0);

    int counter = 1;

    for (int i = 0; i < maxRow; i++)
        for (int j = 0; j < MAX_COLUMN; j++) {
            cout << "Enter " << counter << " number:";
            cin >> matrix[i][j];
            counter++;
        }
}

/**
* Zeros out the content of the matrix
* @param matrix The matrix to be cleared
* @param MaxRow How many rows the matrix has
*/
void zeroData(int matrix[][MAX_COLUMN],const int maxRow) {
    assert(maxRow > 0);

    for (int i = 0; i < maxRow; i++)
        for (int j = 0; j < MAX_COLUMN; j++)
            matrix[i][j] = 0;

    cout <<endl << "Clear completed!" << endl;
}

/**
*Tests if all valuse in the matrix is >= to 0
* @param matrix The matrix to be tested
* @param maxRow How many rows the matrix has
* @return Returns <code>true</code> if all elements are >= 0 
* <code>false</code> otherwise
*/
bool isAllPositive(const int matrix[][MAX_COLUMN], const int maxRow) {
    assert(maxRow > 0);
    
    for (int i = 0; i < maxRow; i++) 
        for (int j = 0; j < MAX_COLUMN; j++) {
            if (matrix[i][j] < 0)
                return false; // return false
        }

    return true;
}

/**
* Show the content of the matrix
* @param matrix The matrix to be cleared
* @param MaxRow How many rows the matrix has
*/
void showData(const int matrix[][MAX_COLUMN], const int maxRow) {
    assert(maxRow > 0);

    for (int i = 0; i < maxRow; i++) {
        cout << endl << "R" << i << ":";
        for (int j = 0; j < MAX_COLUMN; j++) {
            cout << matrix[i][j] << " ";
        }
    }
    cout << endl;
}
