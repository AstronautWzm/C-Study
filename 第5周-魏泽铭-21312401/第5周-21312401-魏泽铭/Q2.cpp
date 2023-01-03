#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>

//	//Q2:这段代码在person_list的while循环里可以运行结果正确，但放在show函数里时，q->id却打印错误
using namespace std;
class person_node
{
	friend class person_list;
public:
	person_node()
	{

	}

	~person_node()
	{

	}
private:
	person_node* next;
	const char* id;
	float height;

};

class person_list
{
public:
	person_list(int get_size) :size(get_size)
	{
		head = new person_node();
		person_node* p;
		int i = 0;
		p = head;

		while (i < size)
		{
			p->next = new person_node();
			char str[20];
			cout << "person's id:";
			cin >> str;
			p->next->id = str;
			cout << "person's height:";
			cin >> p->next->height;
			p = p->next;
          //cout << "person" << i << "'s id:" << p->id << "  " << "person" << i << "'s height:" << p->height << endl;//这里可以输出正确
			i++;
		}
		p->next = head;
	}

	void show()
	{

		person_node* q;

		q = head;
		int i = 1;
		while (i <= size)
		{
			q = q->next;
			cout << "person" << i << "'s id:" << q->id << "  " << "person" << i << "'s height:" << q->height << endl;//这里输出错误
			i++;

		}

	}


	~person_list()
	{

	}
private:
	person_node* head;
	int size;
};


int main()
{
	person_list list1(1);

	list1.show();

	return 0;
}