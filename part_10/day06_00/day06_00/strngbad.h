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
	StringBad(const StringBad& st);    // 复制构造函数
	~StringBad();
	friend std::ostream& operator<<(std::ostream& os, const StringBad& st);
};
