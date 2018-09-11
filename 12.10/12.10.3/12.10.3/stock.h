#pragma once
#ifndef STOCK_H
#define STOCK_H
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
class stock
{
private:
	char* company;
	long share;
	double share_val;
	double total_val;
	void set_total() { total_val = share_val * share; }
public:
	stock();
	stock(const char* c, const long s, const double s_v);
	stock(const stock& s);
	~stock();
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	stock operator=(const stock& s);
	friend std::ostream& operator<<(std::ostream& os, const stock& s);
};
#endif // !STOCK_H
