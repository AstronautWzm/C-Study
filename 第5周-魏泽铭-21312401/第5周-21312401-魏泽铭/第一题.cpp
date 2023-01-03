#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>

//using namespace std;
//class matrix//矩阵类
//{
//public:
//	matrix(int arr1[], int m, int n);//有参构造函数
//
//	void printmatrix();
//
//	~matrix()//析构函数
//	{
//
//	}
//private:
//	 int m;
//	 int n;
//	int arr2[50][50];
//};
//
//
//
//matrix::matrix(int arr1[], int m, int n) :m(m), n(n)//初始化列表初始化行、列数
//{
//	
//	int k = 0;
//	for (int i = 0; i < m; i++)//通过循环将一维数组里的元素传入二维数组
//	{
//		for (int j = 0; j < n; j++)
//		{
//			arr2[i][j] = arr1[k];
//			k++;
//		}
//	}
//
//}
//
//void matrix::printmatrix()
//{
//	int a, b,begina,beginb,enda,endb;
//	int i = 0;
//	cout << "矩阵输出：" << endl;
//	for (int i = 0; i < m; i++)//通过循环将二维数组以矩阵形式输出
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cout<<arr2[i][j]<<"  ";
//			
//		}
//		cout << endl;
//	}
//	begina = 0;
//	beginb = 0;
//	enda = m-1;
//	endb = n-1;
//	cout << "按顺时针输出：" << endl;
//	while(i < m*n)//每次输出进行 是否输出的次数达到数组元素个数 的判断
//	{
//		
//		for (a=begina,b = beginb; b <= endb; b++)//顺时针的上行输出
//		{
//			if (i < m*n)
//			{
//				cout << arr2[a][b] << " ";
//				i++;
//			}
//			else
//				break;
//		}
//		begina++;
//		for (a = begina, b = endb; a <= enda; a++)//顺时针的右列输出
//		{
//			if (i < m*n)
//			{
//				cout << arr2[a][b] << " ";
//				i++;
//			}
//			else
//				break;
//		}
//		endb--;
//		for (a = enda, b = endb; b >= beginb; b--)//顺时针的下行输出
//		{
//			if (i < m*n)
//			{
//				cout << arr2[a][b] << " ";
//				i++;
//			}
//			else
//				break;
//		}
//		enda--;
//		for (b = beginb, a = enda; a >= begina; a--)//顺时针的左列输出
//		{
//			if (i < m*n)
//			{
//				cout << arr2[a][b] << " ";
//				i++;
//			}
//			else
//				break;
//		}
//		beginb++;
//
//		
//	}
//
//
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10,11,12 };//给定一维数组和行列数
//	int m = 3;
//	int n = 4;
//	matrix ma(arr1, m, n);
//	ma.printmatrix();
//	
//	return 0;
//}
//
//
