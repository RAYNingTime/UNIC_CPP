##This folder contains project for Data Sctructers

A “Target 9” game is set on a 3x3 grid of digits (integers). 
The game starts with an initial configuration of digits and the user’s target is to change all of them to 9 in the minimum number of moves, i.e.

In order to make a move, the user selects a cell, and all the digits in the same row and column

Note that increasing digit 9 by one the result is digit 0 as can be seen in position (0,0). 
In the following figure a series of moves are shown in order to get the solution in the minimum number of moves (3 moves).

New Game: To set the initial game set all the digits to 9, and then select a random cell and subtract one from all the cells in the same row and in the same column (reversethe game).
Keep doing this according to the difficulty you would like the game to be.

Undo and Redo Stacks: In your game you are required to have an UNDO and a REDO command of moves where the user can use them when playing the game.

Write a program that takes the difficulty level (1 to 9) and implement the above game. 
The difficulty level is the minimum number of moves that it can be solved.
