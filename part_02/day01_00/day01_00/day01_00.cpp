
/*
	复合类型：
		数组
		字符串：
			两种方式：
				c语言风格的
				c++ string类库的方法	

		结构体：
			结构体也是c++ OOP的基石；
			c++ 在声明结构体变量时可以省略struct关键字；

		共用体：union
			当数据项使用两种或者多种格式时，但是不会同时使用，可以用union类型节省空间；

		枚举：enum
			c++的enum工具提供了另一种符号常量的方式，可以替代const；

		new：
			运行阶段申请内存空间；
			形式：
				typename * pointer = new typename;

		delete:
			释放内存
			delete只对new申请的内存有效
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
	// 带参get：功能和getline基本一样，但是当读到行尾时，get并不再读取并丢弃换行符
	// 将其保留在输入队列中；
	// 不带参get：读取下一个字符；
	cin.get(name, ArSize).get();
	cout << "enter your favorite dessert:\n";
	cin.get(dessert, ArSize).get();

	cout << "i have some delicious " << dessert;
	cout << " for you, " << name << endl;
}

void test03()
{
	// string类库
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
	// 字符串输入
	// test01();

	// test02();

	test03();


	return 0;
}

