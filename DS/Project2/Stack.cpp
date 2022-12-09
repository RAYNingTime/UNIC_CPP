#include "Stack.h"

Position::Position() {
	this->row = -1;
	this->column = -1;
}

Position::Position(int row, int column) {
	this->row = row;
	this->column = column;
}

Stack::Stack() {
	counter = 0;
}

bool Stack::empty() const {
	return counter == 0;
}

errorCode Stack::top(Position& item) const {
	if (empty()) return underflow;
	item = entry[counter - 1];
	return success;
}

errorCode Stack::pop() {
	if (empty()) return underflow;
	counter--;
	return success;
}

errorCode Stack::push(Position& item) {
	if (counter == MAX) return overflow;
	entry[counter++] = item;
	return success;
}
