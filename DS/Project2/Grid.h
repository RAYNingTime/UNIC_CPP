#pragma once
#include "Stack.h"
const int MAX_ROW = 3, MAX_COLUMN = 3, MAX_GRID_NUMBER = 9, MAX_UNDO_ARRAY = 5, MAX_REDO = 5;

class Grid {
public:
	/* Constructor of the Grid Struct
	 * @brief That constructor sets every cell in the array to a constance of the maximal number in a grid
	 */
	Grid();

	/* New Game function.
	* @brief This function starts a new game with selected amount of decreases in random positions.
	* 
	* @param amountTurns (int) Amount of decreases on the grid in random positions.
	*/
	void newGame(int);

	/* Increase Grid function.
	* @brief This function increases row and column in selected position by one.
	* If cell is equal to a constance of the maximal number, then it'll be reseted to lowest number (0).
	* After increasing updated grid gets pushed in the stack.
	* 
	* @param row (int) Row coordinate for position to increase.
	* @param column (int) Column coordinate for position to increase.
	*/
	void increaseGrid(int, int);

	/* Print Grid function.
	* @brief This function prints all grid as a 3x3 block separated by spaces.
	*/
	void print() const;

	/* End of the Game function.
	* @brief This function checkes if all of the grid equals to a constance of the maximal number and sends a result.
	*
	* @return true - if all of the cells in grid are equal to constance of the maximal number,  otherwise returns false.
	*/
	bool end() const;

	/* Redo Grid function.
	* @brief This function resets a grid to a the first version of the current game.
	*/
	void redo();

	/* Undo Grid function.
	* @brief This function backups a grid to a previous version of it.
	*/
	void undo();

	/* Decrease undo counter function.
	* @brief This function decreases counter of the undo by 1.
	*/
	void decreaseUndoCounter();

	/* Reset redo counter function.
	* @brief This function resets counter of the redo to 0.
	*/
	void resetRedoCounter();
private:
	Stack turns;
	int grid[MAX_ROW][MAX_COLUMN];

	Position undoArray[MAX_UNDO_ARRAY]; // Array that is going to save up to 5 undo
	int undoCounter, redoCounter;

	/* Decrease Grid function.
	* @brief This function decreases row and column in selected position by one.
	* If cell is equals to a 0, then it'll be reseted to maximal number (constance of the maximal number).
	*
	* @param row (int) Row coordinate for position to decrease row and column.
	* @param column (int) Column coordinate for position to decrease row and column.
	*/
	void decreaseGrid(int, int);

	/* Increase Single Cell function.
	* @brief This function increases single cell in selected position by one.
	* If cell is equal to a constance of the maximal number, then it'll be reseted to lowest number (0).
	*
	* @param row (int) Row coordinate for selected cell.
	* @param column (int) Column coordinate for selected cell.
	*/
	void inreaseCell(int, int);

	/* Decrease Single Cell function.
	* @brief This function decreases single cell in selected position by one.
	* If cell is equals to a 0, then it'll be reseted to maximal number (constance of the maximal number)
	*
	* @param row (int) Row coordinate for selected cell.
	* @param column (int) Column coordinate for selected cell.
	*/
	void decreaseCell(int, int);
};
