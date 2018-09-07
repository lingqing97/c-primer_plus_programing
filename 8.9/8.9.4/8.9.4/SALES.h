#pragma once
#ifndef SALES
#define SALES
namespace sales
{
	const int count = 4;
	struct Sales
	{
		double sales[count];
		double average;
		double max;
		double min;
	};
	void setSales(Sales& s, const double sales[], int n);
	void setSales(Sales& s);
	void showSales(const Sales& s);
}
#endif
