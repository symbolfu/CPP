
/*
	===========================================================
	函数探幽：重点章节
		内联函数
		引用变量
		引用传递函数参数
		默认参数
		函数重载
		函数模板
		函数模板具体化

		3、 默认参数
			定义:
				当函数调用时，可以省略某些实参，自动使用某个值；

			实现：
				只在声明说明形参默认值，否则报错；
				从右向左添加默认值；

*/

#include<iostream>
using namespace std;

void demo(int a, int b = 1);

void test01()
{
	demo(1);
}

void demo(int a, int b)
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

int main()
{

	test01();

	return 0;
}