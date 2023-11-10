
/*
	使用类：即类设计技术
		上一章介绍了如何定义类；
		这章将进一步介绍：如何使用类，让其发挥更大的作用；
		主要内容：
			运算符重载：让其具有一些简单操作符；
			友元函数：非成员函数可以访问类私有属性；
			类的自动转换和强制类型转换
			类转换函数

		友元函数：
			背景：
				c++控制对类类型私有部分的访问；
				通常，公有类方法提供唯一的访问途径；
				但是，有时候这种条件过于苛刻，不利于编程；

			解决方式：
				c++提供了另一种形式的访问权限：
					友元；

			友元分类：
				友元函数
				友元类
				友元成员函数

		本章节主要介绍：友元函数
			通过让函数成为类的友元，可以赋予该函数与类的成员函数相同的访问权限；

			只有在类中声明了友元函数，外部的同名的函数才是友元函数，否则就是一个普通函数，无类的访问权；
			即类还是拥有控制权，即控制友元函数，并没有破坏OOP的数据隐藏原则；


		实现：
			1、将其原型放在类的声明中，并在原型声明前加上关键字friend；
			friend Time operator*(double m, const Time &t)
				note：
					1、虽然在类中声明，但是它不是成员函数，所以不能通过成员运算符来调用；
					2、虽然它不是成员函数，但是它具有与成员函数相同的访问权；

			2、编译函数定义：
				因为它不是成员函数，所以定义时不需要添加限定符Time::；
				同时不要在定义时使用关键字friend；
				 Time operator*(double m, const Time &t)
				 {

				 }



*/


