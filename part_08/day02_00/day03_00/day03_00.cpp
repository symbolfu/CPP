
/*
	对象和类：
		类的构造函数和析构函数：
			自创建类型的初始化

		程序声明对象时，将自动调用构造函数；

		note:
			构造函数可用重载；
			构造函数执行时机；
			析构函数只有一个；
			析构函数的执行时机；


		const 成员函数：
			背景：
				const Stock land;
				land.show()
				编译器会拒绝第二行，因为编译器无法确定show方式是否会修改对象的数据成员；

			解决方法：
				通过某种方式，让编译知道该方法不会修改对象的数据成员；
				void show() const；
				void Stock::show() const
				通过在函数名后添加const限定符；

			推荐：******************
				只要类方法不修改调用对象，就应该将其声明为const，让其成为const 成员函数；


*/
#include"Stock.h"
#include<iostream>
using namespace std;



void test01()
{
	cout << "using constructors to create new objects\n";
	Stock stock1("aaa", 11, 2.2);        // 初始化
	stock1.show();

	Stock stock2 = Stock("bbb", 1, 1.1);   // 初始化

	stock2 = stock1;

	stock2 = Stock("ccc", 2, 2.2);  // temp object
}


int main()
{

	test01();


	return 0;
}
