#pragma once



class point {
	friend double distance(const point &p1, const point &p2);//distance()友元函数声明
	
	
	friend class triangle;//triangle友元类声明
	friend class pentagon;//第三题的pengaton类的友元声明
	friend class vector;
	
	
public:
	point(double get_x, double get_y) : x(get_x), y(get_y)//构造函数，初始化列表
	{
		count++;//记录点数
	}
	point()
	{

	}
	void showcount();//输出建立的点数

	~point()//析构函数
	{
	}
private:
	double x;
	double y;
	static int count;//静态成员属性

};




class triangle
{
	friend class triangle;//triangle友元类声明

	//friend double distance(const point &p1, const point &p2);

public://构造函数，创建三角形的每条边变量
	triangle(const point& p1, const point& p2, const point& p3)
	{

		//line_a = sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2));
		line_b = sqrt(pow((p1.x - p3.x), 2) + pow((p1.y - p3.y), 2));
		line_c = sqrt(pow((p3.x - p2.x), 2) + pow((p3.y - p2.y), 2));
		line_a = distance(p1, p2);
		count++;//记录三角形数
	}
	
	static void showcount();//静态成员函数，输出建立的三角形数
	

	double girth();//求周长

	double area();//求面积

	void judge(point &, point &, point &, point);//判断点和三角形关系

	~triangle()//析构函数
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
	//复制构造函数，建立五边形的五个点和边
	pentagon(const point &p1, const point &p2, const point &p3, const point &p4, const point &p5) :pp1(p1), pp2(p2), pp3(p3), pp4(p4), pp5(p5)
	{
		line_a = sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2));
		line_b = sqrt(pow((p2.x - p3.x), 2) + pow((p2.y - p3.y), 2));
		line_c = sqrt(pow((p3.x - p4.x), 2) + pow((p3.y - p4.y), 2));
		line_d = sqrt(pow((p4.x - p5.x), 2) + pow((p4.y - p5.y), 2));
		line_e = sqrt(pow((p5.x - p1.x), 2) + pow((p5.y - p1.y), 2));

	}

	double girth();//求周长函数

	double area();//求面积函数

	void judge(point);//判定点和五边形关系函数


	~pentagon()//析构函数
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



//向量类
class vector {
	friend double angle(vector, vector);//全局函数友元声明
public:
	vector(const point &p)//复制构造函数，利用点坐标建立向量
	{
		v_x = p.x;
		v_y = p.y;
	}
	void showvector()const;//输出向量函数


	~vector()//析构函数
	{

	}
private:
	int v_x;
	int v_y;

};

//单位向量类
const class std_vector {

	friend double angle(vector, vector);//全局函数友元声明
public:
	std_vector(vector x, vector y) :std_x(x), std_y(y)//初始化列表
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