

/*
	�����������ͣ���������
		���������OOP�ı�������Ʋ���չ�Լ����������ͣ�
		��Ƶ��������;��������ͺ�����ƥ�䣻

		c++���Լ������õ��������ͣ�
				�������ͣ� ���������������Լ�����ֱ��壻
				�������ͣ����顢�ַ�����ָ�롢�ṹ��


*/


#include<iostream>
#include<climits>
using namespace std;



void test01()
{
	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	cout << "int is " << sizeof(int) << "bytes" << endl;
	cout << "short is " << sizeof(short) << "bytes" << endl;
	cout << "n_long is " << sizeof(n_long) << "bytes" << endl;
	cout << "long long is " << sizeof(long long) << "bytes" << endl;
	cout << endl;

}


void test02()
{
	int chest = 42;
	int waist = 0x42;
	int inseam = 042;

	cout << "=======================" << endl;
	cout << "chest = " << chest << endl;
	cout << "waist = " << waist << endl;
	cout << "inseam = " << inseam << endl;
}

void test03()
{
	int chest = 42;
	int waist = 0x42;
	int inseam = 042;

	cout << "=======================" << endl;
	cout << "chest = " << chest << endl;
	cout << hex;
	cout << "waist = " << waist << endl;
	cout << oct;
	cout << "inseam = " << inseam << endl;
}

int main()
{
	test01();
	test02();
	test03();


	return 0;
}