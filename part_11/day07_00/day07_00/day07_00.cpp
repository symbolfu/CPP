
/*
	��ļ̳У�
		���ݣ�
			is-a��ϵ�ļ̳�
			����Թ��з�ʽ��һ������������һ���ࣻ
			�������ʣ�
			���캯����Ա��ʼ���б�
			���Ϻ�����ǿ��ת����
			���Ա������
			���ڣ���̬����������ڣ���̬�����ࣻ
			������ࣻ
			���麯����
			��ʱ�����ʹ�ù��м̳У�



*/

#include<iostream>
#include"table.h"


void test01()
{
	using std::cout;
	using std::endl;
	TableTennisisPlayer player1("aaa", "c", true);
	TableTennisisPlayer player2("bbb", "d", false);

	player1.Name();
	if (player1.HasTable())
		cout << ": has a table" << endl;
	else
		cout << ": has not a table" << endl;

	player2.Name();
	if (player2.HasTable())
		cout << ": has a table" << endl;
	else
		cout << ": has not a table" << endl;

}

void test02()
{
	using std::cout;
	using std::endl;
	TableTennisisPlayer player1("aaa", "c", true);
	RatedPlayer         player2(2000, "bbb", "d", false);

	player1.Name();
	if (player1.HasTable())
		cout << ": has a table" << endl;
	else
		cout << ": has not a table" << endl;

	player2.Name();
	if (player2.HasTable())
		cout << ": has a table" << endl;
	else
		cout << ": has not a table" << endl;

	RatedPlayer player3(3000, player1);
	player3.Name();
	if (player3.HasTable())
		cout << ": has a table" << endl;
	else
		cout << ": has not a table" << endl;
}


int main()
{
	// test01();
	test02();

	return 0;
}

