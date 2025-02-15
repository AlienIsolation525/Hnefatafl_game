/*
Tafl.h - header file that describes figurine class with possible params
		 like coordinates on board and status.

*/
#pragma once

class figurine
{
public:

	figurine(int _id, int _x, int _y)
	{
		rush = 0;
		id = _id;
		x = _x;
		y = _y;
	};
	figurine() = default;
	~figurine() = default;

	//get, set
	int getx()
	{
		return x;
	};
	int gety()
	{
		return y;
	};
	void setx(int _x)
	{
		x = _x;
	};
	void sety(int _y)
	{
		y = _y;
	};

	// Is figure got invulnerability?
	bool get_rush()
	{
		if (rush) return 1;
		else return 0;
	}

	void set_rush(bool q)
	{
		rush = q;
	}

	// Is figure displayed on board?
	void kill()
	{
		id = 111;
	};

	bool alive()
	{
		if (id != 111) return 1;
		else return 0;
	}

private:
	bool rush;
	int x, y, id;
};

