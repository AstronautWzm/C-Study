#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<math.h>
#include"ͷ�ļ�.h"


//��һ��
//using namespace std;
//
//
//class point {
//	friend double direct(point &point1, point &point2);//��Ԫ��������
//public:
//	static int count;//��̬��Ա����
//	point(double in_i,double in_j):i(in_i),j(in_j)//���캯��
//	{
//		count++;//ͳ�Ƶ���
//	};
//	~point()//��������
//	{
//	};
//	
//private: 
//	double i;
//	double j;
//
//
//};
//int point::count = 0;//��̬��Ա��ʼ��
//
//double direct(point &point1,point &point2)//������Ԫ�����������
//{
//	double result = sqrt(pow((point1.i - point2.i), 2) + pow((point1.j - point2.j), 2));
//	return result;
//}
//
//int main()
//{
//	point point1(1, 1);
//	point point2(4, 5);
//	cout << "����ľ���Ϊ��" <<direct(point1,point2)<<endl;
//	cout << "���ڵĵ���Ϊ��" << point2.count << endl;
//	return 0;
//}



//�ڶ���

//Q1��
//��triangle����Ĺ��캯����ʹ��distance��������ʼ��line_a�ȱ�������ʹ������Ժ������������ˣ�ϵͳ���ǻᱨ��
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
	p.showcount();//��������ĵ���
	triangle t1(p1, p2, p3);
	t1.showcount();//�����������������
	cout <<"�����ε�����ǣ�"<< t1.area() << endl;
	cout <<"�����ε��ܳ��ǣ�" <<t1.girth() << endl;
	t1.judge(p1, p2, p3, p);//�жϵ��������εĹ�ϵ

	return 0;
}



//������

//
//using namespace std;
//int main()
//{
//	point p1(52.9, 0);//p1��p5Ϊ����ε������
//	point p2(85.59, 100.62);
//	point p3(0, 162.81);
//	point p4(-85.59, 100.62);
//	point p5(-52.9, 0);
//	point p(0, 200);//pΪ�ж���
//	pentagon pen1(p1, p2, p3, p4, p5);
//	cout<<"����ε����Ϊ��"<<pen1.area()<<endl;
//	cout << "����ε��ܳ�Ϊ��" << pen1.girth() << endl;
//	pen1.judge(p);
//	return 0;
//}


//������
//using namespace std;
//
//int main()
//{
//	point p1(3, 0);//��ʼ��������������������н�
//	point p2(0, 4);
//	vector v1(p1);
//	vector v2(p2);
//	v1.showvector();
//	v2.showvector();
//	cout << "�������ļн�Ϊ��(����)" << angle(v1, v2) << endl;
//
//	point px(1, 0);//��ʼ����λ����std_x,std_y
//	point py(0, 1);
//	vector vx(p1);
//	vector vy(p2);
//	std_vector std(vx, vy);
//	point p(3, 4);//�趨��������������x��ļн�����ֵ
//	vector v(p);
//	
//	cout << "����v��x�ܼнǵ�����ֵΪ��" << cosf(angle(v, std.std_x)) << endl;
//		
//	return 0;
//}



//Q2:������std_vector�Ĺ��캯���ﴴ��point��vector�࣬��ϵͳ��ʾpoint��vectorû�к��ʵ�Ĭ�Ϲ��캯��
//�������£�
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



