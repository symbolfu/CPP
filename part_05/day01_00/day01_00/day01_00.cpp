
/*
	������ c++�ı��ģ��
		����ֵ���ͣ�
			c++ ����ֱ�ӷ������飬�����Է��ذ�������Ľṹ������



		

*/

#include<iostream>
using namespace std;

void test01();

int main()
{
	test01();

	return 0;
}

void simple();

void test01()
{
	cout << "test01 will call the simple function:: \n";
	simple();
	cout << "call simple function is ok!\n";

}

void simple()
{
	cout << "simple function excution!\n";
}
