#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
using namespace std;


/*
	�����û��Զ����һ���������ͣ�
		��Ҫ�������ܱ�ʾʲô��Ϣ�Ϳɶ�����ִ����Щ������

	�������Ĺ�ϵ��������������Ĺ�ϵ��

	����ԭ���뺯�����壺
		����ԭ�ͣ������˵��ú�����Ҫ���ݵĲ����ͺ������������
		�������壺���������ľ���ʵ�֣�

*/

void test01()
{
	cout << "new world, come on!" << endl;

	printf("aaaaaaa");
}

void test02()
{
	int carrots;

	cout << "input :" << endl;
	cin >> carrots;

	cout << carrots << endl;
}


int main()
{
	//test01();

	test02();

	return 0;
}