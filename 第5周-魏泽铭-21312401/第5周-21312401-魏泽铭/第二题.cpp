#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>

//using namespace std;
//class person
//{
//	friend class person_array;//��Ԫ�������Ա����id��height�ȳ�Ա
//public:
//	person()//Ĭ�Ϲ���
//	{
//
//	}
//	person(const char getid[], float getheight) :id(getid), height(getheight)//�вι���
//	{
//	}
//
//	~person()//��������
//	{
//
//	}
//	
//private:
//	const char* id;
//	float height;
//};
////Q1:
////����person�ඨ���id��Ա��const char* id��idָ��Ķ����Ǵ洢�ַ���������ĵ�ַ����ôidӦ�ñ�ʾ����ָ�򳣱�����ָ�룬��cout��������Ӧ����һ����ַ��
////�����ڵ�51����cout��������ȴ��idָ������ݣ�����һ����ַ
////�����ڵ�84����strcmp����ʱ������Ĳ���ֱ��ʱp[i].id�����ý�����ʲô��
////int* point;
////int a = 5;
////point = &a;
////cout << point << endl;��ַ
////cout << *point << endl;5
//class person_array
//{
//public:
//	person_array(person getp[],int getsize)//�вι��죬����person�����Ԫ�ظ���
//	{
//		size = getsize;
//		for (int i = 0; i < size; i++)//ͨ��ѭ��������person�����ʼ��
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
//	void show()//���person����
//	{
//		for (int i = 0; i < size; i++)
//		{
//			cout << "person" << i + 1 << "'s height:" << p[i].height << "  person" << i + 1 << "'s id:" << p[i].id << endl;
//
//		}
//	}
//
//	~person_array()//��������
//	{
//
//	}
//private:
//	person p[50];
//	int size;
//
//};
//
//void person_array::insert(person in_p,int pos)//����һ��person�������
//{
//	for (int i = size-1;i>=pos-1;i--)//ѭ��ʹ���������Ԫ���������
//	{
//		p[i + 1] = p[i];
//
//	}
//	p[pos - 1] = in_p;
//	size++;
//
//}
//
//void person_array::ease(const char getid[])//ɾ��һ��person�������
//{
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		if (strcmp(getid, p[i].id)== 0)
//		{
//			for (int k = i; k < size-1; k++)//ѭ��ʹɾ��������Ԫ������ǰ��
//			{
//				p[k] = p[k + 1];
//			}
//			size--;
//			break;
//		}
//	}
//	if (i >= size)
//	{
//		cout << "û��Ҫɾ���Ķ���" << endl;
//	}
//
//}
//
//void person_array::sort()//������
//{
//	person tmp;
//	int i;
//	int j;
//	for (i = size - 1; i > 0; i--)//ð������
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
//	//����һ��person�������Ԫ�ظ���
//	person p[10] = { person("ww111",170),person("ww222",175), person("ww333",174),person("ww444",171),person("ww555",178),person("ww666",173), person("ww777",184),person("ww888",181),person("ww999",168),person("ww100",177) };
//	person_array p_array(p, 10);
//	p_array.insert(person("wwzzz", 199), 2);
//	p_array.ease("ww333");
//	p_array.sort();
//	p_array.show();
//	return 0;
//}