#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"


void menu()
{
	printf("***********************************************\n");
	printf("****               0.exit                 *****\n");
	printf("****               1.play                 *****\n");
	printf("***********************************************\n");
}
void game()
{
	char mine[ROWS][COLS] = { 0 };//��Ų��úõ��׵���Ϣ
	char show[ROWS][COLS] = { 0 };//����Ų�����׵���Ϣ
	//��ʼ������
	InitBord(mine,ROW,COL,'0'); //'0'
	InitBord(show, ROW, COL,'*');//'*'
	//��ӡ����
	//DIsplayBoard(mine, ROW, COL);
	DIsplayBoard(show, ROW, COL);
	//������
	Setmine(mine, ROW, COL);
	DIsplayBoard(mine, ROW, COL);
	//�Ų���
	FindMine(mine,show ,ROW, COL);
}
int main()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("ɨ����Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("��������,������ѡ��\n");
			break;
		}

	} while (input);
	return 0;
}