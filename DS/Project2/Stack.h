#pragma once
enum errorCode {success, underflow, overflow};

// Maximal size of the array of Grids
const int MAX = 100;

// Class that contains coordinates of the changes of Grid as variables row and column
class Position {
public:
	/* Constructor of the Position class
	* @brief Settes the row and column variable to -1
	*/
	Position();

	/* Constructor of the Position class.
	* @brief Settes the row and column variable to assigned variables.
	*
	* @param row (int) settes inner variable row to an equal integer.
	* @param column (int) settes inner variable row to an equal integer.
	*/
	Position(int, int);
	int row, column;
};

class Stack {
public:
	/* Constructor of the Stack class.
	* @brief Settes the counter to null.
	*/
	Stack();

	/* Empty method.
	* @brief Checkes if stack is empty.
	*
	* @return true if stack is empty, otherwise returns false
	*/
	bool empty() const;

	/* Top method.
	* @brief If empty return underflow, else the top entry is copied to item and return success.
	*
	* @param item (Position&) variable that is going to be assigned to a top variable of the Stack.
	*
	* @return underflow if Stack is empty, otherwise returns success as function is competed.
	*/
	errorCode top(Position&) const;

	/* Pop method.
	* @brief If empty return underflow, else the top entry is removed and return success.
	*
	* @return underflow if Stack is empty, otherwise returns success as function is competed.
	*/
	errorCode pop();

	/* Push method.
	* @brief If not full, item is added to the top of the stack and return success, else return overflow and the stack is left unchanged.
	*
	* * @param item (Position&) variable that is going to be added to the top of the stack.
	*
	* @return If not full return success, else return overflow.
	*/
	errorCode push(Position&);
private:
	int counter;

	// Position array that is going to contain all the Girds versions
	Position entry[MAX];
};

