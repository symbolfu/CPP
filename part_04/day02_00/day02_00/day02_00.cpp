
/*
	��֧�����߼������
		if
		�����������  condtion1 �� value1 �� value2
		switch
			case��ǩ�����ǳ��������޷�����������
			ʹ�÷�Χ��
				1��ѡ���漰ȡֵ��Χ��������Ի������������Ƚϣ���Ӧ����if else��䣻
				2������������1ʱ��if��������2����switch����Ӹ�Ч��
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