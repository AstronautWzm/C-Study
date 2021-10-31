#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void InitBoard(char board[rows][cols], int ROWS, int COLS,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
		{

			board[i][j] =set;
		}


	}

}

void DisplayBoard(char board[rows][cols], int ROW, int COL)
{
	int i = 0;
	int j = 0;
	//打印列号和行号
	for (i = 0; i <= ROW; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= ROW; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= COL; j++)
		{
			printf("%c ", board[i][j]);

		}
		printf("\n");

	}
	

}

void setmine(char board[rows][cols], int ROW, int COL)
{
	int count = COUNT;
	while (count)
	{
		int x = rand()%ROW+1;
		int y = rand()%COL+1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;

		}
	}

}

int get_mine_count(char mine[rows][cols], int x, int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
}


void findmine(char mine[rows][cols], char show[rows][cols], int ROW, int COL)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<ROW*COL-COUNT)
	{
		printf("请输入排查雷的坐标\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
		{
			if (mine[x][y] == '1')
			{
				printf("你被炸死了\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else
			{
				int count=get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("输入坐标错误，请重新输入\n");
		}

	}
	if (win == ROW * COL - COUNT)
	{
		printf("恭喜你，排雷成功\n");
		DisplayBoard(mine, row, col);

	}
}