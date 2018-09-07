#pragma once
#ifndef PERSON
#define PERSON
#include <iostream>
#include <string>
class person
{
private:
	static const int LIMIT = 25;
	std::string m_lname;
	char m_fname[LIMIT];
public:
	person() {
		m_lname = "";
		strcpy_s(m_fname, "\n");
	}
	person(const std::string& lname, const char* fname="tom");
	void show() const;
	void formalshow() const;
};
#endif // !PERSON
