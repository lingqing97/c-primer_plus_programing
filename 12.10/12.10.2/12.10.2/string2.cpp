#include "string2.h"
#include <iostream>
int string::string_num = 0;
string::string()
{
	str = nullptr;
	length = 0;
	string::string_num++;
}
string::string(const char* s)
{
	str = new char[strlen(s) + 1];
	strcpy(str, s);
	length = strlen(str);
	string::string_num++;
}
string::string(const string& s)
{
	str = new char[strlen(s.str) + 1];
	strcpy(str, s.str);
	length = strlen(str);
	string::string_num++;
}
string::~string()
{
	delete[] str;
	string::string_num--;
}
string operator+(const string& a,const string& b)
{
	char temp[string::STRLIMIT];
	strcpy(temp, "");
	strcat(temp, a.str);
	strcat(temp, b.str);
	return string(temp);
}
string string::operator=(const string& s)
{
	if (&s == this)
		return *this;
	delete[] str;
	str = new char[strlen(s.str) + 1];
	strcpy(str, s.str);
	length = strlen(str);
	return *this;
}
string string::Stringlow()
{
	char temp[string::STRLIMIT];
	int i = 0;
	for (i = 0; i < length; i++)
	{
		if (str[i] >= 'A'&&str[i] <= 'Z')
			temp[i] = str[i] + 32;
		else
			temp[i] = str[i];
	}
	temp[length] = '\0';
	return string(temp);
}
string string::Stringup()
{
	char temp[string::STRLIMIT];
	int i = 0;
	for (i = 0; i < length; i++)
	{
		if (str[i] >= 'a'&&str[i] <= 'z')
			temp[i] = str[i] - 32;
		else
			temp[i] = str[i];
	}
	temp[length] = '\0';
	return string(temp);
}
int string::index(const char c) const
{
	int count = 0;
	for (int i = 0; i < length; i++)
		if (str[i] == c)
			count++;
	return count;
}
std::ostream& operator<<(std::ostream& os, const string& s)
{
	os << s.str << std::endl;
	return os;
}
std::istream& operator>>(std::istream& in, string& s)
{
	std::cout << "please input string:\n";
	char temp[string::STRLIMIT];
	in.get(temp, string::STRLIMIT);
	if (in)
		s = temp;
	while (in&&in.get() != '\n')
		continue;
	return in;
}
