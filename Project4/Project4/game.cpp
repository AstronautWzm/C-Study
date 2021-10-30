#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void initboard(char board[row][col], int ROW, int COL)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			board[i][j] = { ' ' };
		}

	}
}

void displayboard(char board[row][col], int ROW, int COL)
{
	int i = 0;
	for (i = 0; i < ROW; i++)
	{
		/*printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);
		if (i < ROW - 1)
		{
			printf("---|---|---\n");
		}*/
		int j = 0;
		for (j = 0; j < COL; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < COL - 1)
				printf("|");		
		}
		printf("\n");
		if (i < ROW - 1)
		{
			for (j = 0; j < COL; j++)
			{
				printf("---");
				if (j < COL - 1)
					printf("|");

			}
			printf("\n");

		}
	}

}
void playmove(char board[row][col], int ROW, int COL)
{
	int x = 1;
	int y = 1;
	printf("player time\n");
	printf("�������������꣺\n");
	scanf("%d%d", &x, &y);
	while (1)
	{
		if ((x >= 1 && x <= ROW )&& (y >= 1 && y <= col))
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;//��break������ѭ������ͬ
			}
			else
			{
				printf("��������Ч!!\n");
				printf("\n");
				break;
			}

		}
		else
		{
			printf("��������ȷ����!!\n");
			printf("\n");
			break;
		}

	}
}

void computermove(char board[row][col], int ROW, int COL)
{
	int x = 0;
	int y = 0;
	printf("computer time\n");
	while (1)
	{
		x = rand() % ROW;
		y = rand() % COL;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';//''������пո������ݻᶪʧ
			break;
		}
	}

}

int whetherdraw(char board[row][col], int ROW,int COL)//����1��ʾ�������ˣ�ƽ��
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}

	}
	return 1;
}



char whowin(char board[row][col], int ROW, int COL)
{
	int i = 0;
	int j = 0;
	/*int a = 1;
	int b = 1;
	int c = 1;
	int d = 1;*/
	for (i = 0; i < ROW; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')//��ʤ
		{
			return board[i][1];
		}


	}
	for (i = 0; i < COL; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')//��ʤ
		{
			return board[1][i];
		}


	}
	
		if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')//���Խ���
		{
			return board[1][1];
		}
		if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')//���Խ���
		{
			return board[1][1];
		}

	



	//while (a < 5)//�ж���
	//{
	//	for (j = 0; j < COL - 1; j++)
	//	{
	//		if ((board[i][j] == board[i][j + 1]) && (board[i][j] != ' '))
	//		{
	//			a++;
	//		}
	//		else
	//		{
	//			break;
	//		}
	//	}
	//	break;
	//}
	//if (a == 5)
	//{
	//	return board[i][j];
	//}
	//while (b < 5)//�ж���
	//{
	//	for (i = 0; i< ROW - 1; i++)
	//	{
	//		if ((board[i][j] == board[i+1][j]) && (board[i][j] != ' '))
	//		{
	//			b++;
	//		}
	//		else
	//		{
	//			break;
	//		}
	//	}
	//	break;
	//}
	//if (b == 5)
	//{
	//	return board[i][j];
	//}
	//while (c < 5)//�ж����Խ���
	//{
	//	for (i = 0; i < ROW - 1; i++)
	//	{
	//		j++;
	//			if ((board[i][j] == board[i+1][j+1]) && (board[i][j] != ' '))
	//			{
	//				c++;
	//			}
	//			else
	//			{
	//				break;
	//			}
	//	}
	//	break;
	//}
	//if (c == 5)
	//{
	//	return board[i][j];
	//}
	//while (d < 5)//�жϸ��Խ���
	//{
	//	for (i = 0; i < ROW - 1; i++)
	//	{
	//		for (j = 1; j <COL ; j++)
	//		{
	//			if ((board[i][COL-j] == board[i + 1][COL-j-1]) && (board[i][COL-j] != ' '))
	//			{
	//				d++;
	//			}
	//			else
	//			{
	//				break;
	//			}
	//			break;
	//		}
	//	}
	//	break;
	//}
	//if (d == 5)
	//{
	//	return board[i][COL-j];
	//}
	if (1 == whetherdraw(board, row, col))
	{
		return 'Q';
	}
		return 'C';



}