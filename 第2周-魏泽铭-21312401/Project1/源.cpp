#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <string.h>
#include<iomanip>
//��һ��
//using namespace std;
//class Rectangle
//{
//public:
//	Rectangle()
//	{};
//	Rectangle(int iLeftX, int iLeftY, int iRightX, int iRightY)//�������캯��
//	{
//		this->iLeftX = iLeftX;
//		this->iLeftY = iLeftY;
//		this->iRightX = iRightX;
//		this->iRightY = iRightY;
//	}
//	int Area()//������Ա���������
//	{
//		return (iRightX - iLeftX)*(iRightY - iLeftY);
//	}
//private:
//	int iLeftX;
//	int iLeftY;
//	int iRightX;
//	int iRightY;
//};
//
//int main()
//{
//	Rectangle r(1, 1, 2, 2);//��������
//	cout << "������ε�����ǣ�" << r.Area() << endl;
//	return 0;
//}


//�ڶ���

//using namespace std;
//class Date //������
//{
//private:
//	int year;
//	int month;
//	int day;
//public:
//	Date() {} //Ĭ�Ϲ���bai
//	Date(int y, int m, int d) //���ι���
//	{
//		year = y;
//		month = m;
//		day = d;
//	}
//	void set(int y, int m, int d) //�������ݺ���
//	{
//		year = y;
//		month = m;
//		day = d;
//	}
//	void display() //��ʾ����
//	{
//		cout << year << "��" << month << "��" << day << "��";
//	}
//};
//class Person //��Ա��zhi
//{
//private:
//	int num;
//	char sex;
//	Date birthday;
//	char ID[18];
//public:
//	Person() {} //Ĭ�Ϲ���
//	Person(int n, int y, int m, int d, char id[18], char s = 'm') :birthday(y, m, d)
//	{
//		num = n;
//		sex = s;
//		strcpy(ID, id);
//	} //��Ĭ��ֵdao�Ĵ��ι���
//	Person(Person& p) //��������
//	{
//		num = p.num;
//		sex = p.sex;
//		birthday = p.birthday;
//		strcpy(ID, p.ID);
//	}
//	void input() //���뺯��
//	{
//		cout << "¼�����ݣ�" << endl;
//		cout << "��ţ�";
//		cin >> num;
//		cout << "�Ա�(m/f)��";
//		cin >> sex;
//		cout << "���գ�";
//		int y, m, d;
//		cin >> y >> m >> d;
//		birthday.set(y, m, d);
//		cout << "���֤�ţ�";
//		cin >> ID;
//		ID[18] = '\0';
//		cout << endl;
//	}
//	void output() //�������
//	{
//		cout << "��ţ�" << num << endl;
//		cout << "�Ա�" << sex << endl;
//		cout << "���գ�";
//		birthday.display();
//		cout << endl;
//		cout << "���֤�ţ�" << ID << endl;
//	}
//	~Person() //��������
//	{
//		cout << " " << num << "����Ա�Ѿ�¼��" << endl;
//	}
//};
//int main()
//{
//	Person p1;
//	p1.input();
//	p1.output();
//	return 0;
//}

//������
//using namespace std;
//class rectangle {//�������ε���
//public:
//	rectangle(float l, float w) {
//		length = l;
//		width = w;
//
//	}
//	~rectangle()//������������
//	{
//	}
//	float getarea()//��þ������
//	{
//		return length * width;
//	}
//	float getlength()
//	{
//		return length;
//	}
//	float getwidth()
//	{
//		return width;
//	}
//private:
//	float length;
//	float width;
//		
//};
//
//int main()
//{
//	float length, width;
//	cout << "��������εĳ�:";
//	cin >> length;
//	cout << "��������εĿ�:";
//	cin >> width;
//	rectangle r(length, width);
//	cout << "�������Ϊ��" << r.getarea();
//	return 0;
//}


//������   id balance rate name year
using namespace std;
class bank {
public:
	bank(char* i, float b, float r, char* n, int y)//�������캯��
	{
		id = i;
		balance = b;
		rate = r;
		name = n;
		year = y;
	}
	~bank()//��������
	{
	}
	void information()//��ʾ�˻���Ϣ
	{
		cout << "����idΪ��"<<id<<endl;
		cout << "�˻�����Ϊ��"<<name<<endl;
		cout << "�˻����Ϊ��" << balance<<endl;
		cout << "������Ϊ��" << rate<<endl;
	}
	float getmoney()//���n������
	{		
		float new_balance;
		while(year)
		{
			new_balance = balance * rate + balance;
			balance = new_balance;
			year--;
		}
		return balance;
	}
private:
	char* id;
	float balance;
	float rate;
	char* name;
	int year;

};

int main()
{
	char id[10], name[10];
	float rate, balance;
	int year;
	//char id[20], name[10];
	cout << "�������˻�id��";
	scanf("%s", &id);
	cout << "�������˻����ƣ�";
	scanf("%s", &name);
	cout << "�������˻���";
	cin >> balance;
	cout << "�����������ʣ�";
	cin >> rate;
	cout << "������洢������";
	cin >> year;
	bank b(id, balance, rate, name, year);//����
	b.information();//�����˻���Ϣ
	cout << year << "��������˻����Ϊ��" << b.getmoney()<<endl;//���n������


	return 0;
}
