#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
# define N 15

//int main()
//{
//	int i, a[10];
//	for (i = 0; i <= 9; i++)
//	{
//		a[i] = i;
//	}
//	for (i = 9; i >= 0; i--)
//		printf("%d ", a[i]);
//	return 0;
//}


//int main()
//{
//	int a[5];
//	int i;
//	for (i = 0; i <= 4; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int a[20] = { 1,1 };
//	int i;
//	for (i = 2; i <= 19; i++)
//	{
//		a[i] = a[i - 2] + a[i - 1];
//
//	}
//	for (i = 0; i <= 19; i++)
//	{
//		if (i % 5 == 0)
//			printf("\n");
//		printf("%12d", a[i]);
//		
//	}
//	return 0;
//}


//T1:���ݷ�������С����
//int main()
//{
//	int a[10];
//	int i = 0;
//	for (; i <= 9; i++)//����10����
//	{
//		scanf("%d",&a[i]);
//	}
//	printf("\n");
//	int j,t;//iǰ���Ѷ��壬��ʾѭ��������j��ʾÿ�ζԱȼ��Σ���һ��ѭ��Ҫ�Ա�9�Σ���tΪ��ʱ����
//	for (i = 0; i <9; i++)//ѭ������
//	{
//		for (j = 0; j < 9 - i; j++)//ÿ��ѭ���Աȴ�����ע��������j<9-i����Ϊ������a[j+1]��ÿ��ѭ�����Ǵ�a[0]��ʼ�Ա�
//		{
//			if (a[j] > a[j + 1])
//			{
//				t = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = t;
//			}
//		}
//	}
//	for (i = 0; i <= 9; i++)//��ӡ
//	{
//		printf("%d\n", a[i]);
//	}
//	return 0;
//}

//T2����ά���黥���к���
//int main()
//{
//	int i, j;
//	int a[2][3] = { 1,2,3,4,5,6 };
//	int b[3][2];
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			b[i][j] = a[j][i];
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			printf("%d ", b[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//T3:��������Ԫ��
//int main()
//{
//	int max, i, j;
//	int a[3][4] = { 1,2,3,4,5,6,3,4,2,9,0,4 };
//	max = a[0][0];
//	int n, m;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (max <a[i][j])
//			{
//				max = a[i][j];
//				n = i;
//				m = j;
//			}
//		}
//	}
//	printf("max=%d;i=%d j=%d\n", max, n, m);
//	return 0;
//}

//int main()
//{
//	char c[15] = { 'i',' ','a','m',' ' ,'?' };
//	int i;
//	for (i = 0; i < 15; i++)
//	{
//		printf("%c", c[i]);
//	}
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	char diamond[][5] = { {' ',' ','*'},{' ','*',' ','*'},{'*',' ',' ',' ','*'},{' ','*',' ','*'},{' ',' ','*'} };
//	int i, j;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%c", diamond[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	char a[] = "i am what?";
//	char b[] = "i am wha\0t";
//	printf("%s\n%s\n%d\n", a, b, sizeof(b));
//	char c[20];
//	scanf("%s%s", c,a);
//	printf("%s\n%s", c,a);
//	printff("%d", sizeof(gets(c)));
//	return 0;
//}
//
//int main()
//{
//	char c[100] = {"we\nwei\n"};
//	printf("%s", c);
//	puts(c);
//	return 0;
//}

//int main()
//{
//	char c1[100] = "i am a";
//	char c2[100] = { " superman" };
//	char c3[100] = strcat(c1, c2);
//	printf("%s\n", c3);
//	return 0;
//}

//
//int main()
//{
//	int n, sum;
//	int i, j;
//	scanf("%d", &n);
//	printf("%d\n", (n*n*n));
//	for (i = 1; i < n*n*n; i += 2)
//	{
//		sum = 0;
//		for (j = i; j < i + 2 * n; j += 2)
//		{
//			sum += j;
//		}
//		if (sum == n * n*n)
//		{
//			for (j = i; j < i + 2 * n; j += 2)
//			{
//				printf("%d ", j);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	char *p = "Hello";
//	char arr1[] = { "Hello" };
//	char arr2[] = { 'H,','e','l','l','o' };
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}
//
//int main()
//{
//	char a[] = "i Am A Hero";
//	_strlwr(a);
//	printf("%s\n", a);
//	return 0;
//}
//
//T4:ͳ�Ƶ���
//int main()
//{
//	char a[100];
//	gets(a);
//	int i,n=1;
//	for (i = 0; a[i] != '\0'; i++)
//	{
//		if (a[i]==' ')
//		{
//			n++;
//		}
//		
//	}
//	printf("%d\n", n);
//	return 0;
//}

//T5:����ַ��������
//int main()
//{
//	char a[100], b[100], c[100];
//	scanf("%s%s%s", a, b, c);
//	if (strcmp(b, a) >= 0)
//	{
//		strcpy(a, b);
//	}
//	if (strcmp(c, a) > 0)
//	{
//		strcpy(a, c);
//	}
//	printf("%s\n", a);
//	return 0;
//}

//int main()
//{
//	char str[3][20];
//	char string[20];
//	int i;
//	for (i = 0; i < 3; i++)
//	{
//		gets(str[i]);
//	}
//	if (strcmp(str[0], str[1]) > 0)
//	{
//		strcpy(string, str[0]);
//	}
//	else
//	{
//		strcpy(string, str[1]);
//	}
//	if (strcmp(string, str[2]) < 0)
//	{
//		strcpy(string, str[2]);
//	}
//	printf("%s\n", string);
//	return 0;
//}

//T6:������������
//int main()
//{
//	int a[10][10];
//	int i, j;
//	for (i = 0; i < 10; i++)
//	{
//		a[i][i] = 1;
//		a[i][0] = 1;
//	}
//	for (i = 2; i < 10; i++)
//	{
//		for (j = 1; j < i; j++)
//		{
//			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 9-i; j >= 0; j--)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < i; j++)
//		{
//			printf("%-3d", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//T7:ɸѡ��������
//int main()
//{
//	int i, j, a[101];
//	for (i = 0; i <= 100; i++)
//	{
//		a[i] = i;
//	}
//	for (j = 2; j < sqrt(100); j++)
//	{
//		if (a[j] != 0)
//		{
//			for (i = j + 1; i <= 100; i++)
//			{
//				if (a[i] != 0)
//				{
//					if (a[i] % a[j] == 0)
//					{
//						a[i] = 0;
//					}
//				}
//			}
//		}
//	}
//	for (i = 2; i <= 100; i++)
//	{
//		if (a[i] != 0)
//		{
//			printf("%d ", a[i]);
//			j++;
//		 }
//		if (j % 10 == 0)
//		{
//			printf("\n");
//		}
//
//	}
//	return 0;
//}

//T8:��ѡ�񷨶�10����������
//int main()
//{
//	int i, j, a[10],tmp;
//	printf("������10����:\n");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	printf("\n���������£�\n");
//	for (i = 0; i < 9; i++)
//	{
//		for (j = i + 1; j < 10; j++)
//		{
//			if (a[i] > a[j])
//			{
//				tmp = a[i];
//				a[i] = a[j];
//				a[j] =tmp;
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%5d", a[i]);
//	}
//	return 0;
//}

//T9:ͳ�ƴ�Сд��ĸ�����֡��ո�ȵ�
//int main()
//{
//	int big, small, num, space, other;
//	char a[3][80];
//	int i, j;
//	big = small = num = space = other = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("�������%d�����ݣ�", i+1);
//		gets(a[i]);
//		printf("\n");
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; a[i][j] != '\0'; j++)
//		{
//			if (a[i][j] >= 'A'&&a[i][j] <= 'Z')
//				big++;
//			else if (a[i][j] >= 'a'&&a[i][j] <= 'z')
//				small++;
//			else if (a[i][j] >= '0'&&a[i][j] <= '9')
//				num++;
//			else if (a[i][j] == ' ')
//				space++;
//			else
//				other++;
//		}
//	}
//	printf("��д��ĸ�ĸ���Ϊ��%d\n", big);
//	printf("Сд��ĸ�ĸ���Ϊ��%d\n", small);
//	printf("���ֵĸ���Ϊ��%d\n", num);
//	printf("�����ַ��ĸ���Ϊ��%d\n", other);
//	printf("�ո�ĸ���Ϊ��%d\n", space);
//	return 0;
//}

//T10��ϰ��9
//int main()
//{
//	int a[N];
//	int i,flag,num,mid,top,botto;
//	flag = 1;
//	top = N-1;
//	botto = 0;
//	mid = (N - 1) / 2;
//	printf("������%d���ɴ�С������\n", N);
//again:	
//	for (i = 0; i < N; i++)
//	{		
//		scanf("%d", &a[i]);
//		if (i >= 1 && (a[i]< a[i - 1]))
//		{
//			printf("�����������������\n");
//			goto again;
//		}
//	}
//		while (flag)
//		{
//			printf("������Ҫ���ҵ�����");
//			scanf("%d", &num);
//			if (num < a[0] || num > a[N-1])
//			{
//				printf("û����Ҫ�ҵ�����\n");
//				flag = 0;
//			}
//			else
//			{
//				while (top>=botto)
//				{
//					mid = (top + botto) / 2;
//					if (num = a[mid])
//					{
//						printf("�����ҵ������ڵ�%d����\n", mid + 1);
//						break;
//					}
//					else if (num < a[mid])
//					{
//
//						botto = mid-1;
//						
//					}
//					else
//					{
//						top = mid +1;
//
//					}
//				}
//					
//			}
//			if (flag == 0)
//			{
//				printf("���Ƿ���������ң���������1����������0\n");
//				scanf("%d", &flag);
//			}
//		}
//	return 0;
//}
