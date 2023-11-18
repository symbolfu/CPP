
/*

		�̳У�
			������ͻ���������ϵ��
				1�����������ʹ�û���ķ����������Ƿ�������˽�еģ�
				2������ָ������ڲ�������ʾת���������ָ�����������
				3���������ÿ����ڲ�������ʾת����������������������
				4������2��3�Ļ���ָ�������ֻ�ܵ��û���ķ��������ܵ��������������ķ�����
				5�����ܽ��������͵�ַ�������������ú�ָ�룻

			c++ ������ǿ��Ҫ��ָ�����ͱ���ƥ����ܸ�ֵ���ݣ����Ǽ̳����⣻

			c++�����ּ̳з�ʽ��is-a��ϵ��is-a-kind-of
				���м̳У�
							�����
				�����̳�
				˽�м̳�

			is-a��ϵ��is-like-a��is-implemented-as-a��use-a��has-a��ϵ��
				c++���м̳п��Խ��������κ�һ�ֹ�ϵ�����ǻ����Ƽ�ʹ��is-a��ϵ��

			��̬���м̳У�
				���壺
					ͬһ��������������ͻ����е���Ϊ�ǲ�ͬ�ģ�
					����������Ϊȡ���ڵ��ø÷����Ķ���

				ʵ�ַ�ʽ��
					����1���������������¶������ķ�������д����
					����2��ʹ���鷽����virtual
						1�����ֱ��ͨ��������÷���������ù��ɻ���һ����
						2�����ʹ�����û��߶���ָ����÷�����****************
							���1������δʹ��virtual�ؼ��֣����򽫸����������ͺ�ָ�����͵��÷�����
							���2������ʹ��virtual�ؼ��֣����򽫸������û���ָ��ָ��Ķ��������ѡ�񷽷���

							<<���2��ͻ�Գ���̬����>>



*/

#include"brass.h"
#include<iostream>
#include<string>


void test01()
{
	// ����virtual��̬����
	using std::cout;
	using std::endl;

	Brass p("aaa", 1111, 8888);
	BrassPlus pp("bbb", 2222, 9999);
	p.ViewAcct();
	cout << endl;

	pp.ViewAcct();

}


void test02()
{
	const int CLIENTS = 4;
	using namespace std;

	Brass* p_clients[CLIENTS];
	string temp;
	long tempnum;
	double tempbal;
	char kind;

	for (int i = 0; i < CLIENTS; i++)
	{
		cout << "enter client's name: ";
		getline(cin, temp);
		cout << "enter client's accunt number: ";
		cin >> tempnum;
		cout << "enter opening balance: $";
		cin >> tempbal;

		cout << "enter 1 for brass accout or "
			<< "2 for brassplus accout: ";
		while (cin >> kind && (kind != '1' && kind != '2'))
		{
			cout << "enter either 1 or 2: ";
		}

		if (kind == '1')
			p_clients[i] = new Brass(temp, tempnum, tempbal);
		else
		{
			double tmax, trate;
			cout << "enter the overdraft limit: $";
			cin >> tmax;
			cout << "enter the interest rate "
				<< "as a decimal fraction: ";
			cin >> trate;
			p_clients[i] = new BrassPlus(temp, tempnum, tempbal, tmax, trate);
		}
		while (cin.get() != '\n')
			continue;
	}

	cout << endl;

	for (int i = 0; i < CLIENTS; i++)
	{
		p_clients[i]->ViewAcct();
		cout << endl;
	}

	for (int  i = 0; i < CLIENTS; i++)
	{
		delete p_clients[i];
	}

	cout << "done.\n";
}

int main()
{
	//test01();
	test02();


	return 0;
}