#pragma once
#include <iostream>
#include<string>
using namespace std;


class Stock
{
private:
	string company; //Ä¬ÈÏprivate
	long shares;
	double share_val;
	double total_val;
	void set_tot();

public:
	void acquire(const string& co, long n, double pr);
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show();
};