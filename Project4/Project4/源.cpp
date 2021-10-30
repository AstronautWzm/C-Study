#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h"
#include<math.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	int i = 0;
//	for (i = 0; i <= 5; i++)
//	{
//		printf("&arr[i]=%p\n", i, &arr[i]);
//
//	}
//
//	return  0;
//}

//int main()
//{
//	int arr[3][3] = { {1,1,1},{2,2,2} };
//int i = 0;
//	for (i = 0; i <= 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < +3; j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//
//	}
//
//
//	return  0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j <=i/2; j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (j >= i/2)
//		{
//			printf("%d ", i);
//		}
//
//	}
//
//
//	return 0;
//}



//三子棋
//优化：1menu动画表现
//2棋子符号
//3输赢判断
//可以选择让电脑先下还是玩家先下
void game()
{

	char board[row][col] = {0};
	initboard(board, row, col);//棋盘初始化
	displayboard(board,row,col);//打印棋盘
	while (1)
	{
		playmove(board, row, col);
		displayboard(board, row, col);
		 char ret=whowin( board, row, col);
		if (ret !='C')
		{
			if (ret == '*')
			{
				printf("你可真棒，赢了游戏\n");
			}
			else if (ret == 'Q')
			{
				printf("很遗憾，平局了\n");
			}
			break;
		}
		computermove(board, row, col);
		displayboard(board, row, col);
		ret=whowin(board, row, col);
		if (ret != 'C')
		{
			if (ret == '#')
			{
				printf("你可真垃圾，电脑赢了\n");
			}
			else if (ret == 'Q')
			{
				printf("很遗憾，平局了\n");
			}
			break;
		}
		//判决部分
		
			/*if (ret == '*')
			{
				printf("你可真棒，赢了游戏\n");
			}
			else if (ret == '#')
			{
				printf("你可真垃圾，电脑赢了\n");
			}
			else if (ret == 'Q')
			{
				printf("很遗憾，平局了\n");
			}
			*/
		
	}


}
void menu()
{
	printf("*********************\n");
	printf("***1.play************\n");
	printf("***0.exit************\n");
	printf("*********************\n");
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("please type in 1 or 0\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("welcome to my game\n");
			game();
			break;
		case 0:
			printf("looking forward to your next visit\n");
			break;
		default:
			printf("please type in the right number\n");
			break;

		}

	} while (input!=0);

}


int main()

{
	printf("三子棋\n");

	test();

	return 0;
}