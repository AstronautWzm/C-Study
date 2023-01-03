#pragma once

//
//class person_node// person_node类
//{
//	friend class person_list_array;
//	friend class person_list;//友元声明
//public:
//	person_node()//默认构造
//	{
//	}
//	person_node(const char getid[], int getheight) :id(getid), height(getheight)//有参构造
//	{
//	}
//
//	~person_node()//析构
//	{
//	}
//private:
//	person_node* next;
//	const char* id;
//	float height;
//
//};
//
//class person_list//person_list类
//{
//	friend class person_list_array;
//public:
//	person_list()
//	{
//	}
//	person_list(int get_size, person_node ps[]);
//	
//
//	const char* find(int find_height);
//
//	void insert(person_node* in_p);//在身高对应的位置插入一个PersonNode对象
//
//	void erase(const char getid[]);//在数组中删除指定id的Person对象
//
//
//	void show();//输出链表
//
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
//class person_list_array//person_list_array类
//{
//public:
//	person_list_array(person_list* get_array[]);
//
//	const char* find(int);
//
//	void insert(person_node*);
//
//	void erase(const char*);
//
//
//	~person_list_array()
//	{
//
//	}
//private:
//	person_list* array[10];
//
//};