
/*
	函数： c++的编程模块
		返回值类型：
			c++ 不能直接返回数组，但可以返回包含数组的结构体或对象；



		

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
