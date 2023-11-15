#pragma once

#include<iostream>

class StringBad
{
private:
	char* str;
	int len;
	static int num_strings;

public:
	StringBad(const char* s);
	StringBad();
	StringBad(const StringBad& st);    // ���ƹ��캯��
	~StringBad();
	friend std::ostream& operator<<(std::ostream& os, const StringBad& st);
};
