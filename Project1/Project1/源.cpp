#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d", a > b ? a : b);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int num = 0;
//	int sum = 1;
//	scanf("%d", &i);
//	for (num = 1; num <= i; num++)
//	{
//		sum *= num;
//
//	}
//	printf("%d", sum);
//
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	float i = 0.0;
//	float sum = 0.0;
//	int sign = 1;
//	scanf("%d", &num);
//	for (i = 1.0; i <= num; i++)
//	{
//		sum += sign/i;
//			sign*=(-1);
//	}
//	printf("%1.2f", sum);
//	return 0;
//}

//int main()
//{
//	char c1, c2;
//	printf("请输入英文字母进行大小写字母转换\n");
//	while (1)
//	{
//		scanf("%c", &c1);
//		getchar();
//		if (c1 >= 65 && c1 <=90 || c1 >= 97 && c1 <= 122)
//		{
//			break;
//		}
//		else
//		{
//			printf("请输入正确符号\n");
//			
//		}
//	}
//	if (c1 >= 65 && c1 <=90)
//	{
//		c2 = c1 + 32;
//		printf("%c", c2);
//	}
//	else
//	{
//		c2 = c1 - 32;
//		printf("%c", c2);
//	}
//
//	return 0;
//}

//int main()
//{
//	double a, b, c, area,s;
//	a = 3.67;
//	b = 5.43;
//	c = 6.21;
//	s = (a + b + c) / 2;
//	area = sqrt(s*(s - a)*(s - b)*(s - c));
//	printf("a=%lf\tb=%lf\tc=%lf\n",a,b,c);
//	printf("area=%lf\n", area);
//
//
//	return 0;
//}

//int main()
//{
//	double a, b, c,x1,x2,p,q;
//	scanf("%lf%lf%lf", &a, &b, &c);
//	p = sqrt(b*b -4*a*c)/(2.0*a);
//	q = -b/(2.0*a);
//	x1 = q+p;
//	x2 = q-p;
//	printf("%lf%lf", x1, x2);
//
//
//	return 0;
//}

//int main()
//{
//	float a, b, c, x1, x2, disc, p, q;
//	scanf("%f%f%f", &a, &b, &c);
//	disc = b*b - 4 * a*c;
//	if (disc < 0)
//	{
//		printf("此方程无解\n");
//	}
//	else
//	{
//		p = sqrt(disc) / (2 * a);
//		q = -b / (2 * a);
//		x1 = p + q;
//		x2 = q - p;
//		printf("x1=%f\tx2=%f\n", x1, x2);
//	}
//
//	return 0;
//}

//int main()
//{
//	int a, b, c, t;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a > c)
//	{
//		t = a;
//		a = c;
//		c = t;
//
//
//	}
//	if (b > c)
//	{
//		t = b;
//		b = c;
//		c = t;
//
//	}
//	printf("%d%d%d", a, b, c);
//	return 0;
//}

//int main()
//{
//	int num = 1;
//	int i = 0;
//	scanf("%d", &num);
//	if (num % 3 == 0 && num % 5 == 0)
//	{
//		printf("该值可同时被3和5整除\n");
//
//	}
//	else
//	{
//		printf("去死吧\n");
//	}
//	return 0;
//}

//int main()
//{
//	char c1 = 'C';
//	char c2 = 'h';
//	char c3 = 'i';
//	char c4 = 'n';
//	char c5 = 'a';
//	c1 += 4;
//	c2 += 4; 
//	c3 += 4; 
//	c4 += 4; 
//	c5 += 4;
//	printf("%c%c%c%c%c",c1, c2, c3, c4, c5);
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d",&a, &b, &c);
//	if (a > b)
//	{
//		if (a > c)
//		{
//			printf("%d", a);
//		}
//		else
//		{
//			printf("%d", c);
//		}
//	}
//	else
//	{
//		if (b > c)
//		{
//			printf("%d", b);
//		}
//		else
//		{
//			printf("%d", c);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	int i = 0;
//	begin:
//	printf("请输入一个小于1000的整数\n");
//	scanf("%d", &num);
//	if (num > 0 && num < 1000)
//	{
//		i = sqrt(num);
//		printf("%d", i);
//
//	}
//	else
//	{
//		printf("请输入正确数字\n");
//		goto begin;
//	}
//	return 0;
//}

//int main()
//{
//	int x, y;
//	scanf("%d", &x);
//	if (x < 1)
//	{
//		y = x;
//
//	}
//	else if (x >= 1 && x < 10)
//	{
//		y = 2 * x - 1;
//
//	}
//	else
//	{
//		y = 3 * x - 11;
//	}
//	printf("%d", y);
//	return 0;
//}