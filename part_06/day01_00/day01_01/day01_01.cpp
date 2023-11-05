
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

		2�� ���ñ���
			���壺
				�Ѷ���ı����ı�����

			��;��
				�����������βΣ�ͨ�������ñ�������������������ʹ��ԭʼ���ݣ������Ǹ�����Ч��������ָ�룻
				����Ϊ����������ͽṹ�ṩ��һ�ַ��㣻
				�����������������ṹ���������ã� �������ã�
				���������������ô���

			���壺
				�����ڴ�����ģ�


			ʵ�֣�
				�������ñ�������������������ʱ�����ʼ�����޷������ٴθ�ֵ��
					int rats;
					int & rodents = rats

			�����ô��ݣ�
				�����ָ����ԣ��ڱ���ʹ�÷�����ӷ��㣬������ȡֵ���ţ�

				����ֻ��������
					const double & a;

			��ʱ������
				���ʵ�κ����������ƥ��ʱ��c++��������ʱ������
				��ʱֻ�ж��βμ�const�������壻

			������Ϊ��������ֵ����ʱ
				1������ֱ������ͨ���ͽ��գ�
					��Ϊ��������ʱ����ֱ�ӽ�����ֵ��ֵ�����ձ�����
					��ͨ = ���ã�
				2��return ��ֵ��������ͨ����
					�൱�ڣ� ���� = ��ͨ���ͣ�

*/

#include<iostream>
using namespace std;

void test01()
{
	int rats = 100;
	int& rodents = rats;

	cout << "rats = " << rats << endl;
	cout << "rodents = " << rodents << endl;
	rats++;
	cout << "rats = " << rats << endl;
	cout << "rodents = " << rodents << endl;
	rodents++;
	cout << "rats = " << rats << endl;
	cout << "rodents = " << rodents << endl;

}

void swap(int& a, int& b);

void test02()
{
	int a = 100;
	int b = 200;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	swap(a, b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

}

void swap(int& a, int& b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}

int* demo()
{
	int a = 200;

	return &a;
}


void test03()
{
	int a = 100;
	int* p = &a;

	cout << "*p = " << *p << endl;
	
	p = demo();
	// error
	cout << "*p = " << *p << endl;

}

const int& demo1()
{
	int a = 200;

	return a;
}

void test04()
{
	int a = 100;
	//int& p = a;

	cout << "a = " << a << endl;

	a = demo1();
	// error
	for (int i = 0; i < 50; i++)
	{
		cout << endl;
	}
	cout << "p = " << a << endl;

	a++;
	cout << "p = " << a << endl;

}


int main()
{
	// test01();
	
	// test02();

	// test03();

	test04();



	return 0;
}