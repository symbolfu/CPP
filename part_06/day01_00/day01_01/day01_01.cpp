
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

		2、 引用变量
			定义：
				已定义的变量的别名；

			用途：
				用作函数的形参，通过将引用变量用作参数，函数将使用原始数据，而不是副本；效果类似于指针；
				引用为函数处理大型结构提供了一种方便；
				常用作函数参数：结构体类型引用， 对象引用；
				不会对数组进行引用处理；

			意义：
				减少内存的消耗；


			实现：
				创建引用变量：必须在声明引用时将其初始化；无法进行再次赋值；
					int rats;
					int & rodents = rats

			按引用传递；
				相比于指针而言，在变量使用方便更加方便，减少了取值符号；

				对于只读参数：
					const double & a;

			临时变量：
				如果实参和意义参数不匹配时，c++将生成临时变量；
				此时只有对形参加const才有意义；

			引用作为函数返回值类型时
				1、可以直接用普通类型接收：
					因为函数返回时，会直接将返回值赋值到接收变量；
					普通 = 引用；
				2、return 的值可以是普通类型
					相当于： 引用 = 普通类型；

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