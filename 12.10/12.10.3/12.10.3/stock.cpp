#include "stock.h"
stock::stock()
{
	company = nullptr;
	share = 0;
	share_val = 0;
	total_val = 0;
}
stock::stock(const char* c, const long s, const double s_v)
{
	company = new char[strlen(c) + 1];
	strcpy(company, c);
	share = s;
	share_val = s_v;
	set_total();
}
stock::stock(const stock& s)
{
	company = new char[strlen(s.company) + 1];
	strcpy(company, s.company);
	share = s.share;
	share = s.share_val;
	set_total();
}
stock::~stock()
{
	delete[] company;
}
void stock::buy(long num, double price)
{
	if (num < 0)
	{
		std::cout << "the num of stock can not be nagetive\n";
	}
	else
	{
		share += num;
		share_val = price;
		set_total();
	}
}
void stock::sell(long num, double price)
{
	if (num > share)
	{
		std::cout << "you do not have enough share\n";
	}
	else
	{
		share -= num;
		share_val = price;
		set_total();
	}
}
void stock::update(double price)
{
	share_val = price;
}
stock stock::operator=(const stock& s)
{
	if (&s == this)
		return *this;
	delete[] company;
	company = new char[strlen(s.company) + 1];
	strcpy(company, s.company);
	share = s.share;
	share_val = s.share_val;
	set_total();
	return *this;
}
std::ostream& operator<<(std::ostream& os, const stock& s)
{
	using std::endl;
	os << "the company is:" << s.company << endl;
	os << "the share num is:" << s.share << endl;
	os << "the share price is:" << s.share_val << endl;
	os << "the total price is:" << s.total_val << endl;
	return os;
}