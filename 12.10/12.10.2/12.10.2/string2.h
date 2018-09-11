#pragma once
#ifndef STRING_2_H
#define STRING_2_H
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
class string
{
private:
	char* str;
	int length;
	static int string_num;
	static const int STRLIMIT = 80;
public:
	string();
	string(const char* s);
	string(const string& s);
	~string();
	string operator=(const string& s);
	string Stringlow();
	string Stringup();
	int index(const char c) const;
	friend string operator+(const string& a,const string& b);
	friend std::ostream& operator<<(std::ostream& os, const string& s);
	friend std::istream& operator>>(std::istream& in, string& s);
};
#endif // !STRING_2_H
