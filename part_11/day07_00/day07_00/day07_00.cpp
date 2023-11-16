
/*
	类的继承：
		内容：
			is-a关系的继承
			如何以公有方式从一个类派生出另一个类；
			保护访问；
			构造函数成员初始化列表；
			向上和向下强制转换；
			虚成员函数；
			早期（静态）联编和晚期（动态）联编；
			抽象基类；
			纯虚函数；
			何时及如何使用公有继承；



*/

#include<iostream>
#include"table.h"


void test01()
{
	using std::cout;
	using std::endl;
	TableTennisisPlayer player1("aaa", "c", true);
	TableTennisisPlayer player2("bbb", "d", false);

	player1.Name();
	if (player1.HasTable())
		cout << ": has a table" << endl;
	else
		cout << ": has not a table" << endl;

	player2.Name();
	if (player2.HasTable())
		cout << ": has a table" << endl;
	else
		cout << ": has not a table" << endl;

}

void test02()
{
	using std::cout;
	using std::endl;
	TableTennisisPlayer player1("aaa", "c", true);
	RatedPlayer         player2(2000, "bbb", "d", false);

	player1.Name();
	if (player1.HasTable())
		cout << ": has a table" << endl;
	else
		cout << ": has not a table" << endl;

	player2.Name();
	if (player2.HasTable())
		cout << ": has a table" << endl;
	else
		cout << ": has not a table" << endl;

	RatedPlayer player3(3000, player1);
	player3.Name();
	if (player3.HasTable())
		cout << ": has a table" << endl;
	else
		cout << ": has not a table" << endl;
}


int main()
{
	// test01();
	test02();

	return 0;
}

