
/*
	�������ͣ�
		����
		�ַ�����
			���ַ�ʽ��
				c���Է���
				c++ string���ķ���	

		�ṹ�壺
			�ṹ��Ҳ��c++ OOP�Ļ�ʯ��
			c++ �������ṹ�����ʱ����ʡ��struct�ؼ��֣�

		�����壺union
			��������ʹ�����ֻ��߶��ָ�ʽʱ�����ǲ���ͬʱʹ�ã�������union���ͽ�ʡ�ռ䣻

		ö�٣�enum
			c++��enum�����ṩ����һ�ַ��ų����ķ�ʽ���������const��

		new��
			���н׶������ڴ�ռ䣻
			��ʽ��
				typename * pointer = new typename;

		delete:
			�ͷ��ڴ�
			deleteֻ��new������ڴ���Ч
*/

#include<iostream>
#include<string>
using namespace std;


void test01()
{
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "enter your name:\n";
	cin.getline(name, ArSize);
	cout << "enter your favorite dessert:\n";
	cin.getline(dessert, ArSize);

	cout << "i have some delicious " << dessert;
	cout << " for you, " << name << endl;
}


void test02()
{
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "enter your name:\n";
	// ����get�����ܺ�getline����һ�������ǵ�������βʱ��get�����ٶ�ȡ���������з�
	// ���䱣������������У�
	// ������get����ȡ��һ���ַ���
	cin.get(name, ArSize).get();
	cout << "enter your favorite dessert:\n";
	cin.get(dessert, ArSize).get();

	cout << "i have some delicious " << dessert;
	cout << " for you, " << name << endl;
}

void test03()
{
	// string���
	char charr1[20];
	char charr2[20] = "aaaa";
	string str1;
	string str2 = "bbbb";

	cout << "enter a kind of fline: ";
	cin >> charr1;
	cout << "enter another kind of feline: ";
	cin >> str1;
	cout << "here are some felines : \n";
	cout << " charr1 " << charr1;
	cout << " charr2 " << charr2;
	cout << " str1 " << str1;
	cout << " str2 " << str2;
}


int main()
{
	// �ַ�������
	// test01();

	// test02();

	test03();


	return 0;
}

