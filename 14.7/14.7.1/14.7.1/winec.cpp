#include "winec.h"
#include <iostream>
Wine::Wine(const char* l, int y, const int yr[], const int bot[])
{
	label = l;
	num = y;
	ArrayInt a1(yr,num);
	ArrayInt a2(bot,num);
	year_count.first() = a1;
	year_count.second() = a2;
}
Wine::Wine(const char* l, int y)
{
	label = l;
	num = y;
}
void Wine::GetBottles()
{
	using std::cout;
	using std::endl;
	using std::cin;
	ArrayInt a1(num);
	ArrayInt a2(num);
	cout << "Enter " << label << " data for " << num << " year(s)" << endl;
	int year = 0;
	int count = 0;
	for (int i = 0; i < num; i++)
	{
		cout << "Enter year:";
		cin >> year;
		cout << "\nEnter bottles for that year:";
		cin >> count;
		a1[i] = year;
		a2[i] = count;
		while (cin&&cin.get() != '\n')
			continue;
	}
	year_count.first() = a1;
	year_count.second() = a2;
}
int Wine::sum() const
{
	int sum = 0;
	for (int i = 0; i < num; i++)
		sum += year_count.second()[i];
	return sum;
}
void Wine::show() const
{
	using std::cout;
	using std::endl;
	cout << "Wine:" << label << endl;
	cout << "\tYear\tBottles" << endl;
	for (int i = 0; i < num; i++)
		cout << "\t" << year_count.first()[i] << "\t" << year_count.second()[i] << endl;
}