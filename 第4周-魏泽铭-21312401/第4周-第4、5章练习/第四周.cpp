#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<math.h>
#include"ͷ�ļ�.h"



//�ڶ���point�����غ���

using namespace std;

int point::count = 0;//��̬��Ա���������ʼ��


void point::showcount()
{
	cout << "һ�������ĵ���Ϊ��" << count << endl;

}

double distance(const point &p1, const point &p2)//���������
{
	double dis;
	dis = sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2));
	return dis;
}



//������triangle�����غ���


int triangle::count = 0;//��̬��Ա���������ʼ��

 void triangle::showcount ()
{
	cout << "һ����������������Ϊ��" << count << endl;
}

void triangle::judge(point &p1, point &p2, point &p3, point p)//�жϵ�������ι�ϵ���������
{
	triangle t_1(p1, p2, p);
	triangle t_2(p1, p3, p);
	triangle t_3(p3, p2, p);
	triangle t_4(p1, p2, p3);
	float area1 = (t_1.area() + t_2.area() + t_3.area());
	float area2 = t_4.area();
	if (area1 == area2)
	{
		cout << "�õ��ڴ���������" << endl;
	}
	else
	{
		cout << "�õ㲻�ڴ���������" << endl;
	}
}


double triangle::girth()//���ܳ�
{
	double girth = line_a + line_b + line_c;
	return girth;
}

double triangle::area()//�����
{
	double p;
	double area;
	p = (line_a + line_b + line_c) / 2;
	area = sqrt(p*(p - line_a)*(p - line_b)*(p - line_c));
	return area;

}



//������pentagon����غ���

double pentagon::girth()//���ܳ�
{
	double girth;
	girth = line_a + line_b + line_c + line_d + line_e;
	return girth;

}

double pentagon::area()//�������������ηָ��3��������Ȼ��������ͣ�ֻ������͹����Σ�
{
	double area;
	triangle t1(pp1, pp2, pp3);
	triangle t2(pp3, pp4, pp5);
	triangle t3(pp3, pp5, pp1);
	area = t1.area() + t2.area() + t3.area();
	return area;


}


void pentagon::judge(point p)//�жϵ������ι�ϵ����������������õ������εĶ������ɵ�������������Ƿ������������
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
		cout << "�����������" << endl;
	else
		cout << "�㲻���������" << endl;

}



//�����⣬��vector,std_vector����غ���

double angle(vector v1, vector v2)//�����������ļн�
{
	double angle;
	double dis_1 = sqrt(pow(v1.v_x, 2) + pow(v1.v_y, 2));
	double dis_2 = sqrt(pow(v2.v_x, 2) + pow(v2.v_y, 2));

	angle = acos((v1.v_x *v2.v_x + v1.v_y *v2.v_y) / (dis_1 *dis_2));
	return angle;

}

void vector::showvector()const//�������
{
	printf("�����������ʾΪ��(%d,%d)\n", v_x, v_y);

}




