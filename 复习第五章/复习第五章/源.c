#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

//int main()
//{
//	int i = 1, sum = 0;
//	while (i <= 100)
//	{
//		sum += i;
//		i++;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0, sum = 0;
//	do
//	{
//		sum += i;
//		i++;
//
//	} while (i <= 100);
//	printf("sum=%d\n", sum);
//	return 0;
//}


//T1:统计筹款数据
//int main()
//{
//	int i;
//	float amount, aver, total;
//	total = 0;
//	for (i = 1; i <= 1000; i++)
//	{
//		printf("请输入筹款数目：");
//		scanf("%f", &amount);//每人筹款数
//		total += amount;
//		if (total >= 100000)//超过需要数目
//		{
//			break;
//		}
//
//	}
//	aver = total / i;
//	printf("筹款人数：%d\n筹款总数：%f\n平均筹款数：%f\n", i, total, aver);
//	return 0;
//}

//T2：输出不能被3整除
//int main()
//{
//	int i;
//	for (i = 100; i <= 200; i++)
//	{
//		if (i % 3 == 0)
//			continue;
//		else
//			printf("%d  ", i);
//
//	}
//	return 0;
//}

//T3:输出矩阵
//int main()
//{
//	int i, j,n;
//	
//	for (i = 1; i <= 4; i++)
//	{
//		n = 0;
//		for (j = 1; j <= 5; j++)
//		{
//			if (i == 3 && j == 1)
//				continue;
//			n += i;
//			printf("%d\t", n);
//			
//		}
//		printf("\n");
//	}
//	return 0;
//}
//


//T4：近似Π值
//int main()
//{
//	int sign = 1;
//	double pi=0, term=1, n=1;
//	while (fabs(term) >= 1e-6)
//	{
//		term = sign / n;
//		pi += term;
//		n += 2;
//		sign = -sign;
//	}
//	printf("pi=%2.8lf\n", pi * 4);
//	return 0;
//}


//T5:求斐波那契数列前40个数
//int main()
//{
//	int i=1, j=1, t,n;//t为循环次数，n为斐波那契数
//	printf("%d\t%d\t", i, j);
//	for (t = 1; t <= 40; t++)
//	{
//		n = i + j;
//		printf("%d\t", n);
//		i = j;
//		j = n;
//	}
//	return 0;
//}

//T6:输入大于3的整数，判断是否为素数
//int main()
//{
//	int n, i;
//	printf("请输入一个大于3的整数：");
//	scanf("%d", &n);
//	for (i = 2; i < n; i++)
//	{
//		if (n%i == 0)
//			printf("此数非素数\n");
//			break;
//	}
//	if (i= n)
//		printf("此数为素数\n");
//	return 0;
//}

//T7:求100-200的全部素数
//int main()
//{
//	int i, k,n;
//	for (i = 100; i <= 200; i++)
//	{
//		k = sqrt(i);
//		for (n = 2; n <= k; n++)
//		{
//			if (i%n == 0)
//				break;
//		}
//		if (n > k)
//		{
//			printf("%d\t", i);
//		}
//	}
//
//	return 0;
//}

//T8:译密码
//int main()
//{
//	char c;
//	while ((c = getchar()) != '\n')
//	{
//		if ((c >= 'A'&&c <= 'Z') || (c >= 'a'&&c <= 'z'))
//		{
//			c+=4;
//		    if((c>'Z'&&c<'Z+4')||c>'z')
//					c-=26;
//		}
//		printf("%c",c);
//
//	}
//	return 0;
//}

//T9:习题4
//int main()
//{
//	char c;
//	int letters = 0, space = 0, digit = 0, other = 0;
//	while ((c = getchar()) != '\n')
//	{
//		if (c >= 'a'&&c <= 'z' || c >= 'A'&&c <= 'Z')
//			letters++;
//		else if (c == ' ')
//			space++;
//		else if (c >= '0'&&c <= '9')
//			digit++;
//		else
//			other++;
//	}
//	printf("letters:%d\nspace:%d\ndigit:%d\nother:%d\n", letters, space, digit, other);
//
//	return 0;
//}

//T10:习题16
//int main()
//{
//	int i, j,k;
//	for (i = 1; i <= 4; i++)
//	{
//		for (j = 1; j <= 4 - i; j++)
//		{
//			printf(" ");
//		}
//		for (k = 1; k <= 2*i-1; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 1; i <= 3; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (k = 1; k <= 7 - 2 * i; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}