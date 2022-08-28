#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define PI 55
#include<math.h>
//T1：计算存款利息
//int main()
//{
//	float p0, p1, p2, p3;
//	float r1, r2, r3;
//	p0 = 1000;
//	r1 = 0.0036;
//	r2 = 0.0225;
//	r3 = 0.0198;
//	p1 = p0 * (1 + r1);
//	p2 = p0 * (1 + r2);
//	p3 = p0 * (1 + r3 / 2)*(1 + r3 / 2);
//	printf("p1=%f\np2=%f\np3=%f\n", p1, p2, p3);
//	return 0;
//}


//T2：求三角形面积
//int main()
//{
//	float a, b, c, s,area;
//	a = 3.67;
//	b = 5.43;
//	c = 6.21;
//	s = (a + b + c) / 2;
//	area = sqrt(s*(s - a)*(s - b)*(s - c));
//	printf("%lf\n", area);
//	return 0;
//}
//


//T3:求方程的根
//int main()
//{
//	double a, b, c, p, q, x1, x2;
//	scanf("%lf%lf%lf", &a, &b, &c);
//	p = (-b) / (2 * a);
//	q = sqrt(b*b - 4 * a*c) / (2 * a);
//	x1 = p + q; x2 = p - q;
//	printf("x1=%lf\nx2=%lf\n", x1, x2);
//	return 0;
//}

//T4；习题1
//int main()
//{
//	double p, r, n;
//	r = 0.07;
//	n = 10;
//	p=pow(1 + r, n);
//	printf("%lf\n", p);
//	return 0;
//}

//T5：习题3
//int main()
//{
//	double d, p, r, m;
//	d = 300000, p = 6000, r = 0.01;
//	m=(log10(p) - log10(p - d * r)) / log10(1 + r);
//	printf("m=%3.2lf\n", m);
//	return 0;
//}

//T6习题5
//int main()
//{
//	int a, b;
//	float x;
//	double y;
//	char c1, c2;
//	scanf("%f", &y);
//	printf("%lf\n", y);
//	//scanf("%d%d%f%f%c%c", &a, &b, &x, &y, &c1, &c2);
//	//printf("a=%d,b=%d,x=%f,y=%f,c1=%c,c2=%c\n", a, b, x, y, c1, c2);
//	return 0;
//}

//T7习题6
//int main()
//{
//	char c1, c2, c3, c4, c5;
//	scanf("%c%c%c%c%c", &c1, &c2, &c3, &c4, &c5);
//	putchar(c1 + 4);
//	printf("%c%c%c%c", c2 + 4, c3 + 4, c4 + 4, c5 + 4);
//
//	return 0;
//}

