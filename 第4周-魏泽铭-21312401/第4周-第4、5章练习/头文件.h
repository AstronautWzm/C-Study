#pragma once



class point {
	friend double distance(const point &p1, const point &p2);//distance()��Ԫ��������
	
	
	friend class triangle;//triangle��Ԫ������
	friend class pentagon;//�������pengaton�����Ԫ����
	friend class vector;
	
	
public:
	point(double get_x, double get_y) : x(get_x), y(get_y)//���캯������ʼ���б�
	{
		count++;//��¼����
	}
	point()
	{

	}
	void showcount();//��������ĵ���

	~point()//��������
	{
	}
private:
	double x;
	double y;
	static int count;//��̬��Ա����

};




class triangle
{
	friend class triangle;//triangle��Ԫ������

	//friend double distance(const point &p1, const point &p2);

public://���캯�������������ε�ÿ���߱���
	triangle(const point& p1, const point& p2, const point& p3)
	{

		//line_a = sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2));
		line_b = sqrt(pow((p1.x - p3.x), 2) + pow((p1.y - p3.y), 2));
		line_c = sqrt(pow((p3.x - p2.x), 2) + pow((p3.y - p2.y), 2));
		line_a = distance(p1, p2);
		count++;//��¼��������
	}
	
	static void showcount();//��̬��Ա�����������������������
	

	double girth();//���ܳ�

	double area();//�����

	void judge(point &, point &, point &, point);//�жϵ�������ι�ϵ

	~triangle()//��������
	{

	}



private:
	double line_a;
	double line_b;
	double line_c;
	static int count;
};



class pentagon {

public:
	//���ƹ��캯������������ε������ͱ�
	pentagon(const point &p1, const point &p2, const point &p3, const point &p4, const point &p5) :pp1(p1), pp2(p2), pp3(p3), pp4(p4), pp5(p5)
	{
		line_a = sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2));
		line_b = sqrt(pow((p2.x - p3.x), 2) + pow((p2.y - p3.y), 2));
		line_c = sqrt(pow((p3.x - p4.x), 2) + pow((p3.y - p4.y), 2));
		line_d = sqrt(pow((p4.x - p5.x), 2) + pow((p4.y - p5.y), 2));
		line_e = sqrt(pow((p5.x - p1.x), 2) + pow((p5.y - p1.y), 2));

	}

	double girth();//���ܳ�����

	double area();//���������

	void judge(point);//�ж��������ι�ϵ����


	~pentagon()//��������
	{
	}
private:
	double line_a;
	double line_b;
	double line_c;
	double line_d;
	double line_e;

	point pp1;
	point pp2;
	point pp3;
	point pp4;
	point pp5;

};



//������
class vector {
	friend double angle(vector, vector);//ȫ�ֺ�����Ԫ����
public:
	vector(const point &p)//���ƹ��캯�������õ����꽨������
	{
		v_x = p.x;
		v_y = p.y;
	}
	void showvector()const;//�����������


	~vector()//��������
	{

	}
private:
	int v_x;
	int v_y;

};

//��λ������
const class std_vector {

	friend double angle(vector, vector);//ȫ�ֺ�����Ԫ����
public:
	std_vector(vector x, vector y) :std_x(x), std_y(y)//��ʼ���б�
	{
		point p(3, 4);
	}
	~std_vector()
	{

	}
public:
	point p;
	vector std_x;
	vector std_y;

};