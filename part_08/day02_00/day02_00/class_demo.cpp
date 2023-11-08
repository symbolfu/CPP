#include"class_demo.h"

void Stock::acquire(const string& co, long n, double pr)
{
	company = co;
	if (n < 0)
	{
		cout << "number of share can not be negative" << endl;
		shares = 0;
	}
	else
	{
		shares = n;
	}
}
