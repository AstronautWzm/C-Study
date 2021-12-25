#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1-left;
//	int tmp;
//	while (left < right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//	}
//	
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组元素个数
//	//init(arr, sz);
//	print(arr, sz);//打印原函数
//	reverse(arr, sz);//数组元素逆序交换
//	print(arr, sz);//打印变换后数组
//	return 0;
//}
//
//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,0 };
//	int tmp = 0;
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//		
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//		
//	return 0;
//}

//int main()
//{
//	int n = 1;
//	double sum = 1.0, term = 1.0, i = 1.0;
//	while (fabs(term) >= 1e-6)
//	{
//		i *= n;
//		term = 1 /i;
//		sum += term;
//		n++;
//
//	}printf("e=%10.8f\n", sum);
//
//	return 0;
//}


//计算十进制数字的二进制中1的个数
//int count_bit(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int count_bit(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//
//		if (n % 2 == 1)
//		{
//			count++;
//
//		}
//		n = n / 2;
//	}
//
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count=count_bit(a);
//	//13 00000000000000000000000000001101 4个1
//	//-1 11111111111111111111111111111111
//	printf("%d\n", count);
//	system("pause");
//	return 0;
//}



//求二进制中不同位的个数

//int get_diff_bit(int m, int n)
//{
//
//	int tmp = m^n;
//	count_bit(tmp);
//	return count_bit(tmp);
//}
//
//int main()
//{
//	int m, n;
//	scanf("%d%d", &m, &n);
//	int count = get_diff_bit(m, n);
//	printf("%d", count);
//

	//return 0;
//}

//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", *(p + i));
//
//	}
//
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//
//	return 0;
//}

//void print(int n)
//{
//	int i, j;
//	for (i = 0; i <= n; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d * %d = %-3d", i, j, i*j);
//		}
//		printf("\n");
//	}
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}


//void reverse(char arr[])
//{
//	int left = 0;
//	int right = strlen(arr)-1;
//	while (left < right);
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%s\n", arr);
//	reverse(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}

//int sun(unsigned int n)
//{
//	if (n > 9)
//	{
//		return sun(n / 10) + n % 10;
//	}
//	else
//		return n;
//}
//
//
//int main()
//{
//	unsigned int n = 0;
//	scanf("%d", &n);
//	int ret = sun(n);
//	printf("%d\n", ret);
//
//	return 0;
//}

//double pow(int n, int k)
//{
//	if (k < 0)
//		return (1.0 / pow(n, -k));
//	else if (k == 0)
//		return 1.0;
//	else
//		return (n*pow(n, k - 1));
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = pow(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}

//初识结构体



//typedef struct stu
//{
//	char name[10];
//	short age;
//	char tele[12];
//	int class;
//
//}wahawaha;
//
//int main()
//{
//	struct stu s = {"瓦卡莉莉",18,"12332112332",5};
//	wahawaha b = {"威威泽明",100};
//	return 0;
//}

//typedef struct s
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//
//}s;
//typedef struct t
//{
//	char ch[10];
//	struct s s;
//	char *pc;
//}t;
//
//
//int main()
//{
//	char arr[30] = "i have forgot her\n";
//	t t = { "heyhey",{18,{'a'},"i am batman",15.0},arr };
//	printf("%s\n", t.ch);
//	printf("%s\n", t.pc);
//	printf("%d\n", t.s.a);
//	printf("%c\n", t.s.c);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	return 0;
//}

//typedef struct stu
//{
//	char name[10];
//	short age;
//	char tele[12];
//	int class;
//
//}stu;
//void print1(stu tmp)
//{
//	printf("%s\n", tmp.name);
//	printf("%d\n", tmp.age);
//	printf("%s\n", tmp.tele);
//	printf("%d\n", tmp.class);
//}
//void print2(stu* tmp)
//{
//	printf("%s\n", tmp->name);
//	printf("%d\n", tmp->age);
//	printf("%s\n", tmp->tele);
//	printf("%d\n", tmp->class);
//
//
//}
//
//int main()
//{
//	stu s = { "瓦卡莉莉",18,"15788822888",5 };
//	print1(s);
//	print2(&s);//这个更优
//	return 0;
//}

