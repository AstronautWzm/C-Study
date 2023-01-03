#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>


//using namespace std;
//class person_node
//{
//	
//	friend class person_list;//友元声明
//public:
//	person_node()//默认构造
//	{
//
//	}
//	person_node(const char getid[], int getheight) :id(getid), height(getheight)//有参构造
//	{
//
//	}
//
//	~person_node()//析构
//	{
//
//	}
//private:
//	person_node* next;
//	const char* id;
//	float height;
//
//};
//
//class person_list
//{
//public:
//	person_list(int get_size, person_node ps[]) :size(get_size)
//	{
//		head = new person_node();//获取头指针
//		person_node* p;
//		int i = 0;
//		p = head;
//
//		while (i < size)//用person_node数组里的元素建立链表
//		{
//
//			p->next = new person_node();
//
//
//			p->next->id = ps[i].id;
//			p->next->height = ps[i].height;
//			p = p->next;
//			i++;
//		}
//		p->next = NULL;
//	}
//	person_node* find(person_node* pn)//查找并返回最后一个身高不大于pN->height的对象指针
//	{
//		person_node* sign=NULL;
//		person_node* p;
//		p = head->next;
//		while (p)
//		{
//			if (p->height <= pn->height)
//			{
//				sign = p;
//			}
//			p = p->next;
//		}
//		if (sign)//判断是否存在
//		{
//			return sign;
//		}
//		else
//		{
//			cout << "没找到" << endl;
//		}
//	}
//
//	void insert(person_node* in_p)//在身高对应的位置插入一个PersonNode对象
//	{
//		person_node* p = head;
//		while (p->next)
//		{
//			if (in_p->height < p->next->height)//与p指向节点的下一个节点比较
//			{
//				in_p->next = p->next;
//				p->next =in_p;
//				size++;//链表长度加一
//				break;
//				
//			}
//			p = p->next;
//		}
//		if (!p->next)//判断是否要插入对象是最大的，插在链表末尾
//		{
//			p->next = in_p;
//			in_p->next = NULL;
//			size++;
//		}
//
//	}
//
//	void erase(const char getid[])//在数组中删除指定id的Person对象
//	{
//		int flag = 0;
//		person_node* q;
//		q = head;
//		while (q->next)
//		{
//			if (strcmp(getid, q->next->id)==0) //与p指向节点的下一个节点比较
//			{
//				person_node* tmp;
//				tmp = q->next;
//				q->next = q->next->next;				
//				delete(tmp);
//				size--;//链表长度减一
//				flag = 1;
//				break;
//			}
//			q = q->next;
//		}
//		if (!flag)
//		{
//			cout << "无该人可删" << endl;
//		}
//
//	}
//
//	void show()//输出链表
//	{
//		person_node* q;
//		q = head;
//		int i = 1;
//		while (i <= size)
//		{
//			q = q->next;
//			cout << "person" << i << "'s id:" << q->id << "  " << "person" << i << "'s height:" << q->height << endl;
//			i++;
//		}
//	}
//
//	~person_list()
//	{
//	}
//private:
//	person_node* head;
//	int size;
//};
//
//
//int main()
//{
//	person_node p[10] = { person_node("ww111",170),person_node("ww222",171), person_node("ww333",173),person_node("ww444",174),person_node("ww555",175),person_node("ww666",176), person_node("ww777",184),person_node("ww888",185),person_node("ww999",186),person_node("ww100",197) };
//	person_list list1(10, p);
//	person_node* pn=new person_node("ww000",176);
//	person_node*p_find=list1.find(pn);
//	person_node* in_p = &person_node("ww000", 169);
//	list1.insert(in_p);
//	list1.erase("ww111");
//	list1.show();
//
//	return 0;
//}

























