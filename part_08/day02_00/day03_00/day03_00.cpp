
/*
	������ࣺ
		��Ĺ��캯��������������
			�Դ������͵ĳ�ʼ��

		������������ʱ�����Զ����ù��캯����

		note:
			���캯���������أ�
			���캯��ִ��ʱ����
			��������ֻ��һ����
			����������ִ��ʱ����


		const ��Ա������
			������
				const Stock land;
				land.show()
				��������ܾ��ڶ��У���Ϊ�������޷�ȷ��show��ʽ�Ƿ���޸Ķ�������ݳ�Ա��

			���������
				ͨ��ĳ�ַ�ʽ���ñ���֪���÷��������޸Ķ�������ݳ�Ա��
				void show() const��
				void Stock::show() const
				ͨ���ں����������const�޶�����

			�Ƽ���******************
				ֻҪ�෽�����޸ĵ��ö��󣬾�Ӧ�ý�������Ϊconst�������Ϊconst ��Ա������


*/
#include"Stock.h"
#include<iostream>
using namespace std;



void test01()
{
	cout << "using constructors to create new objects\n";
	Stock stock1("aaa", 11, 2.2);        // ��ʼ��
	stock1.show();

	Stock stock2 = Stock("bbb", 1, 1.1);   // ��ʼ��

	stock2 = stock1;

	stock2 = Stock("ccc", 2, 2.2);  // temp object
}


int main()
{

	test01();


	return 0;
}
