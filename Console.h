/*
Console.h - This header file contains simple functions to work with advanced console 
output. Some of the functions are inline and can be used outside the Console object.

*/
#pragma once
#define NOMINMAX
#define WIN32_LEAN_AND_MEAN
#include "Windows.h"

// Change console's cursor's position
inline void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// Current console's cursor's position
inline int getXcoord()
{
	CONSOLE_SCREEN_BUFFER_INFO info_x;
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info_x);
	return info_x.dwCursorPosition.X;
}

inline int getYcoord()
{
	CONSOLE_SCREEN_BUFFER_INFO info_y;
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info_y);
	return info_y.dwCursorPosition.Y;
}

// Sets the color of output
template<int txt = 7, int bg = 0>
std::ostream& color(std::ostream& text) {
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((bg << 4) | txt));
	return text;
}

/*
  0  - Черный       (Black)
  1  - Синий        (Blue)
  2  - Зеленый      (Green)
  3  - Голубой      (Cyan)
  4  - Красный      (Red)
  5  - Пурпурный    (Magenta)
  6  - Желтый       (Yellow)
  7  - Белый        (White - стандартный серый)
  8  - Серый        (Bright Black)
  9  - Ярко-синий   (Bright Blue)
 10  - Ярко-зеленый (Bright Green)
 11  - Ярко-голубой (Bright Cyan)
 12  - Ярко-красный (Bright Red)
 13  - Ярко-пурпурный (Bright Magenta)
 14  - Ярко-желтый  (Bright Yellow)
*/
class Console {

public:
	Console();
	void options();
	int get_window_width();
	int get_window_height();
	void TaflTitle();
	void animated_decrypt_ScrollingText(int width, int delay);
	int get_mode();

private:
	int window_width;
	int window_height;
	int mode;

};