
/*
	���ʹ�ã�
		���õ���Ԫ��
			���� << �����
			
			Ӧ�ã�
				ʹ֮����coutһ������ʾ��������ݣ�

			���ӣ�
				cout << trip
				cout��һ��ostream�����������ܵģ��ܹ�ʶ�����е�c++�������ͣ�
			��һ�����ذ汾��
				���Ҫʵ��trip << cout����Ҫʵ����Ԫ��ʵ�����ز�����
					void operator<<(ostream &os, const Time & t)
					{
						os << h.hous << endl;
					}
				note:
					������Ҫ����,ͨ����Ԫʵ�����غ�ͨ���෽��ʵ�����ص�����
					�����Ĳ�����ͬ�� 

			�ڶ������ذ汾��
				����汾�޷�ʵ����ʽ����
				ostream & operator<<(ostream &os, const Time & t)
					{
						os << h.hous << endl;
						return os;
					}

*/


#include"mytime.h"



void test01()
{
	using std::cout;
	using std::endl;

	Time aida(3, 40);
	Time tosca(2, 43);
	Time temp;

	cout << "aida and tosca: \n";
	cout << aida << "; " << tosca << endl;
}

int main()
{
	test01();


	return 0;
}