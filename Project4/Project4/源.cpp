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



//������
//�Ż���1menu��������
//2���ӷ���
//3��Ӯ�ж�
//����ѡ���õ������»����������
void game()
{

	char board[row][col] = {0};
	initboard(board, row, col);//���̳�ʼ��
	displayboard(board,row,col);//��ӡ����
	while (1)
	{
		playmove(board, row, col);
		displayboard(board, row, col);
		 char ret=whowin( board, row, col);
		if (ret !='C')
		{
			if (ret == '*')
			{
				printf("��������Ӯ����Ϸ\n");
			}
			else if (ret == 'Q')
			{
				printf("���ź���ƽ����\n");
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
				printf("���������������Ӯ��\n");
			}
			else if (ret == 'Q')
			{
				printf("���ź���ƽ����\n");
			}
			break;
		}
		//�о�����
		
			/*if (ret == '*')
			{
				printf("��������Ӯ����Ϸ\n");
			}
			else if (ret == '#')
			{
				printf("���������������Ӯ��\n");
			}
			else if (ret == 'Q')
			{
				printf("���ź���ƽ����\n");
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
	printf("������\n");

	test();

	return 0;
}