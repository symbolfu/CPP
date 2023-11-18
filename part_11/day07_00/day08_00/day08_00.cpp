
/*

		继承：
			派生类和基类的特殊关系：
				1、派生类可以使用基类的方法，条件是方法不是私有的；
				2、基类指针可以在不进行显示转换的情况下指向派生类对象；
				3、基类引用可以在不进行显示转换的情况下引用派生类对象；
				4、但是2、3的基类指针或引用只能调用基类的方法，不能调用派生类新增的方法；
				5、不能将基类对象和地址赋给派生类引用和指针；

			c++ 语言中强制要求指针类型必须匹配才能赋值传递，但是继承例外；

			c++有三种继承方式：is-a关系：is-a-kind-of
				公有继承：
							最常见；
				保护继承
				私有继承

			is-a关系、is-like-a、is-implemented-as-a、use-a、has-a关系？
				c++公有继承可以建立上面任何一种关系，但是还是推荐使用is-a关系；

			多态公有继承：
				定义：
					同一个方法在派生类和基类中的行为是不同的；
					即方法的行为取决于调用该方法的对象；

				实现方式：
					方法1：从派生类中重新定义基类的方法（重写）；
					方法2：使用虚方法；virtual
						1、如果直接通过对象调用方法，则调用规律还是一样；
						2、如果使用引用或者对象指针调用方法：****************
							情况1：方法未使用virtual关键字，程序将根据引用类型和指针类型调用方法；
							情况2：方法使用virtual关键字，程序将根据引用或者指针指向的对象的类型选择方法；

							<<情况2，突显出多态特性>>



*/

#include"brass.h"
#include<iostream>
#include<string>


void test01()
{
	// 测试virtual多态特性
	using std::cout;
	using std::endl;

	Brass p("aaa", 1111, 8888);
	BrassPlus pp("bbb", 2222, 9999);
	p.ViewAcct();
	cout << endl;

	pp.ViewAcct();

}


void test02()
{
	const int CLIENTS = 4;
	using namespace std;

	Brass* p_clients[CLIENTS];
	string temp;
	long tempnum;
	double tempbal;
	char kind;

	for (int i = 0; i < CLIENTS; i++)
	{
		cout << "enter client's name: ";
		getline(cin, temp);
		cout << "enter client's accunt number: ";
		cin >> tempnum;
		cout << "enter opening balance: $";
		cin >> tempbal;

		cout << "enter 1 for brass accout or "
			<< "2 for brassplus accout: ";
		while (cin >> kind && (kind != '1' && kind != '2'))
		{
			cout << "enter either 1 or 2: ";
		}

		if (kind == '1')
			p_clients[i] = new Brass(temp, tempnum, tempbal);
		else
		{
			double tmax, trate;
			cout << "enter the overdraft limit: $";
			cin >> tmax;
			cout << "enter the interest rate "
				<< "as a decimal fraction: ";
			cin >> trate;
			p_clients[i] = new BrassPlus(temp, tempnum, tempbal, tmax, trate);
		}
		while (cin.get() != '\n')
			continue;
	}

	cout << endl;

	for (int i = 0; i < CLIENTS; i++)
	{
		p_clients[i]->ViewAcct();
		cout << endl;
	}

	for (int  i = 0; i < CLIENTS; i++)
	{
		delete p_clients[i];
	}

	cout << "done.\n";
}

int main()
{
	//test01();
	test02();


	return 0;
}