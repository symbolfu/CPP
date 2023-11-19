
/*
	泛型编程：
		模板技术：
			函数模板
			类模板

		类模板：
			常用于容器类
			存储类型不同，方法接口基本一样；

			template <class type>    // template <typename type> 
			关键字template告诉编译器，将要定义一个模板；
			尖括号中的内容相当于函数的参数列表；
			可以把关键字class看作是变量的类型名， 该变量接收类型作为其值；并不意味着type必须为类；
			把type看作该变量的名称；

		普通类向模板类转化：
			1、在类声明前加上：template <class type> , 同时替换类型用type替换；
			2、类成员函数转变为模板成员函数时，每个函数实现前都需要添加：template <class type> 
			3、类成员函数转变为模板成员函数时、需要将类限定符从class_name变为class_name<Type>
			4、内联定义，可以省略模板前缀和类限定符；
			5、模板声明和实现必须放在头文件中，即放在一起；

		演变：
			template <class type， int n>
				class type：类型参数
				int n：表达式参数，类型可以为整型、枚举、引用、指针；实例化时该值必须是常量表达式；

			template <class type1，class type2>


			Array < Stack<int> > asi;
				一个模板使用另一个模板；

		模板的具体化：
			类模板与函数模板相似：
				隐式实例化
					Array<int> stuff
				显示实例化
					template class Array<int>;
					没有创建或提及类对象，但是已经根据通用模板来生成具体化；
				显示具体化
					


*/
#include<iostream>
#include<string>
#include<cctype>
#include"stack.h"

using namespace std;
const char CYCEL = 5;

void test01()
{
	Stack<string> st;
	
	for (int i = 0; i < CYCEL; i++)
	{
		st.push("aaaa");
	}

	for (int i = 0; i < CYCEL; i++)
	{
		string str;
		st.pop(str);
		cout << str << endl;
	}

}


int main()
{

	test01();


	return 0;
}