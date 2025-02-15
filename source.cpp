/*
source.cpp - Driver function realization. The program first creates an object of the Console class,
which contains methods for console output. It waits for player input and constructs
an empty board with borders. Figurines and notations are added. Then, the game enters
a loop where turns are alternated until one side achieves glorious victory.

included headers - Tafl.h
				 - Console.h
/****************************
 Hnefatafl 2024-2025,
*/


#include <QApplication>
#undef byte
#include <QWidget>

#include "Tafl.h"
#include "Console.h"
/* // OpenGl files included here
#include "GLFW/glfw3.h"
#include "glad/glad.h"*///working on it...///


int main()
{
	Console console;
	console.options();
	Tafl tafl(console.get_mode());
	while (true)
	{
		tafl.constructEmptyboard();
		tafl.addFigurines();
		system("cls");
		tafl.displayboard(999, 999);
		tafl.turn();


		// Victory
		int isVictory = tafl.isVictory();
		if (isVictory == 1)
		{
			system("cls");
			cout << "\n* White side wins! *\n Battle history was saved in Battlelog.txt file \n";

			break;
		}

		else if (isVictory == 2)
		{
			system("cls");
			cout << "\n* Dark side wins! *\n Battle history was saved in Battlelog.txt file \n";
			break;
		}

		system("cls");
	}

	cin.get();
}