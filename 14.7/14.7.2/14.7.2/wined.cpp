#include "wined.h"
#include <iostream>
Wine::Wine(const char* l, int n) :std::string(l)
{
	num = n;
}
void Wine::GetBottles()
{
	using std::cout;
	using std::cin;
	using std::endl;
	ArrayInt a1(num);
	ArrayInt a2(num);
	int year = 0;
	int count = 0;
	cout << "Enter " << (const std::string&)*this << " data for " << num << " year(s)" << endl;
	for (int i = 0; i < num; i++)
	{
		cout << "Enter year:";
		cin >> year;
		cout << "Enter bottles for that year:";
		cin >> count;
		a1[i] = year;
		a2[i] = count;
		while (cin&&cin.get() != '\n')
			continue;
	}
	PairArray p1(a1, a2);
	Pair::operator=(p1);
}
int Wine::sum() const
{
	ArrayInt a(((const PairArray&)*this).second());
	return a.sum();
}
void Wine::show() const
{
	using std::cout;
	using std::endl;
	PairArray p = (const PairArray&)*this;
	cout << "Wine:" << (const std::string&)*this << endl;
	cout << "\tYear\tBottles";
	for (int i = 0; i < num; i++)
		cout << "\t" << p.first()[i] << "\t" << p.second()[i] << endl;
}