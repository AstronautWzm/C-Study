#pragma once

//
//class person_node// person_node��
//{
//	friend class person_list_array;
//	friend class person_list;//��Ԫ����
//public:
//	person_node()//Ĭ�Ϲ���
//	{
//	}
//	person_node(const char getid[], int getheight) :id(getid), height(getheight)//�вι���
//	{
//	}
//
//	~person_node()//����
//	{
//	}
//private:
//	person_node* next;
//	const char* id;
//	float height;
//
//};
//
//class person_list//person_list��
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
//	void insert(person_node* in_p);//����߶�Ӧ��λ�ò���һ��PersonNode����
//
//	void erase(const char getid[]);//��������ɾ��ָ��id��Person����
//
//
//	void show();//�������
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
//class person_list_array//person_list_array��
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