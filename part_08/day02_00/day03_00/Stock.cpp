#include"Stock.h"
#include<iostream>


// й╣ож

Stock::Stock()
{
	cout << "default constructor called\n";
	company = "no name";
	shares = 0;
	share_val = 0;
	total_val = 0;
}

Stock::Stock(const string& co, long n, double pr)
{
	cout << "constructor using " << co << " called\n";
	company = co;

	if (n < 0)
	{
		cout << "number of shares can not be negative;"
			<< company << " shares set to 0.\n";
		shares = 0;
	}
	else
	{
		shares = n;
	}

	share_val = pr;
	set_tot();
}


// class destructor
Stock::~Stock()
{
	cout << "bye, " << company << endl;
}

void Stock::buy(long num, double price)
{
	if (num < 0)
	{
		cout << "number of shares purchased can not be negative" << endl;
	}
	else
	{
		shares += num;
		share_val += price;
		set_tot();
	}
}

void Stock::sell(long num, double price)
{
	if (num < 0)
	{
		cout << "number of shares sold can not be negative" << endl;
	}
	else if (num > shares)
	{
		cout << "you cant not sell more than you have!" << endl;
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}

void Stock::update(double price)
{
	share_val = price;
	set_tot();
}

void Stock::show()
{
	cout << "stock show data" << endl;
}

