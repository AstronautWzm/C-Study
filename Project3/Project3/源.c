#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

//
//void Swap(int* pa, int* pb)
//{
//	int c = 0;
//	c=*pa;
//	*pa=*pb;
//	*pb = c;
//	
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("a=%d b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//
//
//binary_search( int arr[],int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (k > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (k = arr[mid])
//		{
//			return mid;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 17;
//	binary_search(arr,k, sz);
//	if (0 == binary_search(arr,k, sz))
//		printf("找不到\n");
//	else
//		printf("找到了，下标是%d\n", binary_search(arr,k, sz));
//
//
//
//	return 0;
//}


//void print(int n)
//{
//
//	if (n > 9)
//	{
//		print(n / 10);
//
//	}
//	printf("%d", n % 10);
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//
//
//	return 0;
//}
//int my_strlen(char* s)
//{
//	int count = 0;
//	while (*s != '\0')
//	{
//		count++;
//		s++;
//
//	}
//
//	return count;
//}
int my_strlen(char*s)
{
	if (*s != '\0')
	{
		return 1 + my_strlen(s + 1);
	}
	else
		return 0;

}
//
int main()
{
	char arr[] = {"i love u"};
	int len = my_strlen(arr);
	printf("%d", len);

	return 0;
}

//int Fcal(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret*= i;
//	}
//	return ret;
//}
//int Fcal(int n)
//{
//	if (n > 1)
//		return n*Fcal(n - 1);
//	else
//		return 1;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Fcal(n);
//	printf("%d", Fcal(n));
//	
//	return 0;
//}
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else 	
//		return Fib(n - 1) + Fib(n - 2);
//
//}
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Fib(n);
//	printf("%d", Fib(n));
//
//	return 0;
//}
