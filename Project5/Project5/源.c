#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h"
void menu()
{
	printf("*******ɨ����Ϸ*******\n");
	printf("**********************\n");
	printf("*****  1=> play  *****\n");
	printf("*****  0=> exit  *****\n");
	printf("**********************\n");
}

void game()
{
	printf("ɨ����Ϸ��ʼ\n");
	char mine[rows][cols] = {0};//�洢���ú��׵���Ϣ.11*11
	char show[rows][cols] = { 0 };//չʾ������
	InitBoard(mine, rows, cols,'0');
	InitBoard(show, rows, cols,'*');
	//��ӡ����
	DisplayBoard(show, row, col);
	setmine(mine, row,col);
	//DisplayBoard(mine, row, col);
	findmine(mine, show, row, col);
	

}




void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("��ѡ��:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;

		}

	} while (input);

}



int main()//ɨ����Ϸ
{
	test();




	return 0;
}