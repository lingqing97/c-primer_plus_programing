#include <iostream>
#include "SALES.h"
namespace sales
{
	void setSales(Sales& s, const double sales[], int n)
	{
		double total = 0.0;
		double max = 0.0;
		double min = INFINITY;
		for (int i = 0; i < n; i++)
		{
			s.sales[i] = sales[i];
			total += sales[i];
			if (sales[i] > max) max = sales[i];
			if (sales[i] < min) min = sales[i];
		}
		s.average = total / n;
		s.max = max;
		s.min = min;
	}
	void setSales(Sales& s)
	{

	}
	void showSales(const Sales& s)
	{
		using std::cout;
		using std::endl;
		cout << "the information of the sales is:";
		cout << "\n the average is:" << s.average << endl;
		cout << "the max is:" << s.max << endl;
		cout << "the min is:" << s.min << endl;
	}
}