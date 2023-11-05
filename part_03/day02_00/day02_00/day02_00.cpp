
/*
	循环和关系表达式：
		for 
			c++11 新增特性：基于范围的for循环
					for (double x : prices_arry)
		while
		do...while

		这部分基本和c语言一样；

*/

#include<iostream>
#include<ctime>
using namespace std;

void test01()
{
	int i;
	for ( i = 0; i < 5; i++)
	{
		cout << "c++ knows loops.\n";
	}
	cout << "c++ knows when to stop.\n";
}

void test02()
{
	cout << "enter the delay time, in seconds: ";
	float secs;
	cin >> secs;
	clock_t delay = secs * CLOCKS_PER_SEC;
	cout << "starting\a\n";
	clock_t start = clock();
	while (clock() - start < delay)
	{
		;
	}

	cout << "done \a\n";
	
}

void test03()
{
	char ch;
	int count = 0;

	cout << "enter char; enter # to quit:\n";
	cin.get(ch);
	while (ch != '#')
	{
		cout << ch;
		++count;
		cin.get(ch);
	}

	cout << endl << count << "characters read\n";
}



int main()
{

	// test01();
	// test02();
	test03();


	return 0;
}