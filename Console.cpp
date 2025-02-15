/*
Console.cpp - This file continues the description of Console class methods.

included headers - Console.h

*/

#include <iostream>
#include <windows.h>
#include <string>
#include <cstdlib> 
#include <ctime> 
#include "Console.h"

// Constructor which sets value's of widght and height of console
Console::Console()
{
    window_width = 660;
    window_height = 660;
    MoveWindow(GetConsoleWindow(), 60, 60, window_width, window_height, true);
}

// Output text with movement from right to left and making decrypt visual
void Console::animated_decrypt_ScrollingText(int width, int delay) {

    srand(static_cast<unsigned>(time(0)));
    std::string display(width, ' ');
    std::string str = "o=asd{§Lj8#7Á{aT(s)(-d+@~asd";
    std::string str2 = "Hnefatafl";
    std::string str1(str2.length(), '?');


    // Animated str1 move
    for (size_t i = 0; i < width; i++) {
        if (i < str1.length()) {
            display = display.substr(1) + str1[i];
        }
        else {
            display = display.substr(1) + ' ';
        }

        std::cout << "\r" << display << std::flush;
        Sleep(delay);
    }

    system("cls");
    std::cout << str1;  // Got str1 console output

    for (size_t i = 0; i < str1.length(); i++) {
        int iterations = rand() % 10 + 5;

        for (int j = 0; j < iterations; j++) {
            char randomChar = str[rand() % str.length()];
            str1[i] = randomChar;
            system("cls");
            std::cout << str1;
            Sleep(delay);
        }

        str1[i] = str2[i];
        system("cls");
        std::cout << str1;
        Sleep(delay * 2);
    }

}

void Console::TaflTitle() {
    animated_decrypt_ScrollingText(20, 120);
    system("cls");
    std::cout << color<14, 0> << "Hnefatafl" << color;
    std::cout << "\n Would you like to play on small or big table? type(2 or 1): ";
    std::cin >> mode;
}

void Console::options() {
    TaflTitle();
    std::cin.get();
}

int Console::get_mode() {
    return mode;
}

int Console::get_window_width() {
    return window_width;
}

int Console::get_window_height() {
    return window_height;
}