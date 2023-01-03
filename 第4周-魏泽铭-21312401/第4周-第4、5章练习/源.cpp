#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<math.h>
#include"头文件.h"


//第一题
//using namespace std;
//
//
//class point {
//	friend double direct(point &point1, point &point2);//友元函数定义
//public:
//	static int count;//静态成员定义
//	point(double in_i,double in_j):i(in_i),j(in_j)//构造函数
//	{
//		count++;//统计点数
//	};
//	~point()//析构函数
//	{
//	};
//	
//private: 
//	double i;
//	double j;
//
//
//};
//int point::count = 0;//静态成员初始化
//
//double direct(point &point1,point &point2)//调用友元函数计算距离
//{
//	double result = sqrt(pow((point1.i - point2.i), 2) + pow((point1.j - point2.j), 2));
//	return result;
//}
//
//int main()
//{
//	point point1(1, 1);
//	point point2(4, 5);
//	cout << "两点的距离为：" <<direct(point1,point2)<<endl;
//	cout << "存在的点数为：" << point2.count << endl;
//	return 0;
//}



//第二题

//Q1：
//在triangle类里的构造函数想使用distance函数来初始化line_a等变量，即使在类里对函数进行声明了，系统还是会报错
//triangle(const point& p1, const point& p2, const point& p3)
//{
//
//	line_a = distance(p1,p2);
//	line_b =  distance(p1,p3);
//	line_c =  distance(p3,p2);
//}

using namespace std;

int main()
{
	point p1(1, 1);
	point p2(4, 1);
	point p3(1, 5);
	point p(20 , 1);
	p.showcount();//输出建立的点数
	triangle t1(p1, p2, p3);
	t1.showcount();//输出建立的三角形数
	cout <<"三角形的面积是："<< t1.area() << endl;
	cout <<"三角形的周长是：" <<t1.girth() << endl;
	t1.judge(p1, p2, p3, p);//判断点与三角形的关系

	return 0;
}



//第三题

//
//using namespace std;
//int main()
//{
//	point p1(52.9, 0);//p1到p5为五边形的五个点
//	point p2(85.59, 100.62);
//	point p3(0, 162.81);
//	point p4(-85.59, 100.62);
//	point p5(-52.9, 0);
//	point p(0, 200);//p为判定点
//	pentagon pen1(p1, p2, p3, p4, p5);
//	cout<<"五边形的面积为："<<pen1.area()<<endl;
//	cout << "五边形的周长为：" << pen1.girth() << endl;
//	pen1.judge(p);
//	return 0;
//}


//第四题
//using namespace std;
//
//int main()
//{
//	point p1(3, 0);//初始化两个任意向量，求其夹角
//	point p2(0, 4);
//	vector v1(p1);
//	vector v2(p2);
//	v1.showvector();
//	v2.showvector();
//	cout << "两向量的夹角为：(弧度)" << angle(v1, v2) << endl;
//
//	point px(1, 0);//初始化单位向量std_x,std_y
//	point py(0, 1);
//	vector vx(p1);
//	vector vy(p2);
//	std_vector std(vx, vy);
//	point p(3, 4);//设定任意向量求其与x轴的夹角余弦值
//	vector v(p);
//	
//	cout << "向量v于x周夹角的余弦值为：" << cosf(angle(v, std.std_x)) << endl;
//		
//	return 0;
//}



//Q2:我想在std_vector的构造函数里创造point和vector类，但系统显示point、vector没有合适的默认构造函数
//代码如下：
//const class std_vector {
//public:
//	std_vector()
//	{
//		p_x = point(1, 0);
//		p_y = point(0, 1);
//		v_x = vector(p_x);
//		v_y = vector(p_y);
//	}
//	~std_vector()
//	{
//
//	}
//private:
//	point p_x;
//	point p_y;
//	vector v_x;
//	vector v_y;
//
//};



