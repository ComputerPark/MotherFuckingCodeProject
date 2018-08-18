#include "stdafx.h"
#include "main.h"


void gotoxy(short x, short y) {
	COORD Pos = { x - 1, y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

int prn_xy(const char print[], int x, int y, int txtcolor, int bgcolor, bool enter) {

	gotoxy(x, y);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), txtcolor | (bgcolor << 4));

	printf("%s", print);
	if (enter == true) printf("\n");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), DEFAULT_TXT_COLOR | (DEFAULT_BG_COLOR << 4));
	return DEF_RET_VAL;
}

