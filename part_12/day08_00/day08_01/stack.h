#pragma once



// =============================================================
// 下面Stack为具体某种数据类型而创建
// 传统方式
//typedef unsigned long Item;
//
//class Stack
//{
//private:
//	enum {MAX = 10};
//	Item items[MAX];
//	int top;
//
//public:
//	Stack();
//	bool isfull() const;
//	bool push(const Item& item);
//	bool pop(Item& item);
//};

// =============================================================
// 模板形式

template <class Type>
class Stack
{
private:
	enum {MAX = 10};
	Type items[MAX];
	int top;

public:
	Stack();
	bool isempty();
	bool isfull();
	bool push(const Type& item);
	bool pop(Type& item);
};

template <class Type>
Stack<Type>::Stack()
{
	top = 0;
}

template <class Type>
bool Stack<Type>::isempty()
{
	return top == 0;
}

template <class Type>
bool Stack<Type>::isfull()
{
	return top == MAX;
}


template <class Type>
bool Stack<Type>::push(const Type& item)
{
	if (top < MAX)
	{
		items[top++] = item;
		return true;
	}
	else
		return false;
}


template <class Type>
bool Stack<Type>::pop(Type& item)
{
	if (top > 0)
	{
		item = items[--top];
		return true;
	}
	else
		return false;
}