#pragma once
#include<string>
using namespace std;


// ÉùÃ÷

class Stock
{
private:
	string company;
	long shares;
	double share_val;
	double total_val;
	void set_tot() { total_val = shares * share_val; }

public:
	Stock();
	Stock(const string& co, long n = 0, double pr = 0);
	~Stock();

	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show();
	const Stock& topval(const Stock& s) const;
};
