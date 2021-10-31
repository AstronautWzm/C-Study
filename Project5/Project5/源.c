#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h"
void menu()
{
	printf("*******扫雷游戏*******\n");
	printf("**********************\n");
	printf("*****  1=> play  *****\n");
	printf("*****  0=> exit  *****\n");
	printf("**********************\n");
}

void game()
{
	printf("扫雷游戏开始\n");
	char mine[rows][cols] = {0};//存储布置好雷的信息.11*11
	char show[rows][cols] = { 0 };//展示的棋盘
	InitBoard(mine, rows, cols,'0');
	InitBoard(show, rows, cols,'*');
	//打印棋盘
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
		printf("请选择:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;

		}

	} while (input);

}



int main()//扫雷游戏
{
	test();




	return 0;
}