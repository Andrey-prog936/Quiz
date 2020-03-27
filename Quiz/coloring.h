#pragma once
#include <iostream>
#include <windows.h>
using namespace std;

HANDLE colr = GetStdHandle(STD_OUTPUT_HANDLE);
#define def SetConsoleTextAttribute(colr, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
#define green SetConsoleTextAttribute(colr,FOREGROUND_GREEN);
#define orange SetConsoleTextAttribute(colr,FOREGROUND_GREEN | FOREGROUND_RED);
#define red SetConsoleTextAttribute(colr,FOREGROUND_RED);
#define blue SetConsoleTextAttribute(colr,FOREGROUND_BLUE);
