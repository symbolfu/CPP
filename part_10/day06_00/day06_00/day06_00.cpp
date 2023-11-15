
/*
	类和动态内存分配

*/

#include<iostream>
using std::cout;
#include"strngbad.h"



void callme1(StringBad&);
void callme2(StringBad);

void test01()
{
	using std::endl;
	cout << "start an inner block\n";
	StringBad headline1("aaaaaaa");
	StringBad headline2("bbbbbbbbbbbbbbbbbbbbbb");
	StringBad headline3("c");

	cout << "headlin1: " << headline1 << endl;
	cout << "headlin2: " << headline2 << endl;
	cout << "headlin3: " << headline3 << endl;

	callme1(headline1);
	cout << "headlin1: " << headline1 << endl;
	
	callme2(headline2);
	cout << "headlin2: " << headline2 << endl;

	callme1(headline1);
	cout << "headlin1: " << headline1 << endl;
}

void callme1(StringBad& rsb)
{
	cout << "string passed by reference: \n";
	cout << " \"" << rsb << "\"\n";
}


void callme2(StringBad sb)
{
	cout << "string passed by value: \n";
	cout << " \"" << sb << "\"\n";
}

int main()
{
	test01();


	return 0;
}