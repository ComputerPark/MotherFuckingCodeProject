#include "stdafx.h"
#include "main.h"

void spawnEnemy(int index_of_Enemy, int x, int y, int level) {
	//if (isRight) {
	Enemy[index_of_Enemy].posx = x;
	Enemy[index_of_Enemy].posy = y;
	if (level == 3) {	//3������ ���ϳ��� �ʷϻ� ��. ����ȭ: ��->��
		Enemy[index_of_Enemy].health = 2;
	}
	else {
		Enemy[index_of_Enemy].health = 1;
	}
	Enemy[index_of_Enemy].level = level;

	//}
	/*
	else {
	Enemy[index_of_Enemy].posx = 3;
	Enemy[index_of_Enemy].posy = 5 - index_of_Enemy;
	Enemy[index_of_Enemy].health = 2;
	}
	*/
}

void drawEnemy(void) {
	for (int i = 0; i < MAX_ENEMY; i++) {
		/*
		if (Enemy[i].health == 0) {
		continue;
		}
		else {
		*/
		if (Enemy[i].health == 0) continue;
		if (Enemy[i].level == 1) { //�̺�. �Ķ���
			prn_xy("��", Enemy[i].posx, Enemy[i].posy, CR_TURQ, CR_BLACK, false);	//���� �����̶� ������ ��� ����� ������ ������� �������°� ���... �ּ����� ���� �ϸ� ������ �ǰ��� ���ּ�.   
		}
		else if (Enemy[i].level == 2) { //�̵, £�� ����.
			prn_xy("��", Enemy[i].posx, Enemy[i].posy, CR_RED, CR_BLACK, false);	//���� �����̶� ������ ��� ����� ������ ������� �������°� ���... �ּ����� ���� �ϸ� ������ �ǰ��� ���ּ�.  
		}
		else if (Enemy[i].level == 3 && Enemy[i].health == 2) { //¯��. �ʷϻ�. �ｺ�� 1�̸� ����.
			prn_xy("��", Enemy[i].posx, Enemy[i].posy, CR_GREEN, CR_BLACK, false);	//���� �����̶� ������ ��� ����� ������ ������� �������°� ���... �ּ����� ���� �ϸ� ������ �ǰ��� ���ּ�.  
		}
		else if (Enemy[i].level == 3 && Enemy[i].health == 1) { //¯��. �ʷϻ�. �ｺ�� 1�̸� ����.
			prn_xy("��", Enemy[i].posx, Enemy[i].posy, CR_BLUE, CR_BLACK, false);	//���� �����̶� ������ ��� ����� ������ ������� �������°� ���... �ּ����� ���� �ϸ� ������ �ǰ��� ���ּ�.  
		}


		/*
		if (Enemy[i].posx - i > 60)	//���Ⱑ ���ư��� ����� �����ʿ� �ִ� ���̶� ���ʿ� �ִ� ���̶� ��Ī���� �������. ��Ȯ�� ����� ���� �׸� ���� ÷���ϰ���.
		{
		Enemy[i].posx--;
		Enemy[i].posy++;
		}

		else if (Enemy[i].posx - i > 40)
		{
		Enemy[i].posx--;
		Enemy[i].posy--;
		}

		else if (Enemy[i].posx - i < 20)
		{
		Enemy[i].posx++;
		Enemy[i].posy++;
		}

		else if (Enemy[i].posx - i < 40)
		{
		Enemy[i].posx++;
		Enemy[i].posy--;
		}
		*/

		//}
	}
}

void FuckThoseCvalnomeuPlayer(void)
{
	for (int i = 0; i < 20; i++)
	{
		if (Enemy[i].health == 0)
			break;

		else
		{
			for (int j = 0; j < 100; j++)
			{
				if (En_Bullet[j].isused == 1)
					break;

				else
				{
					En_Bullet[j].isused = 1;
					En_Bullet[j].posx = Enemy[i].posx;
					En_Bullet[j].posy = Enemy[i].posy;
				}
			}
		}
	}
}