#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>

//using namespace std;
//class person
//{
//	friend class person_array;//友元声明，以便调用id、height等成员
//public:
//	person()//默认构造
//	{
//
//	}
//	person(const char getid[], float getheight) :id(getid), height(getheight)//有参构造
//	{
//	}
//
//	~person()//析构函数
//	{
//
//	}
//	
//private:
//	const char* id;
//	float height;
//};
////Q1:
////我在person类定义的id成员是const char* id，id指向的对象是存储字符串的数组的地址，那么id应该表示的是指向常变量的指针，我cout它出来的应该是一个地址；
////但是在第51行我cout它出来的却是id指向的内容，而非一个地址
////此外在第84行用strcmp函数时，代入的参数直接时p[i].id而不用解引用什么的
////int* point;
////int a = 5;
////point = &a;
////cout << point << endl;地址
////cout << *point << endl;5
//class person_array
//{
//public:
//	person_array(person getp[],int getsize)//有参构造，接收person数组和元素个数
//	{
//		size = getsize;
//		for (int i = 0; i < size; i++)//通过循环将本类person数组初始化
//		{
//			p[i] = getp[i];
//		}
//
//	}
//	void insert(person ,int);
//
//	void ease(const char getid[]);
//
//	void sort();
//
//	void show()//输出person数组
//	{
//		for (int i = 0; i < size; i++)
//		{
//			cout << "person" << i + 1 << "'s height:" << p[i].height << "  person" << i + 1 << "'s id:" << p[i].id << endl;
//
//		}
//	}
//
//	~person_array()//析构函数
//	{
//
//	}
//private:
//	person p[50];
//	int size;
//
//};
//
//void person_array::insert(person in_p,int pos)//插入一个person类对象函数
//{
//	for (int i = size-1;i>=pos-1;i--)//循环使插入点后面的元素整体后移
//	{
//		p[i + 1] = p[i];
//
//	}
//	p[pos - 1] = in_p;
//	size++;
//
//}
//
//void person_array::ease(const char getid[])//删除一个person类对象函数
//{
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		if (strcmp(getid, p[i].id)== 0)
//		{
//			for (int k = i; k < size-1; k++)//循环使删除点后面的元素整体前移
//			{
//				p[k] = p[k + 1];
//			}
//			size--;
//			break;
//		}
//	}
//	if (i >= size)
//	{
//		cout << "没有要删除的对像" << endl;
//	}
//
//}
//
//void person_array::sort()//排序函数
//{
//	person tmp;
//	int i;
//	int j;
//	for (i = size - 1; i > 0; i--)//冒泡排序
//	{
//		for (j = 1; j <= i; j++)
//		{
//			if (p[j-1].height > p[j].height)
//			{
//				tmp = p[j];
//				p[j] = p[j - 1];
//				p[j - 1] =tmp;
//			}
//			
//		}
//		
//	}
//}
//
//
//
//int main()
//{
//	//给定一个person类数组和元素个数
//	person p[10] = { person("ww111",170),person("ww222",175), person("ww333",174),person("ww444",171),person("ww555",178),person("ww666",173), person("ww777",184),person("ww888",181),person("ww999",168),person("ww100",177) };
//	person_array p_array(p, 10);
//	p_array.insert(person("wwzzz", 199), 2);
//	p_array.ease("ww333");
//	p_array.sort();
//	p_array.show();
//	return 0;
//}