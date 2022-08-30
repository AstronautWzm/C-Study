#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>


//int func2(int tmp[],int j)
//{
//	int k = 0;
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	int a[100] = { 0 };
//    int ai = 0;
//	static int count = 0;
//	if (j != 0)
//	{
//		for (k = 0; k <j; k++)
//		{
//			n = tmp[k];
//			for (i = k + 1; i < j; i++)
//			{
//				n *= 10;
//			}
//			sum += n;
//
//		}
//		a[ai] = sum;
//		ai++;
//		count++;
//		for (i =0; i < ai; i++)
//		{
//			printf("%d\n", a[i]);
//		}
//	}
//	return count;
//}
//
//void func1(char arr[],int sz)
//{
//	int i = 0;
//	int tmp[100] = {0};
//	int j = 0;
//	int count = 0;
//	for (i = 0; i <= sz; i++)
//	{
//		if (arr[i] >= '0' && arr[i] <= '9')
//		{
//			tmp[j]= (int)arr[i]-48;
//			//printf("%d\n", tmp[j]);//得到单个数字
//			j++;			
//		}
//		if (arr[i] < '0' || arr[i] > '9')
//		{
//			count=func2(tmp, j);
//			j = 0;
//		}
//	}
//	printf("%d\n", count);
//
//}
//int main()
//{
//	char arr[100];
//	gets_s(arr);
//	int sz = strlen(arr);
//	func1(arr,sz);
//	return 0;
//
//}


//int main()
//{
//	int n = 0;
//	int i = 0;
//	for (n = 100;n<=200; n++)
//	{
//		i = 0;
//		for (i =2; i <= sqrt(n); i++)//判断是否是素数
//		{
//			if (n%i == 0)
//			{
//				break;
//			}
//
//		}
//		if (i > sqrt(n))
//		{
//			printf("%d ", n);
//
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	double r = 0.07;
//	int n = 1;
//	double p=1.0;
//	while (n <= 7)
//	{
//		p *= (1 + r);
//		n++;
//	}
//	printf("%3.3lf", p);
//	return 0;
//}

//int main()
//{
//	char a, b;
//	scanf("%c", &a);
//	b = a - 32;
//	printf("%c\n", b);
//	return 0;
//}

//
//int main()
//{
//	char a[] = "I don't think I Love Her";
//	int i = 0;
//	int sz;
//	sz = sizeof(a) / sizeof(a[0])-1;
//	for (i = 0; i < sz; i++)
//	{
//		if(a[i] <= 'Z'&&a[i] >= 'A')
//		{
//			a[i] += 32;
//		}
//		else if(a[i] <= 'z'&&a[i] >= 'a')
//		{
//			a[i] -= 32;
//		}
//		else if(a[i]=='\'')
//		{
//		}
//		else
//		{
//			a[i] = '*';
//		}
//	}
//	printf("%s\n", a);
//	return 0;
//}
//
//int main()
//{
//	int a, b, c;
//	double q, p, t;
//	scanf("%d%d%d", &a, &b, &c);
//	t = sqrt(b*b -4*a*c);
//	if ((b*b - 4 * a*c)< 0)
//	{
//		printf("此方程无解\n");
//	}
//	if ((b*b - 4 * a*c) >= 0)
//	{
//		q = (-b+t)/(2.0* a);
//		p= (-b-t)/(2.0* a);
//		printf("q=%lf p=%lf\n", q, p);
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	int t;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a < c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b < c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("%d %d %d\n",a,b,c);
//	return 0;
//}

//int main()
//{
//	char c;
//	c=getchar();
//	if (c <= 'Z'&&c >= 'A')
//	{
//		printf("%c\n", c);
//
//	}
//	if (c<'z'&&c>'a')
//	{
//		printf("%c\n", c-32);
//	}
//	return 0;
//}
//
//int main()
//{
//	int y, x;
//	scanf("%d", &x);
//	if (x < 0)
//	{
//		y = -1;
//		printf("%d", y);
//	}
//	else if (x = 0)
//	{
//		y = 0;
//		printf("%d\n", y);
//	}
//	else
//	{
//		y = 1;
//		printf("%d\n", y);
//	}
//	return 0;
//}

//int main()
//{
//	char c;
//	c = getchar();
//	switch (c)
//	{
//	case 'A':
//		printf("85分以上\n");
//		break;
//	case 'B':
//		printf("70-84");
//		break;
//	case 'C':
//		printf("60-69");
//		break;
//	case 'D':
//		printf("60分以下");
//		break;
//	default:
//		printf("enter data error!!\n");
//	}
//	return 0;
//}
//int c;
//void action1(int a, int b)
//{
//	c = a + b;
//	printf("%d", c);
//
//}
//void action2(int a, int b)
//{
//	c = a - b;
//	printf("%d", c);
//}
//void action3(int a, int b)
//{
//	c =pow(a,2);
//	printf("%d", c);
//}
//
//
//int main()
//{
//	char c;
//	int a, b;
//	a = 100;
//	b = 99;
//	c = getchar();
//	switch (c)
//	{
//	case 'A':
//	case 'a':
//		action1(a, b);
//		break;
//	case 'B':
//	case 'b':
//		action2(a, b);
//		break;
//	default:
//		action3(a, b);
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int y;
//	int n;
//	scanf("%d", &y);
//	if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
//	{
//		printf("this year is a leap year");
//	}
//	else
//	{
//		printf("this year isn't a leap year");
//	}
//
//	return 0;
//}


//int main()
//{
//	int i, n;
//	do 
//	{
//		printf("please enter a proper number!\n");
//		scanf("%d", &n);
//	}
//	while (n <= 0 || n > 1000);
//	i = sqrt(n);
//	printf("%d", i);
//
//
//	return 0;
//}

//
//int main()
//{
//	int n = 10;
//	double sum=100, h;
//	double H= 100;
//	for (n = 2; n <= 10; n++)
//	{
//		H /= 2;
//		sum += (2 * H);		
//		h = H;
//	}
//	printf("sum=%lf h=%lf", sum, h/2);
//	return 0;
//}
//
//int main()
//{
//	char a[20];
//	int i = 0;
//	int e=0, b=0, c=0, d=0;
//	int sz;
//	gets_s(a);
//	sz = strlen(a);
//	for (i = 0; i < sz; i++)
//	{
//		if ((a[i] >= 'a'&&a[i]<= 'z') || (a[i] >= 'A'&&a[i] <= 'Z'))
//		{
//			e++;
//		}
//		else if (a[i] >= '0'&&a[i] <= '9')
//		{
//			b++;
//		}
//		else if (a[i] == ' ')
//		{
//			c++;
//		}
//		else
//		{
//			d++;
//		}
//
//	}
//	printf("中英文字符数：%d\n数字字符数：%d\n空格数:%d\n其它字符数：%d", e, b, c, d);
//
//	return 0;
//}

//int main()
//{
//	int m, n;
//	int p;
//	double t;
//	scanf("%d%d", &m, &n);
//	if (m < n)
//	{
//		t = m;
//		m = n;
//		n = t;
//    }
//	t = m % n;
//	p = m * n;
//	while (t != 0)
//	{
//		m = n;
//		n = t;
//		t = m % n;
//	}
//	printf("最大公约数：%d\n最小公倍数：%d\n", n, p /n);
//	return 0;
//}
//
//int main()
//{
//	int r, c;
//	for (r = 1; r <= 7; r++)
//	{
//		for (c = 1; c <= 7; c++)
//		{
//			if ((r==1&&c==4)||(r==7&&c==4))
//			{
//				printf("*");
//			}
//			else if ((r == 2 && c>=3&&c<=5) || (r == 6 && c >= 3 && c <= 5))
//			{
//				printf("*");
//			}
//			else if ((r == 3 && c >= 2 && c <= 6) || (r == 5 && c >= 2 && c <= 6))
//			{
//				printf("*");
//			}
//			else if (r==4)
//			{
//				printf("*");
//			}
//			else
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//
//	}
//	return 0;
//}


//int main()
//{
//	int a[10] = { 0 };
//	int i;
//	int j;
//	int t;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i < 9; i++)
//	{
//		for (j = 0; j <(9 - i); j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				t = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = t;
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int a[6];
//	int i;
//	int left, right, tmp;
//	for (i = 0; i < 6; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (left = 0, right = 5; left < right; left++, right--)
//	{
//		tmp = a[left];
//		a[left] = a[right];
//		a[right] = tmp;
//	}
//	for (i = 0; i < 6; i++)
//	{
//		printf("%d", a[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i, j;
//	int a[10][10];
//	for (i = 0; i <10; i++)
//	{
//		
//		for (j = 0; j <=i; j++)
//		{
//			a[i][j] = 1;
//			if (i >= 2)
//			{
//				if (j >= 1 && j <i)
//				{
//					a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//				}
//		    }
//			printf("%d ", a[i][j]);
//
//		}
//		printf("\n");
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < i+1; j++)
//		{
//			if (j == 0)
//			{
//				printf("%*d", 20 - 2 * i, a[i][j]);
//			}
//			else
//			{
//				printf("%4d", a[i][j]);
//			}
//			if (i == j)
//			{
//				printf("\n");
//			}
//		}
//	}
//	return 0;
//}

//
//void my_strcat(char a[], char b[])
//{
//	int sz;
//	int i = 0;
//	sz = strlen(a);
//	for (i = 0; b[i] != '\0'; i++)
//	{
//		a[sz] = b[i];
//		sz++;
//	}
//	a[sz] = '\0';
//	printf("%s", a);
//
//}
//
//int main()
//{
//	char a[20];
//	char b[20];
//	scanf("%s%s", a, b);
//	my_strcat(a, b);
//	return 0;
//}
//
//void my_strcpy(char a[], char b[])
//{
//	int i = 0;
//	for (i = 0; b[i] != '\0'; i++)
//	{
//		a[i] = b[i];
//	}
//	a[i] = '\0';
//	printf("%s", a);
//}
//
//int main()
//{
//	char a[80];
//	char b[40];
//	gets_s(a);
//	gets_s(b);
//	my_strcpy(a, b);
//	return 0;
//}


//int main()
//{
//	char a[100];
//	int i = 0;
//	int sz;
//	gets_s(a);
//	sz = strlen(a);
//	for (i = 0; i < sz; i++)
//	{
//		if (a[i] >= 'A'&&a[i] <= 'Z')
//		{
//			a[i] = 'Z' - (a[i]-'A');
//		}
//		else if (a[i] >= 'a'&&a[i] <= 'z')
//		{
//			a[i] = 'z' - (a[i] - 'a');
//		}
//	}
//	printf("%s\n", a);
//	for (i = 0; i < sz; i++)
//	{
//		if (a[i] >= 'A'&&a[i] <= 'Z')
//		{
//			a[i] = 'Z' - (a[i] - 'A');
//		}
//		else if (a[i] >= 'a'&&a[i] <= 'z')
//		{
//			a[i] = 'z' - (a[i] - 'a');
//		}
//		
//	}
//	printf("%s\n", a);
//	return 0;
//}

//int main()
//{
//	int a[3][3] = {1,2,3,4,5,6,7,8,9};
//	int i, j;
//	int t;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//     }
//	for (i = 0; i < 3; i++)
//	{
//		for (j = i; j <3; j++)
//		{
//			t=a[i][j];
//			a[i][j] = a[j][i];
//			a[j][i] = t;
//		}		
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int a, b, c, d;
//	a = n % 10;
//	n /= 10;
//	b = n % 10;
//	n /= 10;
//	c = n % 10;
//	n /= 10;
//	d = n % 10;
//	n /= 10;
//	printf("%d %d %d %d\n", d, c, b, a);
//	return 0;
//}
//


int main()
{
	float c, f;
	f = 64.0;
	c = (f - 32)*(5.0 / 9);
	printf("f=%f\nc=%f\n", f, c);
	return 0;
}