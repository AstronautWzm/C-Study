#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
#include"第四题.h"
//using namespace std;
//
//
//
//
//person_list::person_list(int get_size, person_node ps[]) :size(get_size)
//{
//	head = new person_node();//获取头指针
//	person_node* p;
//	int i = 0;
//	p = head;
//
//	while (i < size)//用person_node数组里的元素建立链表
//	{
//
//		p->next = new person_node();
//
//
//		p->next->id = ps[i].id;
//		p->next->height = ps[i].height;
//		p = p->next;
//		i++;
//	}
//	p->next = NULL;
//}
//
//
//const char* person_list::find(int find_height)
//{
//	person_node* sign = NULL;
//	person_node* p;
//
//	int i = 0;
//	p = head->next;
//	while (p)
//	{
//		if (p->height == find_height)
//		{
//			sign = p;
//			i++;
//		}
//		p = p->next;
//	}
//	if (sign)//判断是否存在
//	{
//		return sign->id;
//	}
//	else
//	{
//		return "NULL";
//	}
//}
//
//
//void person_list::insert(person_node* in_p)
//{
//	person_node* p = head;
//	while (p->next)
//	{
//		if (in_p->height < p->next->height)//与p指向节点的下一个节点比较
//		{
//			in_p->next = p->next;
//			p->next = in_p;
//			size++;//链表长度加一
//			break;
//
//		}
//		p = p->next;
//	}
//	if (!p->next)//判断是否要插入对象是最大的，插在链表末尾
//	{
//		p->next = in_p;
//		in_p->next = NULL;
//		size++;
//	}
//
//}
//
//void person_list::erase(const char getid[])
//{
//	int flag = 0;
//	person_node* q;
//	q = head;
//	while (q->next)
//	{
//		if (strcmp(getid, q->next->id) == 0) //与p指向节点的下一个节点比较
//		{
//			person_node* tmp;
//			tmp = q->next;
//			q->next = q->next->next;
//			delete(tmp);
//			size--;//链表长度减一
//			flag = 1;
//			break;
//		}
//		q = q->next;
//	}
//	if (!flag)
//	{
//		cout << "无该人可删" << endl;
//	}
//}
//
//
//void person_list::show()
//{
//	person_node* q;
//	q = head;
//	int i = 1;
//	while (i <= size)
//	{
//		q = q->next;
//		cout << "person" << i << "'s id:" << q->id << "  " << "person" << i << "'s height:" << q->height << endl;
//		i++;
//	}
//}
//
//
//
//person_list_array::person_list_array(person_list* get_array[])
//{
//	for (int i = 0; i < 10; i++)
//	{
//		array[i] = get_array[i];
//	}
//}
//
//const char* person_list_array::find(int find_height)
//{
//	int num;
//	if (find_height > 109 && find_height < 199)
//	{
//		 num = 10 - 20 % (find_height / 10);
//	}
//	else
//	{
//		num = find_height / 100;
//	}
//	return array[num - 1]->find(find_height);
//}
//
//void person_list_array::insert(person_node* in_p)
//{
//	int num;
//	if (in_p->height  > 109 && in_p->height < 199)
//	{
//		num = 10 - 20 %((int)( in_p->height / 10));
//	}
//	else
//	{
//		num = in_p->height / 100;
//	}
//	array[num - 1]->insert(in_p);
//}
//
//void person_list_array::erase(const char* erase_id)
//{
//	int num;
//	if (erase_id[3] != 0)
//	{
//		num = (int)erase_id[2];
//	}
//	else
//	{
//		num = 10;
//	}
//	array[num - 1]->erase(erase_id);
//	
//}
//
//
//
//int main()
//{
//	person_node p1[10] = { person_node("ww111",100),person_node("ww112",101), person_node("ww113",102),person_node("ww114",103),person_node("ww115",104),person_node("ww116",105), person_node("ww117",106),person_node("ww118",107),person_node("ww119",108),person_node("ww110",109) };
//	person_list list1(10, p1);
//	person_list* list_p1 = &list1;
//
//	person_node p2[10] = { person_node("ww211",120),person_node("ww212",121), person_node("ww213",122),person_node("ww214",123),person_node("ww215",124),person_node("ww216",125), person_node("ww217",126),person_node("ww218",127),person_node("ww219",128),person_node("ww210",129) };
//	person_list list2(10, p2);
//	person_list* list_p2 = &list2;
//
//
//	person_node p3[10] = { person_node("ww311",130),person_node("ww312",131), person_node("ww313",131),person_node("ww314",133),person_node("ww315",134),person_node("ww316",134), person_node("ww317",136),person_node("ww318",137),person_node("ww319",138),person_node("ww310",139) };
//	person_list list3(10, p3);
//	person_list* list_p3 = &list3;
//
//	person_node p4[4] = { person_node("ww411",145),person_node("ww412",146), person_node("ww413",146),person_node("ww414",149) };
//	person_list list4(4, p4);
//	person_list* list_p4 = &list4;
//
//	person_node p5[6] = { person_node("ww511",150),person_node("ww512",151), person_node("ww513",152),person_node("ww514",155),person_node("ww515",155)};
//	person_list list5(6, p5);
//	person_list* list_p5 = &list5;
//
//	person_node p6[3] = { person_node("ww611",164),person_node("ww612",165), person_node("ww613",165) };
//	person_list list6(3, p6);
//	person_list* list_p6 = &list6;
//
//	person_node p7[1] = { person_node("ww711",174) };
//	person_list list7(1, p7);
//	person_list* list_p7 = &list7;
//
//	person_node p8[5] = { person_node("ww811",180),person_node("ww812",180), person_node("ww813",180),person_node("ww814",180),person_node("ww815",180) };
//	person_list list8(5, p8);
//	person_list* list_p8 = &list8;
//
//	person_node p9[4] = { person_node("ww911",190),person_node("ww912",191), person_node("ww913",192),person_node("ww914",193) };
//	person_list list9(4, p9);
//	person_list* list_p9 = &list9;
//
//	person_node p10[2] = { person_node("ww101",200),person_node("ww102",201) };
//	person_list list10(2, p10);
//	person_list* list_p10 = &list10;
//
//	person_list* list_array[10] = { list_p1,list_p2,list_p3,list_p4,list_p5,list_p6,list_p7,list_p8,list_p9,list_p10 };
//	person_list_array person_array(list_array);
//	cout<<person_array.find(181)<<endl;
//	person_array.erase("ww102");
//	person_node in_p("ww000", 175);
//	person_node* in_pp= &in_p;
//	person_array.insert(in_pp);
//	return 0;
//}