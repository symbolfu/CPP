
/*
	���ͱ�̣�
		ģ�弼����
			����ģ��
			��ģ��

		��ģ�壺
			������������
			�洢���Ͳ�ͬ�������ӿڻ���һ����

			template <class type>    // template <typename type> 
			�ؼ���template���߱���������Ҫ����һ��ģ�壻
			�������е������൱�ں����Ĳ����б�
			���԰ѹؼ���class�����Ǳ������������� �ñ�������������Ϊ��ֵ��������ζ��type����Ϊ�ࣻ
			��type�����ñ��������ƣ�

		��ͨ����ģ����ת����
			1����������ǰ���ϣ�template <class type> , ͬʱ�滻������type�滻��
			2�����Ա����ת��Ϊģ���Ա����ʱ��ÿ������ʵ��ǰ����Ҫ��ӣ�template <class type> 
			3�����Ա����ת��Ϊģ���Ա����ʱ����Ҫ�����޶�����class_name��Ϊclass_name<Type>
			4���������壬����ʡ��ģ��ǰ׺�����޶�����
			5��ģ��������ʵ�ֱ������ͷ�ļ��У�������һ��

		�ݱ䣺
			template <class type�� int n>
				class type�����Ͳ���
				int n�����ʽ���������Ϳ���Ϊ���͡�ö�١����á�ָ�룻ʵ����ʱ��ֵ�����ǳ������ʽ��

			template <class type1��class type2>


			Array < Stack<int> > asi;
				һ��ģ��ʹ����һ��ģ�壻

		ģ��ľ��廯��
			��ģ���뺯��ģ�����ƣ�
				��ʽʵ����
					Array<int> stuff
				��ʾʵ����
					template class Array<int>;
					û�д������ἰ����󣬵����Ѿ�����ͨ��ģ�������ɾ��廯��
				��ʾ���廯
					


*/
#include<iostream>
#include<string>
#include<cctype>
#include"stack.h"

using namespace std;
const char CYCEL = 5;

void test01()
{
	Stack<string> st;
	
	for (int i = 0; i < CYCEL; i++)
	{
		st.push("aaaa");
	}

	for (int i = 0; i < CYCEL; i++)
	{
		string str;
		st.pop(str);
		cout << str << endl;
	}

}


int main()
{

	test01();


	return 0;
}