#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main()//不创建其他变量进行数据交换
//{
//	/*int a = 3;
//	int b = 5;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d  b=%d\n", a, b);*///当a，b数超级大时，可能会发生溢出
//	int a = 3;
//	int b = 5;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}


//求一个整数在内存二进制中1的个数
//int main()
//{
////法二：
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 0; i< 32; i++)
//	{
//
//
//		if (1 == ((num >> i) & 1))
//		{
//			count++;
//		}
//	}
////法一：
//	/*while (num)
//	{
//		if (num % 2 == 1)
//		{
//			count++;
//			num /= 2;
//		}
//	}*/
//	printf("%d\n", count);

//	return 0;
//}


//int main()
//{
//	int a = 16;
//	char c = 'w';
//	int arr[10] = { 0 };
//	int* p = &a;
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(c));//1
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(int[10]));//40
//	printf("%d\n", sizeof(int*));//4/8
//	printf("%d\n", sizeof(*p));//4
//
//
//
//
//
//
//	return 0;
//}

//struct stu
//{
//	char name[20];
//	int age;
//	int meettime;
//};
//int main()
//{
//	struct stu s1 = { "李",18,2021};
//	printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%d\n", s1.meettime);
//	struct stu* p = &s1;
//	printf("%s\n", p->name);
//	printf("%d\n", (*p).age);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int* pa = &a;
//	char* pc = &a;
//	return 0;
//}

//int main()
//{
//	int a,b,t,m,n;
//
//	scanf("%d%d", &a, &b);
//	if (a < b)
//	{
//		t = a;
//		a= b;
//		b = t;
//	}
//	m = a * b;
//	n = a % b;
//	while (n != 0)
//	{
//		a = b;
//		b = n;
//		n = a % b;
//	}
//	printf("最大公因数是%d\n", b);
//	printf("最小公倍数是%d\n", m /b);
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[8];
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\t", *p);
//		p--;
//
//
//	}
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	
//	return 0;
//}

//int my_strlen(char* arr)
//{
//	char* start = arr;
//	char* end = arr;
//	while (*end != '\0')
//	{
//		end++;
//
//	}
//	return end - start;
//
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	int i = strlen(arr);
//	printf("%d\n", len);
//	printf("%d\n",i);
//
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p=========%p\n", p+i, &arr[i]);
//
//	}
//
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p = i;
//		printf("%d\n", *p);
//		p++;
//
//	}
//	for (i = 0; i < 10; i++)
//	{
//		
//		printf("%d\n",arr[i]);
//
//	}
//
//	return 0;
//}

//int main()
//{
//	int a = 100;
//	int* p = &a;
//	int** pp = &p;
//	**pp = 99;
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int i = 0;
//	int* arr[] = { &a,&b,&c };
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d\n", *arr[i]);
//	}
//
//
//
//	return 0;
//}

//int main()
//{
//	int arr[10];
//	int i = 0;
//	int a,b,c;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//
//	}
//	for (a=1; a<=9; a++)
//	{
//		for (b =0; b <=(9-a);b++ )
//		{
//			if (arr[b] < arr[b+1])
//			{
//				c = arr[b+1];
//				arr[b+1] = arr[b];
//				arr[b] = c;
//			}
//			
//		}
//
//	}
//	for (a = 0; a < 10; a++)
//	{
//		printf("%d ", arr[a]);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	char str1[10], str2[10], str3[10];
//	char str4[20] = "haha\nguagua";
//	//scanf("%s%s%s", str1, str2, str3);
//	//	printf("%s%s%s", str1,str2,str3);
//	//puts(str4);
//	puts(gets(str3));
//	return 0;
//}
//int main()
//{
//	printf("haha haha");
//	printf("haha\0haha");
//	return 0;
//}

//int main()
//{
//	char c[] = "i don't wanna love her";
//	int i = 0;
//	int count = 1;
//	while(c[i]!='\0')
//	{
//		if (c[i] != ' ')
//			i++;
//		else
//		{
//			if (c[i] == '\0')
//			{
//				break;
//			}
//			else
//			{
//				count++;
//				i++;
//			}
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//int main()
//{
//	char c[] = "i don't wanna love her";
//	int i, num = 0, word = 0;
//	for (i = 0; c[i] != '\0'; i++)
//	{
//		if (c[i] == ' ')
//			word = 0;
//		else if (word == 0)
//		{
//			word = 1;
//			num++;
//		}
//
//	}
//	printf("%d", num);
//	return 0;
//}

//int main()
//{
//	char str[3][20];
//	char str0[20];
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		gets(str[i]);
//	}
//	if (strcmp(str[0], str[1]) < 0)
//	{
//		strcpy(str0, str[0]);
//		strcpy(str[0], str[1]);
//		strcpy(str[1], str0);
//	}
//	if (strcmp(str[0], str[2]) < 0)
//	{
//		strcpy(str0, str[0]);
//		strcpy(str[0], str[2]);
//		strcpy(str[2], str0);
//	}
//	if (strcmp(str[1], str[2]) < 0)
//	{
//		strcpy(str0, str[1]);
//		strcpy(str[1], str[2]);
//		strcpy(str[2], str0);
//
//	}
//	for (i = 0; i < 3; i++)
//	{
//		puts(str[i]);
//	}
//	return 0;
//}

//int main()
//{
//	char str1[50] = "i love her";
//	char str2[50]= " but i lost her";
//	int i = 0;
//	int a = 0;
//	a = strlen(str1);
//	for (i = 0; str2[i] != '\0'; i++)
//	{
//		str1[a + i] = str2[i];
//	}
//	printf("%s", str1);
//	return 0;
//}

//int main()
//{
//	char str1[50] = "i love her";
//	char str2[50] = "but she loves him,\0i wish i hadn't met her";
//	int i = 0;
//	for (i = 0; str2[i] != '\0'; i++)
//	{
//		str1[i] = str2[i];
//	}
//	printf("%s",str1);
//	return 0;
//}
//void convert(int num)
//{
//	int i = 0;
//	if ((i = num / 10) != 0)
//	{
//		convert(i);
//	}
//	putchar(num % 10+'0');//整数加'0'是为char/int类型转化
//}
//
//int main()
//{
//	int num = 0;
//	printf("请输入一数字：");
//		scanf("%d", &num);
//	if (num < 0)
//	{
//		printf("-");
//		num = -num;
//	}
//	convert(num);
//	return 0;
//}
//
// 
//汉诺塔问题
//int count;
//void move(int n,char a,char b,char c)
//{
//	void han(int n, char a, char b, char c);
//	han(n-1, a, c, b);
//	count++;
//	printf("第%d步：%c-->%c\n", count,a, c);
//}
//
//void han(int n,char a,char b,char c)//位置a为起始柱；位置b为过渡柱；位置c为目的柱
//{
//	if (n != 0)
//	{
//		move(n, a, b, c);
//		han(n - 1, b, a, c);
//	}
//}
//
//int main()
//{
//	int n = 0;
//    count = 0;
//	printf("请输入汉诺塔盘的数目：");
//	scanf("%d", &n);
//    han(n,'A','B','C');
//	printf("共需要%d步来完成汉诺塔问题", count);
//	return 0;
//}