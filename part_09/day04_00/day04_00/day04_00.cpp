
/*
	ʹ���ࣺ������Ƽ���
		��һ�½�������ζ����ࣻ
		���½���һ�����ܣ����ʹ���࣬���䷢�Ӹ�������ã�
		��Ҫ���ݣ�
			��������أ��������һЩ�򵥲�������
			��Ԫ�������ǳ�Ա�������Է�����˽�����ԣ�
			����Զ�ת����ǿ������ת��
			��ת������

		��������أ�
			һ����ʽ��c++��̬��
			�������������Ĳ����У�
			
			��ʽ��
				operatorop(argument-list)
				���磺
					operator ����������+
				op������ c++��Ч�������

			��;��
				�����ĳЩ��������ȥ����ô���أ�





*/

#include<iostream>
#include"mytime.h"
using namespace std;


void test01()
{

	Time coding(2, 40);
	Time fixing(5, 55);
	Time planning;
	Time total;

	cout << "coding time = ";
	coding.Show();
	cout << endl;

	cout << "fixing time = ";
	fixing.Show();
	cout << endl;

	cout << "planning time = ";
	planning.Show();
	cout << endl;

	total = coding.Sum(fixing);
	cout << "total time = ";
	total.Show();
	cout << endl;
	
}

void test02()
{
	Time coding(2, 40);
	Time fixing(5, 55);
	Time planning;
	Time total;

	cout << "=====================++======================" << endl;
	cout << "coding time = ";
	coding.Show();
	cout << endl;

	cout << "fixing time = ";
	fixing.Show();
	cout << endl;

	cout << "planning time = ";
	planning.Show();
	cout << endl;

	total = coding + fixing;
	cout << "total time = ";
	total.Show();
	cout << endl;

}

int main()
{
	// ��ͨ��
	test01();

	// ������������
	test02();


	return 0;
}
