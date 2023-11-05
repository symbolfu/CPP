#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;


void test01()
{
	// 写入到文件中
	char automobile[50];
	int year;
	double a_price;
	double b_price;

	ofstream outFile;
	outFile.open("demo.txt");

	cout << "enter the make and model of automobile: ";
	cin.getline(automobile, 50);
	cout << "enter the model year: ";
	cin >> year;
	cout << "enter the original asking price: ";
	cin >> a_price;
	b_price = 0.913 * a_price;

	cout << "================================\n";
	cout << fixed;
	cout.precision(2);
	cout.setf(ios_base::showpoint);
	cout << "make and model : " << automobile << endl;
	cout << "a_price: " << a_price << endl;
	cout << "b_price: " << b_price << endl;

	outFile << "================================\n";
	outFile << fixed;
	outFile.precision(2);
	outFile << "make and model : " << automobile << endl;
	outFile << "a_price: " << a_price << endl;
	outFile << "b_price: " << b_price << endl;

	outFile.close();
}

void test02()
{
	const int SIZE = 60;
	char filename[SIZE];

	ifstream inFile;

	cout << "enter name of data file: ";
	cin.getline(filename, SIZE);

	inFile.open(filename);
	if (!inFile.is_open())
	{
		cout << "could not open the file " << filename << endl;
		cout << "program terminating.\n";
		exit(EXIT_FAILURE);
	}

	double value;
	double sum = 0.0;
	int count = 0;

	inFile >> value;
	while (inFile.good())     // while input good and not at EOF
	{
		++count;
		sum += value;
		inFile >> value;
	}
	
	if (inFile.eof())
	{
		cout << "end of file reached.\n";
	}
	else if (inFile.fail())
	{
		cout << "input terminated by data mismatch.\n";
	}
	else
		cout << "input terminated for unkown reason.\n";

	if (count == 0)
	{
		cout << "no data processed.\n";
	}
	else
	{
		cout << "items read: " << count << endl;
		cout << "sum: " << sum << endl;
		cout << "average: " << sum / count << endl;
	}
	inFile.close();

}


int main()
{

	// test01();

	test02();


	return 0;
}