/*
Hell O, world! (Codeneme Semicolon)
-��, �� ����! (�ڵ���� �����ݷ�)
�� ���α׷��� 4���� �ڴ����� �߷� �ڵ�����
��, goto��
FUCKYOU!!!
������ X��
-(c) 2018 Semicolon team;
*/

#include "stdafx.h"
#include "main.h"

Jet Enemy[(MAX_ENEMY + 2)];
Jet Player;
Bullet Pl_Bullet[MAX_BULLET + 2];
Bullet En_Bullet[100];
int Round;   //���߿� ���忡 ���� �� ������ �پ��ϰ� �������. ���� �׷��ٰ� ���� ��Ż�� ������ �����ҰŰ���.
HWND hwnd;
HDC hdc; //������ �ڵ�

void hidecursor() {
	CONSOLE_CURSOR_INFO ConsoleCursor;
	ConsoleCursor.bVisible = false; // true ���� , false �Ⱥ���
	ConsoleCursor.dwSize = 1; // Ŀ�� ������
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &ConsoleCursor);
}

void init() {

	system("title Hell, O world!");
	system("mode con cols=80 lines=30");
	hidecursor();
	for (int i = 0; i <= MAX_ENEMY; i++) {

		Enemy[i].health = 0;
		Enemy[i].posx = 0;
		Enemy[i].posy = 0;
		Enemy[i].level = 0;
	}
	Player.health = 3;
	hwnd = GetForegroundWindow();
	hdc = GetWindowDC(GetForegroundWindow());
}

int main() {
	init();

	start();
	control();
	return DEF_RET_VAL;
}