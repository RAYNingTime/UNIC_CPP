#pragma once
#include <cstddef>
enum errorCode { success, underflow, overflow };

struct Position {
	int row, col;
	Position* next;
	Position();
	Position(int, int, Position* pos = NULL);
};

class Move {
public:
	Move();
	errorCode top(int&, int&) const;
	errorCode pop();
	errorCode push(const int&, const int&);
	bool empty() const;
private:
	Position* moves;
};
