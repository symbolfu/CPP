
/*
	�������飺
		�����򴴽�δ����ʾ��ʼ���������ʱ�����ǵ���Ĭ�Ϲ��캯����
			��ʽ1��
				Stock mybuff[4];
					���壺
					ͬʱĬ�ϵ���Ĭ�Ϲ��캯��
			��ʽ2��
				Stock mybuff[4] = {Stock(xxx, xx)}   �� ������Ŀǰ���ֽ��Ͳ���ȷ�� ��������һ�ι��캯��   ���ַ�ʽȡ���������
					1��Ĭ�Ϲ��캯����������Ԫ��
					2���������еĹ��캯����������ʱ����
					3������ʱ��������ݸ��Ƹ���ӦԪ�أ�������ʱ����

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