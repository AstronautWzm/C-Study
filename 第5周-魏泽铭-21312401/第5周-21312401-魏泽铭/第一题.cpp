#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>

//using namespace std;
//class matrix//������
//{
//public:
//	matrix(int arr1[], int m, int n);//�вι��캯��
//
//	void printmatrix();
//
//	~matrix()//��������
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
//matrix::matrix(int arr1[], int m, int n) :m(m), n(n)//��ʼ���б��ʼ���С�����
//{
//	
//	int k = 0;
//	for (int i = 0; i < m; i++)//ͨ��ѭ����һά�������Ԫ�ش����ά����
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
//	cout << "���������" << endl;
//	for (int i = 0; i < m; i++)//ͨ��ѭ������ά�����Ծ�����ʽ���
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
//	cout << "��˳ʱ�������" << endl;
//	while(i < m*n)//ÿ��������� �Ƿ�����Ĵ����ﵽ����Ԫ�ظ��� ���ж�
//	{
//		
//		for (a=begina,b = beginb; b <= endb; b++)//˳ʱ����������
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
//		for (a = begina, b = endb; a <= enda; a++)//˳ʱ����������
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
//		for (a = enda, b = endb; b >= beginb; b--)//˳ʱ����������
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
//		for (b = beginb, a = enda; a >= begina; a--)//˳ʱ����������
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
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10,11,12 };//����һά�����������
//	int m = 3;
//	int n = 4;
//	matrix ma(arr1, m, n);
//	ma.printmatrix();
//	
//	return 0;
//}
//
//
