#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Grid.h"

Grid::Grid()
{
	undoCounter = 0;
	redoCounter = 0;

	for (int i = 0; i < MAX_ROW; i++) {
		for (int j = 0; j < MAX_COLUMN; j++) {
			grid[i][j] = MAX_GRID_NUMBER;
		}
	}
}

void Grid::newGame(int amountTurns) {
	srand(time(NULL));
	int randomRow, randomColumn;
	undoCounter = 0;

	for (int i = 0; i < amountTurns; i++) {
		randomRow = rand() % MAX_ROW;
		randomColumn = rand() % MAX_COLUMN;
		decreaseGrid(randomRow, randomColumn);
	}
}

void Grid::increaseGrid(int row, int column) {
	for (int i = 0; i < MAX_ROW; i++)
		inreaseCell(i, column);

	for (int i = 0; i < MAX_COLUMN; i++)
		if (i != column)
			inreaseCell(row, i);

	Position turnPosition = Position(row, column);
	turns.push(turnPosition);
}


void Grid::inreaseCell(int row, int column) {
	if (grid[row][column] == MAX_GRID_NUMBER)
		grid[row][column] = 0;
	else
		grid[row][column]++;
}

void Grid::decreaseGrid(int row, int column) {
	for (int i = 0; i < MAX_ROW; i++)
		decreaseCell(i, column);

	for (int i = 0; i < MAX_COLUMN; i++)
		if (i != column)
			decreaseCell(row, i);
}

void Grid::decreaseCell(int row, int column) {
	if (grid[row][column] == 0)
		grid[row][column] = MAX_GRID_NUMBER;
	else
		grid[row][column]--;
}

void Grid::print() const {
	for (int i = 0; i < MAX_ROW; i++) {
		std::cout << "      ";
		for (int j = 0; j < MAX_COLUMN; j++) {
			std::cout << grid[i][j] << "   ";
		}
		std::cout << std::endl << std::endl;
	}
}

bool Grid::end() const {
	for (int i = 0; i < MAX_ROW; i++)
		for (int j = 0; j < MAX_COLUMN; j++) 
			if (grid[i][j] != MAX_GRID_NUMBER)
				return false;

	return true;
}

void Grid::redo() {
	if (undoCounter == 0 || redoCounter == 0) 
		std::cout << std::endl << "You did not undo any of your turns! You should make an undo before redo." << std::endl;
	else {
		Position redoPosition = undoArray[--undoCounter];
		--redoCounter;

		if (turns.push(redoPosition) == success) {
			increaseGrid(redoPosition.row, redoPosition.column);
		}
	}
}

void Grid::undo() {
	if (!turns.empty()) {
		int tempRow = 0, tempColumn = 0;
		Position undoPosition = Position(tempRow, tempColumn);

		if (turns.top(undoPosition) == success) {

			// In accordance with the provided application from the teacher, the cancellation of moves is limited (5).
			if (undoCounter < MAX_UNDO_ARRAY) {
				undoArray[undoCounter] = undoPosition;
				undoCounter++;
				redoCounter++;
		
				decreaseGrid(undoPosition.row, undoPosition.column);
				turns.pop();
			}
			else std::cout << std::endl << "You can not undo more than a " << MAX_UNDO_ARRAY << " turns!" << std::endl;
		}
	}
	else std::cout << std::endl << "You did not make any of turn! You should make a turn before undo." << std::endl;
}

void Grid::decreaseUndoCounter() {
	if (undoCounter != 0) {
		undoCounter--;
	}
}

void Grid::resetRedoCounter() {
	redoCounter = 0;
}
