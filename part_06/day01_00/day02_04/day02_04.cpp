
/*
	===========================================================
	函数探幽：重点章节
		内联函数
		引用变量
		引用传递函数参数
		默认参数
		函数重载
		函数模板
		函数模板具体化

		5、函数模板
			通用的函数描述，即使用泛型来定义函数，其中的泛型可以用具体的类型替换；

			实现：c++98前： template <class T>
				在声明和定义前都需要添加： template <typename T>
				根据函数调用时，传入的值确定类型；

			模板的局限性：
				模板中算法操作是否支持传入的数据类型；

			为特定类型提供具体化的模板
				背景：	
					编写的模板函数很可能无法处理某种类型，需要将其通用化，通用化的方式：
						1、重载运算符
						2、为特定类型提供具体化的模板

				优先级：编译器选择原型；*************************
					非模板函数 》 具体化的模板 》 常规模板

					三种形式：
						非模板函数：
							void swap(int a, int b);
						具体化的模板：
							template <> void swap<int>(int a, int b);
							template <> void swap(int a, int b);
						常规模板：
							template <typename T>
							void swap(T a, T b);

					实例化/具体化：
						实例化：实例化完成在编译阶段；
							1、隐式实例化
								编译器通过函数调用时传入的参数类型进行隐式的产生模板实例；

							2、显示实例化
								template void swap<int>(int , int);

						具体化：
							template <> void swap<int>(int a, int b);
							template <> void swap(int a, int b);

						< >不仅可以用于声明和定义中，还可以使用于调用时，显示调用模板或者显示调用模板并指明类型；
*/

#include<iostream>
using namespace std;

template <typename T>
void Swap(T& a, T& b);

template <typename T>
void Swap(T* A, T* b, int n);

void test01()
{
	int i = 100;
	int j = 200;
	cout << "i = " << i << endl;
	cout << "j = " << j << endl;
	
	Swap(i, j);
	cout << "i = " << i << endl;
	cout << "j = " << j << endl;

}

template <typename T>
void Swap(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template <typename T>
void Swap(T* a, T* b, int n)
{
	T temp;
	for (int i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}

void show(const int a[], int n)
{
	cout << "==================================" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}
}

void test02()
{
	// 重载模板
	int i = 10;
	int j = 20;

	cout << "i = " << i << endl;
	cout << "j = " << j << endl;

	Swap(i, j);
	cout << "i = " << i << endl;
	cout << "j = " << j << endl;

	int d1[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int d2[8] = { 11, 12,13,14,15,16,17,18 };

	show(d1, 8);
	show(d2, 8);
	Swap(d1, d2, 8);
	show(d1, 8);
	show(d2, 8);
}




int main()
{
	// test01();

	test02();

	return 0;
}
