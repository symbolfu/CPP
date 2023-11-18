#include"brass.h"
#include<iostream>

using std::cout;
using std::endl;
using std::string;

typedef std::ios_base::fmtflags format;
typedef std::streamsize precis;

format setFormat();
void restore(format f, precis p);


Brass::Brass(const string& s, long an, double bal)
{
	fullName = s;
	acctNum = an;
	balance = bal;
}

void Brass::Deposit(double amt)
{
	if (amt < 0)
	{
		cout << "Negative deposit not allowed; "
			<< "deposit is cancelled.\n";
	}
	else
		balance += amt;
}

void Brass::Withdraw(double amt)
{
	format initialState = setFormat();
	precis prec = cout.precision(2);

	if (amt < 0)
	{
		cout << "withdrawal amount must be positive; "
			<< "withdrawal canceled.\n";
	}
	else if (amt <= balance)
		balance -= amt;
	else
	{
		cout << "withdrawal amount of $" << amt
			<< " exceeds your balance.\n"
			<< "withdrawal canceled.\n";
	}

	restore(initialState, prec);

}


double Brass::Balance() const
{
	return balance;
}

void Brass::ViewAcct() const
{
	format initalState = setFormat();
	precis prec = cout.precision(2);
	cout << "client: " << fullName << endl;
	cout << "account number: " << acctNum << endl;
	cout << "balance: $" << balance << endl;
	restore(initalState, prec);
}


//=======================================================================
BrassPlus::BrassPlus(const string& s, long an, double bal,
	double m1, double r) : Brass(s, an, bal)
{
	maxLoan = m1;
	owesBank = 0.0;
	rate = r;
}

BrassPlus::BrassPlus(const Brass& ba, double m1, double r) : Brass(ba)
{
	maxLoan = m1;
	owesBank = 0.0;
	rate = r;
}


void BrassPlus::ViewAcct() const
{
	format initialState = setFormat();
	precis prec = cout.precision(2);

	Brass::ViewAcct();
	cout << "max loan: $" << maxLoan << endl;
	cout << "owed to bank: $" << owesBank << endl;
	cout.precision(3);
	cout << "loan Rate: " << 100 * rate << "%\n";
	restore(initialState, prec);
}

void BrassPlus::Withdraw(double amt)
{
	format initialState = setFormat();
	precis prec = cout.precision(2);

	double bal = Balance();
	if (amt <= bal)
		Brass::Withdraw(amt);
	else if (amt <= bal + maxLoan - owesBank)
	{
		double advance = amt - bal;
		owesBank += advance * (1.0 + rate);
		cout << "bank advance: $" << advance << endl;
		cout << "finance charge: $" << advance * rate << endl;
		Deposit(advance);
		Brass::Withdraw(amt);
	}
	else
		cout << "credit limit exceeded. transaction cancelled.\n";

	restore(initialState, prec);
}


format setFormat()
{
	return cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
}

void restore(format f, precis p)
{
	cout.setf(f, std::ios_base::floatfield);
	cout.precision(p);
}





