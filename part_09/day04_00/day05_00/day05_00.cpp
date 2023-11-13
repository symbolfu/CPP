
/*
	类的使用：
		常用的友元：
			重载 << 运算符
			
			应用：
				使之能与cout一起来显示对象的内容；

			例子：
				cout << trip
				cout是一个ostream对象，它是智能的，能够识别所有的c++基本类型；
			第一个重载版本：
				如果要实现trip << cout：需要实现友元，实现重载操作符
					void operator<<(ostream &os, const Time & t)
					{
						os << h.hous << endl;
					}
				note:
					这里需要明白,通过友元实现重载和通过类方法实现重载的区别？
					方法的参数不同； 

			第二个重载版本：
				上面版本无法实现链式操作
				ostream & operator<<(ostream &os, const Time & t)
					{
						os << h.hous << endl;
						return os;
					}

*/


#include"mytime.h"



void test01()
{
	using std::cout;
	using std::endl;

	Time aida(3, 40);
	Time tosca(2, 43);
	Time temp;

	cout << "aida and tosca: \n";
	cout << aida << "; " << tosca << endl;
}

int main()
{
	test01();


	return 0;
}