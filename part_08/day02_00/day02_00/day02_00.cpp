

/*
	类和对象：
		OOP特性：
			抽象
			封装和数据隐藏
			多态
			继承
			代码的可重用性


		编程思考方式：
			过程编程：
				首先，考虑要遵循什么样的步骤；然后考虑如何表示这些数据；

			OOP编程：从用户的角度去思考对象：用户需要什么数据，用户与数据交互所需要的操作
				首先，考虑数据：如何表示数据，如何使用数据；

		类规范：一般由两部分构成
			1、类声明：
				以数据成员的方式描述数据部分，以成员函数（或称为方法）的方式描述公共接口；
			2、类方法定义：
				描述如何实现类成员函数

		控制访问：
			private：默认类型
			public

		内联方法：
			定义位于类声明中的函数都将自动成为内联函数；
				类声明常将短小的成员函数作为内联函数；

			也可用在类声明之外定义成员函数，并使其成为内联函数，只需要在实现部分中定义函数时添加inline限定符；


		对象创建：
			每个新对象都有自己的存储空间，用于存储其内部变量和类成员；
			但是同一个类的所有对象共享同一组类方法；


		客户/服务器模型：
			OOP程序员常依照客户/服务器模型来讨论程序设计；
			客户使用类的程序，即使用类的接口；
			服务器设计人员负责提供接口；
			所以类的接口需要保持稳定，先前兼容，内部如何实现，客户不care；





*/
#include<iostream>
#include"class_demo.h"
using namespace std;


int main()
{


	return 0;
}