#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
#include<time.h>
//int main()
//{
//	int i = 0;
//	char password[12] = { 0 };
//	for (i = 1; i <= 3; i++)
//	{
//		printf("���������룺");
//		scanf("%s", password);
//		if (strcmp(password, "123456")==0)
//		{
//			printf("����ɹ�\n");
//			break;
//		}	
//	}
//	if (i == 3)
//	{
//		printf("����ʧ��\n");
//	}
//
//int main()
//{
//	char arr1[] = "Happy Mid-Autumn Festival!!!";
//    char arr2[] = "****************************";
//	
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(500);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("Happy Mid-Autumn Festival!!!");
//
//
//	return 0;
//}
int main()
{
	char input[50] = { 0 };
	system("shutdown -s -t 60");
	printf("���Խ���һ�����ڹرգ�������룺��������ȡ���ػ�\n");
	again:
	{
		scanf("%s", &input);
		if (0 == strcmp(input, "������"))
		{
			system("shutdown -a");
		}
		else
		{
			goto again;

		}
	}



	return 0;
}






















//int main()
//{
//	int  num1 = 0;
//	int  num2 = 0;
//	int  sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum= %d\n", sum);
//
//
//	return 0;
//}
//enum sex
//{
//////
//	male,
//	female ,
//	unknown
//
//};
//int main()
//{
//	//enum sex s = male;
//	printf("%d\n",male);
//printf("%d\n", female);
//	printf("%d\n", unknown);
//
//	return 0;
//}
//int main()
//{
//	char arr1[] = "wzm";
//	char arr2[] = { 'w','z','m',0 };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//
//	return 0;
//
//}
//int main()
//{
	

//int main()
//{
//	printf("c\\test\\32\\test.c");
//	printf("%c\n", '\132');
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	printf("�����ѧ\n");
//	printf("��Ҫ�ú�ѧϰ��?(1/0��");
//			scanf("%d", &input);
//			if (input == 1)
//			printf("��н50w\n");
//			else
//				printf("�̳мҲ�\n");
//
//	return 0;
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 40;
//	int num2 = 40;
//	int max = 0;
//
//	max = Max(num1, num2);
//	printf("max= %d\n", max);
//	
//	return 0;
//}
//
//int main()
//{
//	int a = (int)3.14;
//	printf("a=%d\n", a);
//	return 0;
//}
//
//#define c 4
//
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p = 30;
//		printf("%d\n", a);
//
//	return 0;
//}
//struct She
//{
//	char name[10];
//	int birthday;
//
//};
//int  main()
//{
//	struct She she= { "lilin" ,121 };
//	printf("���֣�%s\n", she.name);
//	printf("����:%d\n", she.birthday);
//	return 0;
//}
//int main()
//{
//	int num1 = 51;
//	while (num1>=50&&num1<=97 )
//	{
//		if(num1%2==1)
//		 
//			num1 += 2;
//			printf("%d\n", num1);
//	}
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 1;
//	int sum = 0;
//	scanf("%d", &b);
//	for (a = 1; a <= b; a++)//b=3,a=2,a=3
//	{
//		c = c * a;//c=1,c=2,6
//		sum = sum + c;//sum=1,3,9
//
//	}
//	printf("sum= %d\n", sum);
//
//	return 0;
//}
//
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		if (i%10==9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("count =%d\n", count);
//
//	return 0;
//
//}
//
//
//
//void menu()
//{
//	printf("********************************************\n");
//	printf("*******************1)��ʼ��Ϸ***************\n");
//	printf("*******************0)�˳���Ϸ***************\n");
//	printf("********************************************\n");
//}
//void game()
//{
//	int r = rand()% 100 + 1;
//	int input = 0;
//	int count = 0;
//	while (1)
//	{
//		printf("��������Ҫ�µ�����>:\n");
//		scanf("%d", &input);
//			if (input < r)
//			{
//				printf("��С�ˣ�������\n");
//				count++;
//			}
//			else if (input > r)
//			{
//				printf("�´��ˣ���\n");
//				count++;
//			}
//			else
//			{
//				printf("��ϲ�㣬���ڲ¶���\n");
//				count++;
//				printf("�ñ�ѽ����ô����%d�βŲ¶�", count);
//				break;
//			}
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned)time(NULL));
//	do
//	{
//		menu();
//		printf("��үѡ>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("��ʼ��Ϸ\n");
//			game();
//			break;
//		case 0:
//			printf("�治��\n");
//			break;
//		default:
//			printf("�׳գ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//
//int main()
//{
//	char arr1[] =  "weizeming" ;
//	char arr2[] =  "***********" ;
//	strcpy(arr2, arr1);
//	printf("%s", arr2);
//
//}