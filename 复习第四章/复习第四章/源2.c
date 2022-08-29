#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>



//T1：求方程根
//int main()
//{
//	double a, b, c, x1, x2, p, q, disc;
//	scanf("%lf%lf%lf", &a, &b, &c);
//	disc = b * b - 4 * a*c;
//	if (disc >= 0)
//	{
//		p = (-b) / (2 * a);
//		q = sqrt(disc) / (2 * a);
//		x1 = p + q;
//		x2 = p - q;
//		printf("有解;x1=%2.3lf\nx2=%2.3lf\n", x1, x2);
//
//	}
//	else
//		printf("方程无解");
//	return 0;
//}


//T2：按顺序输出
//int main()
//{
//	float a, b, c,t;
//	scanf("%f%f%f", &a, &b, &c);
//	if (b > a)
//	{
//		t = a;
//		a = b;
//		b = t;
//
//	}
//	if (c > a)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (c > b)
//	{
//		t = b;
//		b = a;
//		c = t;
//
//	}
//	printf("由大到小输出：%5.2f  %5.2f  %5.2f", a, b, c);
//
//	return 0;
//}


//T3:大写转小写
//int main()
//{
//	char c;
//	scanf("%c", &c);
//	if (c <= 'A' && c >= 'Z')
//		c -= 32;
//	else if (c <= 'a' && c >= 'z')
//		c += 32;
//	else
//		printf("输入错误");
//	printf("%c\n", c);
//
//	return 0;
//}


//T4：switch处理菜单命令
//void action1(a, b)
//{
//	printf("a+b=%d\n", a + b);
//
//}
//void action2(a, b)
//{
//	printf("a*b=%d\n", a*b);
//
//}
//
//int main()
//{
//	char c;
//	c=getchar();
//	int a = 15, b = 23;
//	if (c == 'A' || c == 'B')
//	{
//		switch (c)
//		{
//		case'A':action1(a, b);
//			break;
//		case'B':action2(a, b);
//			break;
//		}
//
//	}
//	else
//		printf("输入错误");
//	return 0;
//}


//T5:判断闰年
//int main()
//{
//	int year, leap;
//	printf("请输入年份：\n");
//	scanf("%d",&year);
//	if (year % 4 == 0)//闰年判断
//	{
//		if (year % 100 == 0)
//		{
//			if (year % 400 == 0)
//				leap = 1;
//			else
//				leap = 0;
//
//		}
//		else
//			leap = 1;
//
//	}
//	else
//		leap = 0;
//	
//	if (leap == 1)
//		printf("%d is a leap year", year);
//	if (leap == 0)
//		printf("%d is a not leap year", year);
//
//	return 0;
//}


//T6：计算方程解
//int main()
//{
//	double a, b, c, disc, x1, x2, rp, mp;//rp和mp分别代表p和q
//	scanf("%lf%lf%lf", &a, &b, &c);
//	if (fabs(a) <= 1e-6)
//		printf("不是二次方程\n");
//	else
//	{
//		disc = b * b - 4 * a*c;
//		if (fabs(disc) <= 1e-6)
//			printf("有两个相同的实根：%5.3lf",-b/(2*a));
//		else
//		{
//			if (disc > 1e-6)
//			{
//				x1 = (-b + sqrt(disc)) / (2 * a);
//				x2 = (-b - sqrt(disc)) / (2 * a);
//				printf("有不同实根：x1=%5.3lf  x2=%5.3lf\n", x1, x2);
//
//			}
//			else
//			{
//				rp = -b / (2 * a);
//				mp = sqrt(-disc) / (2 * a);
//				printf("有复根：\nx1=%5.3lf+%5.3lfi\n", rp, mp);
//				printf("x2=%5.3lf-%5.3lfi\n", rp, mp);
//			}
//
//		}
//
//
//	}
//	return 0;
//}

//T7：计算运费
//int main()
//{
//	int c, s;
//	float p, w, d, f;
//	printf("please enter price,weight,distance:");
//	scanf("%f%f%d", &p, &w, &s);
//	if (s >= 3000)
//		c = 12;
//	else
//		c = s / 250;
//	switch (c)
//	{
//	case 0:
//		d = 0;
//		break;
//	case 1:
//		d = 2;
//		break;
//	case 2:
//	case 3:
//		d = 5;
//		break;
//	case 4:
//	case 5:
//	case 6:
//	case 7:
//		d = 8;
//		break;
//	case 8:
//	case 9:
//	case 10:
//	case 11:
//		d = 10;
//		break;
//	case 12:
//		d = 15;
//		break;
//	}
//	f = p * w*s*(1 - d / 100);
//	printf("freight=%10.2f\n", f);
//	return 0;
//}


//T8：习题5
//int main()
//{
//	int z;//设整数部分
//	float r;//输入的数
//	printf("请输入小于1000的正数：\n");
//	second: scanf("%f", &r);
//	if (r < 1000 && r >= 0)
//	{
//		z = sqrt(r);
//		printf("%lf的平方根整数部分是：%d\n", r, z);
//
//	}
//	else
//	{
//		printf("输入错误，请重新输入：\n");
//		goto second;//输入错误，回到输入阶段
//	}
//
//	return 0;
//}

//T9:习题6
//int main()
//{
//	int x;
//	scanf("%d", &x);
//	if (x >= 1)
//	{
//		if (x < 10)
//			printf("y=%d\n", 2 * x - 1);
//		else
//			printf("y=%d\n", 3*x - 11);
//
//	}
//	else
//		printf("y=%d\n", x);
//
//	return 0;
//}

//T10:习题9
//int main()
//{
//	int num, indiv, ten, hundred, thousand, ten_thousand, place;
//	printf("请输入一个整数<0-99999>：\n");
//	scanf("%d", &num);
//	if (num > 9999)
//		place = 5;
//	else if (num > 999)
//		place = 4;
//	else if (num > 99)
//		place = 3;
//	else if (num > 9)
//		place = 2;
//	else
//		place = 1;
//	printf("位数：%d\n", place);
//	printf("每位数字为：");
//	ten_thousand = num / 10000;
//	thousand = (int)(num - ten_thousand * 10000) / 1000;
//	num -= ten_thousand * 10000;
//	hundred = (int)(num - thousand * 1000) / 100;
//	num -= thousand * 1000;
//	ten = (int)(num - hundred * 100) / 10;
//	num -= hundred * 100;
//	indiv = (int)(num - ten * 10);
//	switch (place)
//	{
//	case 1:
//		printf("%d\n", indiv);
//		printf("反序数字为：");
//		printf("%d\n", indiv);
//		break;
//	case 2:
//		printf("%d,%d\n", ten,indiv);
//		printf("反序数字为：");
//		printf("%d%d\n", indiv,ten);
//		break;
//	case 3:
//		printf("%d,%d,%d\n", hundred,ten, indiv);
//		printf("反序数字为：");
//		printf("%d%d%d\n", indiv, ten,hundred);
//		break;
//	case 4:
//		printf("%d,%d,%d,%d\n", thousand,hundred,ten,indiv);
//		printf("反序数字为：");
//		printf("%d%d%d%d\n", indiv, ten, hundred, thousand);
//		break;
//	case 5:
//		printf("%d,%d,%d,%d,%d\n", ten_thousand,thousand, hundred, ten, indiv);
//		printf("反序数字为：");
//		printf("%d%d%d%d%d\n", indiv, ten, hundred, thousand, ten_thousand);
//		break;
//
//	}
//
//	return 0;
//}