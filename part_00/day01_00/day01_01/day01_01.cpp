#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
using namespace std;


/*
	类是用户自定义的一种数据类型；
		需要描述它能表示什么信息和可对数据执行那些操作；

	类与对象的关系就想类型与变量的关系；

	函数原型与函数定义：
		函数原型：描述了调用函数需要传递的参数和函数返回情况；
		函数定义：描述函数的具体实现；

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