/*
Tafl.h - This header file describes the Tafl class with basic game logic,
including figurine movement, the kill mechanic, and board building.

included headers - Figurine.h
*/

#include "Figurine.h"
#include <vector>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

#define coutwidth 2 // Determines indentation for smooth output of elements
#define whitefirst 1 // Determines which side goes first

class Tafl
{
public:
	Tafl(int mode);
	~Tafl() = default;
	// Construct an empty board
	void constructEmptyboard();

	// Add (update) the figurine positions on board
	void addFigurines();

	// Show the board
	void displayboard(int x, int y);
	void displatnotatio();

	// Returns 1 if selected tile is a corner tile
	bool isCorner(int x, int y);

	// Player's turn
	void turn();

	// Is that turn valid?
	bool isturnvalid(int x, int y, int dx, int dy);

	// Show turns count and random quote from file
	void displayinfo();

	// Is victory yet??
	// returns 0 if not
	// returns 1 if Whotan's side wins
	// returns 2 if Giant's side wins
	int isVictory();

	// Kill the dead
	void killthedead();

	// Saves log of battle
	void savebattlelog(int x, int y, int dx, int dy);

private:

	// Size with desk boarders
	int boardsize_x, boardsize_y;
	//char board[boardsize_x + 1][boardsize_y + 1];
	std::vector<std::vector<char>> board;
	int Hnefix, Hnefiy, HnefiSlained = 0;
	int turncount, mode;

	// Vector contains black figurines
	std::vector <figurine> pool;
	// Vector contains white figurines
	std::vector <figurine> pool2;
};
