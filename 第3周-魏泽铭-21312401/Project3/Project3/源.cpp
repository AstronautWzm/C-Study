#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<math.h>
#include<string>
#define PI acos(-1)

//��һ��
//using namespace std;
//class student {//����ѧ����
//public:
//	student(string in_id, int in_grade[5])//�вι���
//	{
//		id = in_id;
//		memcpy(grade, in_grade, sizeof(grade));//��������ĳɼ�����
//		cout << "ѧ��id��" << id<<endl;
//	}
//	void getmean()//���ƽ��ֵ����
//	{
//		int i, sum = 0;
//		for (i = 0; i < 5; i++)
//		{
//			sum += grade[i];
//		}
//		cout << "ѧ��ƽ��ֵ��" << sum / 5<<endl;
//
//	}
//	void getmin()//�����Сֵ����
//	{
//		int i;
//		int min = grade[0];
//		for (i = 1; i < 5; i++)
//		{
//			if (min > grade[i])
//				min = grade[i];
//		}
//		printf("��Сֵ=%d\n",min);
//	}
//	void getmax()//������ֵ����
//	{
//		int i;
//		int max = grade[0];
//		for (i = 1; i < 5; i++)
//		{
//			if (max< grade[i])
//				max = grade[i];
//		}
//		printf("���ֵ=%d\n", max);
//	}
//	~student()//��������
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



//�ڶ���
//using namespace std;
//
//class complex//����������
//{
//public:
//	complex(int in_i, int in_j) :i(in_i), j(in_j)//���캯������ʼֵ�б�
//	{
//	}
//	void getlength()//���ģ������
//	{
//		cout << "ģ��Ϊ��" << sqrt(i * i + j * j) << endl;
//
//	}
//	void get_i_j()//����鲿��ʵ������
//	{
//		cout << "ʵ��Ϊ��" << i << endl;
//		cout << "�鲿Ϊ��" << j << endl;
//	}
//	void change_i_j()//�ı��鲿��ʵ������
//	{
//		int x, y;
//		cout << "����Ҫ�޸ĵ�ʵ��i���鲿j��";
//		cin >> x >> y;
//		i = x;
//		j = y;
//		if (i != 0 && j != 0)//��Ҫ�����ʵ�����鲿���������жϣ��Է��������ʽ
//			if (j > 0)
//				cout << "��Ӻ�ĸ���Ϊ��" << i << '+' << j << 'j' << endl;
//			else
//				cout << "��Ӻ�ĸ���Ϊ��" << i << j << 'j' << endl;
//		else if (i == 0 && j != 0)
//			cout << "�޸ĺ�ĸ���Ϊ��" << j << 'j' << endl;
//		else if (j == 0 && i != 0)
//			cout << "�޸ĺ�ĸ���Ϊ��" << i << endl;
//		else
//			cout << 0;
//	}
//	void addition()//������Ӻ���
//	{
//		int x, y;
//		cout << "����Ҫ��ӵĸ���" << endl;
//		cout << "ʵ��Ϊ��" << endl;
//		scanf_s("%d", &x);
//		cout << "�鲿Ϊ��" << endl;
//		scanf_s("%d", &y);
//		i = x + i;
//		j = y + j;
//		if (i != 0 && j != 0)//��Ҫ�����ʵ�����鲿���������жϣ��Է��������ʽ
//			if (j > 0)
//				cout << "��Ӻ�ĸ���Ϊ��" << i << '+' << j << 'j' << endl;
//			else
//				cout << "��Ӻ�ĸ���Ϊ��" << i << j << 'j' << endl;
//		else if (i == 0 && j != 0)
//			cout << "��Ӻ�ĸ���Ϊ��" << j << 'j' << endl;
//		else if (j == 0 && i != 0)
//			cout << "��Ӻ�ĸ���Ϊ��" << i << endl;
//		else
//			cout << 0;
//	}
//	void plus()//������˺���
//	{
//		int x, y,newi,newj;
//		cout << "����Ҫ��˵ĸ���" << endl;
//		cout << "ʵ��Ϊ��" << endl;
//		scanf_s("%d", &x);
//		cout << "�鲿Ϊ��" << endl;
//		scanf_s("%d", &y);
//		newi = i * x - j * y;
//		newj = j * x + i * y;
//		i = newi;
//		j = newj;
//		if (i != 0 && j != 0)//��Ҫ�����ʵ�����鲿���������жϣ��Է��������ʽ
//			if(j>0)
//			    cout << "��Ӻ�ĸ���Ϊ��" << i << '+' << j << 'j' << endl;
//			else
//				cout << "��Ӻ�ĸ���Ϊ��" << i << j << 'j' << endl;
//		else if (i == 0 && j != 0)
//			cout << "��Ӻ�ĸ���Ϊ��" << j << 'j' << endl;
//		else if (j == 0 && i != 0)
//			cout << "��Ӻ�ĸ���Ϊ��" << i << endl;
//		else
//			cout << 0;
//
//	}
//	~complex()//��������
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


//������
using namespace std;
class point//����point��
{
public:
	point()//Ĭ�Ϲ��캯��
	{

	}
	point(int in_x,int in_y):x(in_x),y(in_y)//�вι��캯��
	{

	}
	~point()//��������
	{

	}
public://��x��y����Ϊpublic��Ϊcircle��Ķ�����Է���
	int x;
	int y;
};

class circle//����circle��
{
public:
	circle(point in_p, int in_r)//�вι���
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

void circle::area()//���������
{
	double area;
	area =PI * r*r;
	printf("Բ������ǣ�%5.4lf\n", area);
}

void circle::determine(circle c1,circle c2)//�ж���Բ��ϵ����
{
	float d;
	d = sqrt((c1.p.x - c2.p.x)*(c1.p.x - c2.p.x) + (c1.p.y - c2.p.y)*(c1.p.y - c2.p.y));
	if (d > (c1.r + c2.r))
	{
		cout << "��Բ����" << endl;
	}
	else if (d == fabs(c1.r - c2.r))
	{
		cout << "��Բ����" << endl;
	}
	else if (d == (c1.r + c2.r))
	{
		cout << "��Բ����" << endl;
	}
	else if (d < (c1.r + c2.r)&& d > fabs(c1.r - c2.r))
	{
		
		cout << "��Բ�ཻ" << endl;
	}
	else if(d<fabs(c1.r-c2.r))
	{
		cout << "��Բ�ں�" << endl;
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