#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<math.h>
#include"头文件.h"



//第二题point类的相关函数

using namespace std;

int point::count = 0;//静态成员属性类外初始化


void point::showcount()
{
	cout << "一共建立的点数为：" << count << endl;

}

double distance(const point &p1, const point &p2)//求两点距离
{
	double dis;
	dis = sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2));
	return dis;
}



//第三题triangle类的相关函数


int triangle::count = 0;//静态成员属性类外初始化

 void triangle::showcount ()
{
	cout << "一共建立的三角形数为：" << count << endl;
}

void triangle::judge(point &p1, point &p2, point &p3, point p)//判断点和三角形关系（面积法）
{
	triangle t_1(p1, p2, p);
	triangle t_2(p1, p3, p);
	triangle t_3(p3, p2, p);
	triangle t_4(p1, p2, p3);
	float area1 = (t_1.area() + t_2.area() + t_3.area());
	float area2 = t_4.area();
	if (area1 == area2)
	{
		cout << "该点在此三角形内" << endl;
	}
	else
	{
		cout << "该点不在此三角形内" << endl;
	}
}


double triangle::girth()//求周长
{
	double girth = line_a + line_b + line_c;
	return girth;
}

double triangle::area()//求面积
{
	double p;
	double area;
	p = (line_a + line_b + line_c) / 2;
	area = sqrt(p*(p - line_a)*(p - line_b)*(p - line_c));
	return area;

}



//第三题pentagon类相关函数

double pentagon::girth()//求周长
{
	double girth;
	girth = line_a + line_b + line_c + line_d + line_e;
	return girth;

}

double pentagon::area()//求面积，将五边形分割成3个三角形然后求面积和（只适用于凸五边形）
{
	double area;
	triangle t1(pp1, pp2, pp3);
	triangle t2(pp3, pp4, pp5);
	triangle t3(pp3, pp5, pp1);
	area = t1.area() + t2.area() + t3.area();
	return area;


}


void pentagon::judge(point p)//判断点和五边形关系，利用面积法，看该点和五边形的顶点连成的三角形面积和是否等于五边形面积
{
	triangle t1(p, pp1, pp2);
	triangle t2(p, pp2, pp3);
	triangle t3(p, pp3, pp4);
	triangle t4(p, pp4, pp5);
	triangle t5(p, pp5, pp1);
	pentagon pen1(pp1, pp2, pp3, pp4, pp5);
	float area1 = t1.area() + t2.area() + t3.area() + t4.area() + t5.area();
	float area2 = pen1.area();
	if (area1 == area2)
		cout << "点在五边形内" << endl;
	else
		cout << "点不在五边形内" << endl;

}



//第四题，类vector,std_vector的相关函数

double angle(vector v1, vector v2)//求两个向量的夹角
{
	double angle;
	double dis_1 = sqrt(pow(v1.v_x, 2) + pow(v1.v_y, 2));
	double dis_2 = sqrt(pow(v2.v_x, 2) + pow(v2.v_y, 2));

	angle = acos((v1.v_x *v2.v_x + v1.v_y *v2.v_y) / (dis_1 *dis_2));
	return angle;

}

void vector::showvector()const//输出向量
{
	printf("向量的坐标表示为：(%d,%d)\n", v_x, v_y);

}




