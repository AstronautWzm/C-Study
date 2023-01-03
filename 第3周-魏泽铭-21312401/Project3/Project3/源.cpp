#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<math.h>
#include<string>
#define PI acos(-1)

//第一题
//using namespace std;
//class student {//创建学生类
//public:
//	student(string in_id, int in_grade[5])//有参构造
//	{
//		id = in_id;
//		memcpy(grade, in_grade, sizeof(grade));//拷贝传入的成绩数组
//		cout << "学生id：" << id<<endl;
//	}
//	void getmean()//获得平均值函数
//	{
//		int i, sum = 0;
//		for (i = 0; i < 5; i++)
//		{
//			sum += grade[i];
//		}
//		cout << "学生平均值：" << sum / 5<<endl;
//
//	}
//	void getmin()//获得最小值函数
//	{
//		int i;
//		int min = grade[0];
//		for (i = 1; i < 5; i++)
//		{
//			if (min > grade[i])
//				min = grade[i];
//		}
//		printf("最小值=%d\n",min);
//	}
//	void getmax()//获得最大值函数
//	{
//		int i;
//		int max = grade[0];
//		for (i = 1; i < 5; i++)
//		{
//			if (max< grade[i])
//				max = grade[i];
//		}
//		printf("最大值=%d\n", max);
//	}
//	~student()//析构函数
//	{
//
//	};
//private:
//	string id;
//	int grade[5];
//	int mean;
//};
//
//
//int main()
//{
//	int grade[5] = { 85,95,90,90,90 };
//	student s1("1111", grade);
//	s1.getmean();
//	s1.getmax();
//	s1.getmin();
//	return 0;
//}



//第二题
//using namespace std;
//
//class complex//创建复数类
//{
//public:
//	complex(int in_i, int in_j) :i(in_i), j(in_j)//构造函数，初始值列表
//	{
//	}
//	void getlength()//获得模长函数
//	{
//		cout << "模长为：" << sqrt(i * i + j * j) << endl;
//
//	}
//	void get_i_j()//获得虚部和实部函数
//	{
//		cout << "实部为：" << i << endl;
//		cout << "虚部为：" << j << endl;
//	}
//	void change_i_j()//改变虚部和实部函数
//	{
//		int x, y;
//		cout << "输入要修改的实部i和虚部j：";
//		cin >> x >> y;
//		i = x;
//		j = y;
//		if (i != 0 && j != 0)//对要输出的实部和虚部进行正负判断，以符合输出格式
//			if (j > 0)
//				cout << "相加后的复数为：" << i << '+' << j << 'j' << endl;
//			else
//				cout << "相加后的复数为：" << i << j << 'j' << endl;
//		else if (i == 0 && j != 0)
//			cout << "修改后的复数为：" << j << 'j' << endl;
//		else if (j == 0 && i != 0)
//			cout << "修改后的复数为：" << i << endl;
//		else
//			cout << 0;
//	}
//	void addition()//复数相加函数
//	{
//		int x, y;
//		cout << "输入要相加的复数" << endl;
//		cout << "实部为：" << endl;
//		scanf_s("%d", &x);
//		cout << "虚部为：" << endl;
//		scanf_s("%d", &y);
//		i = x + i;
//		j = y + j;
//		if (i != 0 && j != 0)//对要输出的实部和虚部进行正负判断，以符合输出格式
//			if (j > 0)
//				cout << "相加后的复数为：" << i << '+' << j << 'j' << endl;
//			else
//				cout << "相加后的复数为：" << i << j << 'j' << endl;
//		else if (i == 0 && j != 0)
//			cout << "相加后的复数为：" << j << 'j' << endl;
//		else if (j == 0 && i != 0)
//			cout << "相加后的复数为：" << i << endl;
//		else
//			cout << 0;
//	}
//	void plus()//复数相乘函数
//	{
//		int x, y,newi,newj;
//		cout << "输入要相乘的复数" << endl;
//		cout << "实部为：" << endl;
//		scanf_s("%d", &x);
//		cout << "虚部为：" << endl;
//		scanf_s("%d", &y);
//		newi = i * x - j * y;
//		newj = j * x + i * y;
//		i = newi;
//		j = newj;
//		if (i != 0 && j != 0)//对要输出的实部和虚部进行正负判断，以符合输出格式
//			if(j>0)
//			    cout << "相加后的复数为：" << i << '+' << j << 'j' << endl;
//			else
//				cout << "相加后的复数为：" << i << j << 'j' << endl;
//		else if (i == 0 && j != 0)
//			cout << "相加后的复数为：" << j << 'j' << endl;
//		else if (j == 0 && i != 0)
//			cout << "相加后的复数为：" << i << endl;
//		else
//			cout << 0;
//
//	}
//	~complex()//析构函数
//	{
//
//	}
//
//private:
//	int i;
//	int j;
//
//};
//
//int main()
//{
//	complex r1(3, -4);
//	//r1.getlength();
//	//r1.get_i_j();
//	//r1.change_i_j();
//	//r1.addition();
//	r1.plus();
//	return 0;
//}


//第三题
using namespace std;
class point//建立point类
{
public:
	point()//默认构造函数
	{

	}
	point(int in_x,int in_y):x(in_x),y(in_y)//有参构造函数
	{

	}
	~point()//析构函数
	{

	}
public://将x，y定义为public是为circle类的对象可以访问
	int x;
	int y;
};

class circle//建立circle类
{
public:
	circle(point in_p, int in_r)//有参构造
	{
		p = in_p;
		r = in_r;
	}
	void area();
	void determine(circle,circle);
	~circle()
	{

	}
public:
	point p;
	int r;

};

void circle::area()//求面积函数
{
	double area;
	area =PI * r*r;
	printf("圆的面积是：%5.4lf\n", area);
}

void circle::determine(circle c1,circle c2)//判断两圆关系函数
{
	float d;
	d = sqrt((c1.p.x - c2.p.x)*(c1.p.x - c2.p.x) + (c1.p.y - c2.p.y)*(c1.p.y - c2.p.y));
	if (d > (c1.r + c2.r))
	{
		cout << "两圆外离" << endl;
	}
	else if (d == fabs(c1.r - c2.r))
	{
		cout << "两圆内切" << endl;
	}
	else if (d == (c1.r + c2.r))
	{
		cout << "两圆外切" << endl;
	}
	else if (d < (c1.r + c2.r)&& d > fabs(c1.r - c2.r))
	{
		
		cout << "两圆相交" << endl;
	}
	else if(d<fabs(c1.r-c2.r))
	{
		cout << "两圆内含" << endl;
	}

}


int main()
{
	point p1(3, 4);
	point p2(4, 5);
	circle c1(p1, 4);
	circle c2(p2, 6);
	c1.area();
	c1.determine(c1, c2);
	return 0;
}