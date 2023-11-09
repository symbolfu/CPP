
/*
	对象数组：
		当程序创建未被显示初始化的类对象时，总是调用默认构造函数；
			方式1：
				Stock mybuff[4];
					定义：
					同时默认调用默认构造函数
			方式2：
				Stock mybuff[4] = {Stock(xxx, xx)}   ： 看上来目前这种解释不正确， 仅仅调用一次构造函数   这种方式取决与编译器
					1、默认构造函数创建数组元素
					2、花括号中的构造函数将创建临时对象；
					3、将临时对象的内容复制给相应元素，销毁临时对象；

*/

#include<iostream>
#include<cctype>
#include"Stock.h"
#include"Stack.h"
using namespace std;

void test01()
{
	Stock Stocks1[4];
	Stock Stocks[4] = {
		Stock("aaa", 11, 1.1),
		Stock("bbb", 12, 1.2),
		//Stock("ccc", 13, 1.3),
		//Stock("ddd", 14, 1.4),
	};

	cout << "stock holdings: \n";
	int st;
	for (st = 0; st < 4; st++)
	{
		Stocks[st].show();
	}
}

void test02()
{
	Stack st;
	char ch;
	unsigned long po;
	cout << "pls enter a to add a purchase order;\n";

	while (cin >> ch && toupper(ch) != 'Q')
	{
		while (cin.get() != '\n')
			continue;
		
		if (!isalpha(ch))
		{
			cout << "\a";
			continue;
		}

		switch (ch)
		{
		case 'A':
		case 'a':"aaaaaaaaaa";
		}
	}
}

int main()
{
	test01();
	test02();

	return 0;
}