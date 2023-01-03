#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <string.h>
#include<iomanip>
//第一题
//using namespace std;
//class Rectangle
//{
//public:
//	Rectangle()
//	{};
//	Rectangle(int iLeftX, int iLeftY, int iRightX, int iRightY)//创建构造函数
//	{
//		this->iLeftX = iLeftX;
//		this->iLeftY = iLeftY;
//		this->iRightX = iRightX;
//		this->iRightY = iRightY;
//	}
//	int Area()//建立成员函数求面积
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
//	Rectangle r(1, 1, 2, 2);//输入坐标
//	cout << "这个矩形的面积是：" << r.Area() << endl;
//	return 0;
//}


//第二题

//using namespace std;
//class Date //日期类
//{
//private:
//	int year;
//	int month;
//	int day;
//public:
//	Date() {} //默认构造bai
//	Date(int y, int m, int d) //带参构造
//	{
//		year = y;
//		month = m;
//		day = d;
//	}
//	void set(int y, int m, int d) //设置数据函数
//	{
//		year = y;
//		month = m;
//		day = d;
//	}
//	void display() //显示函数
//	{
//		cout << year << "年" << month << "月" << day << "日";
//	}
//};
//class Person //人员类zhi
//{
//private:
//	int num;
//	char sex;
//	Date birthday;
//	char ID[18];
//public:
//	Person() {} //默认构造
//	Person(int n, int y, int m, int d, char id[18], char s = 'm') :birthday(y, m, d)
//	{
//		num = n;
//		sex = s;
//		strcpy(ID, id);
//	} //有默认值dao的带参构造
//	Person(Person& p) //拷贝构造
//	{
//		num = p.num;
//		sex = p.sex;
//		birthday = p.birthday;
//		strcpy(ID, p.ID);
//	}
//	void input() //输入函数
//	{
//		cout << "录入数据：" << endl;
//		cout << "编号：";
//		cin >> num;
//		cout << "性别(m/f)：";
//		cin >> sex;
//		cout << "生日：";
//		int y, m, d;
//		cin >> y >> m >> d;
//		birthday.set(y, m, d);
//		cout << "身份证号：";
//		cin >> ID;
//		ID[18] = '\0';
//		cout << endl;
//	}
//	void output() //输出函数
//	{
//		cout << "编号：" << num << endl;
//		cout << "性别：" << sex << endl;
//		cout << "生日：";
//		birthday.display();
//		cout << endl;
//		cout << "身份证号：" << ID << endl;
//	}
//	~Person() //析构函数
//	{
//		cout << " " << num << "号人员已经录入" << endl;
//	}
//};
//int main()
//{
//	Person p1;
//	p1.input();
//	p1.output();
//	return 0;
//}

//第三题
//using namespace std;
//class rectangle {//创建矩形的类
//public:
//	rectangle(float l, float w) {
//		length = l;
//		width = w;
//
//	}
//	~rectangle()//创建析构函数
//	{
//	}
//	float getarea()//获得矩形面积
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
//	cout << "请输入矩形的长:";
//	cin >> length;
//	cout << "请输入矩形的宽:";
//	cin >> width;
//	rectangle r(length, width);
//	cout << "矩形面积为：" << r.getarea();
//	return 0;
//}


//第四题   id balance rate name year
using namespace std;
class bank {
public:
	bank(char* i, float b, float r, char* n, int y)//创建构造函数
	{
		id = i;
		balance = b;
		rate = r;
		name = n;
		year = y;
	}
	~bank()//析构函数
	{
	}
	void information()//显示账户信息
	{
		cout << "银行id为："<<id<<endl;
		cout << "账户人名为："<<name<<endl;
		cout << "账户余额为：" << balance<<endl;
		cout << "年利率为：" << rate<<endl;
	}
	float getmoney()//获得n年后余额
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
	cout << "请输入账户id：";
	scanf("%s", &id);
	cout << "请输入账户名称：";
	scanf("%s", &name);
	cout << "请输入账户余额：";
	cin >> balance;
	cout << "请输入年利率：";
	cin >> rate;
	cout << "请输入存储年数：";
	cin >> year;
	bank b(id, balance, rate, name, year);//传参
	b.information();//输入账户信息
	cout << year << "年后您的账户余额为：" << b.getmoney()<<endl;//输出n年后余额


	return 0;
}
