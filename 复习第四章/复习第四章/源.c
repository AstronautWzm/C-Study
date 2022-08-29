#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	double a, b, c, x1, x2, p, q, disc;
	scanf("%lf%lf%lf", &a, &b, &c);
	disc = b * b - 4 * a*c;
	if (disc >= 0)
	{
		p = (-b) / 2 * a;
		q = sqrt(disc) / (2 * a);
		x1 = p + q;
		x2 = p - q;
		printf("有解;x1=%lf\nx2=%lf\n", x1, x2);

	}
	else
		printf("方程无解");
	return 0;
}