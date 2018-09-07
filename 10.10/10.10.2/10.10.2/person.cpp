#include "person.h"
person::person(const std::string& lname, const char* fname)
{
	m_lname = lname;
	strcpy_s(m_fname, fname);
}
void person::show() const
{
	using std::endl;
	std::cout << m_fname << "." << m_lname << endl;
}
void person::formalshow() const
{
	using std::endl;
	std::cout << m_lname << "." << m_fname << endl;
}