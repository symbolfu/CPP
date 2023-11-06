
/*
	===========================================================
	����̽�ģ��ص��½�
		��������
		���ñ���
		���ô��ݺ�������
		Ĭ�ϲ���
		��������
		����ģ��
		����ģ����廯

		5������ģ��
			ͨ�õĺ�����������ʹ�÷��������庯�������еķ��Ϳ����þ���������滻��

			ʵ�֣�c++98ǰ�� template <class T>
				�������Ͷ���ǰ����Ҫ��ӣ� template <typename T>
				���ݺ�������ʱ�������ֵȷ�����ͣ�

			ģ��ľ����ԣ�
				ģ�����㷨�����Ƿ�֧�ִ�����������ͣ�

			Ϊ�ض������ṩ���廯��ģ��
				������	
					��д��ģ�庯���ܿ����޷�����ĳ�����ͣ���Ҫ����ͨ�û���ͨ�û��ķ�ʽ��
						1�����������
						2��Ϊ�ض������ṩ���廯��ģ��

				���ȼ���������ѡ��ԭ�ͣ�*************************
					��ģ�庯�� �� ���廯��ģ�� �� ����ģ��

					������ʽ��
						��ģ�庯����
							void swap(int a, int b);
						���廯��ģ�壺
							template <> void swap<int>(int a, int b);
							template <> void swap(int a, int b);
						����ģ�壺
							template <typename T>
							void swap(T a, T b);

					ʵ����/���廯��
						ʵ������ʵ��������ڱ���׶Σ�
							1����ʽʵ����
								������ͨ����������ʱ����Ĳ������ͽ�����ʽ�Ĳ���ģ��ʵ����

							2����ʾʵ����
								template void swap<int>(int , int);

						���廯��
							template <> void swap<int>(int a, int b);
							template <> void swap(int a, int b);

						< >�����������������Ͷ����У�������ʹ���ڵ���ʱ����ʾ����ģ�������ʾ����ģ�岢ָ�����ͣ�
*/

#include<iostream>
using namespace std;

template <typename T>
void Swap(T& a, T& b);

template <typename T>
void Swap(T* A, T* b, int n);

void test01()
{
	int i = 100;
	int j = 200;
	cout << "i = " << i << endl;
	cout << "j = " << j << endl;
	
	Swap(i, j);
	cout << "i = " << i << endl;
	cout << "j = " << j << endl;

}

template <typename T>
void Swap(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template <typename T>
void Swap(T* a, T* b, int n)
{
	T temp;
	for (int i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}

void show(const int a[], int n)
{
	cout << "==================================" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}
}

void test02()
{
	// ����ģ��
	int i = 10;
	int j = 20;

	cout << "i = " << i << endl;
	cout << "j = " << j << endl;

	Swap(i, j);
	cout << "i = " << i << endl;
	cout << "j = " << j << endl;

	int d1[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int d2[8] = { 11, 12,13,14,15,16,17,18 };

	show(d1, 8);
	show(d2, 8);
	Swap(d1, d2, 8);
	show(d1, 8);
	show(d2, 8);
}




int main()
{
	// test01();

	test02();

	return 0;
}
