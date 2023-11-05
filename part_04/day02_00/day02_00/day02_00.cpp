
/*
	分支语句和逻辑运算符
		if
		条件运算符：  condtion1 ？ value1 ： value2
		switch
			case标签必须是常量，且无法处理浮点数；
			使用范围：
				1、选项涉及取值范围，浮点测试或者两个变量比较，则应该用if else语句；
				2、当满足条件1时，if条件超多2个，switch会更加高效；
		continue
		break


*/

#include<iostream>
using namespace std;


void test01()
{
	char ch;
	int spaces = 0;
	int total = 0;
	cin.get(ch);

	while (ch != '.')
	{
		if (ch == ' ')
			++spaces;
		++total;
		cin.get(ch);
	}

	cout << spaces << "spaces, " << total;
}

enum
{
	a,
	b,
	c,
};

void test02()
{
	cout << "input 0-2: ";
	int code;
	cin >> code;
	while (code >=a && code <= c)
	{
		switch (code)
		{
			case a: cout << "aaaaaaaa"; break;
			case b: cout << "bbbbbbbb"; break;
			case c: cout << "cccccc";   break;
			default: cout << "input error"; break;
		}
		cout << endl;
		cout << "input 0-2: ";
		cin >> code;
	}
}

void test03()
{
	const int MAX = 5;
	double fish[MAX];
	int i = 0;
	cout << "fish #1";
	while (i < MAX && cin >> fish[i])
	{
		if (++i < MAX)
		{
			cout << "fish #" << i + 1 << " : ";
		}
	}

	double total = 0.0;
	for (int j = 0; j < i; j++)
	{
		total += fish[j];
	}

	if (0 == i)
	{
		cout << "no fish!\n";
	}
	else
	{
		cout << "average : " << total / i << endl;
	}
}


int main()
{
	// test01();
	// test02();
	test03();

	return 0;
}