
/*
	使用类：即类设计技术
		上一章介绍了如何定义类；
		这章将进一步介绍：如何使用类，让其发挥更大的作用；
		主要内容：
			运算符重载：让其具有一些简单操作符；
			友元函数：非成员函数可以访问类私有属性；
			类的自动转换和强制类型转换
			类转换函数

		运算符重载：
			一种形式的c++多态；
			让运算符用于类的操作中；
			
			形式：
				operatorop(argument-list)
				例如：
					operator —（）重载+
				op必须是 c++有效的运算符

			用途：
				让类的某些操作看上去不那么笨重；





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
	// 普通类
	test01();

	// 添加运算符重载
	test02();


	return 0;
}
