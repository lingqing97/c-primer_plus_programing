#include <iostream>
#include "SALES.h"
int main()
{
	using namespace sales;
	Sales test[2];
	double avg[2][4] = { {1,2,4,5},{5,7,2,3 } };
	for (int i = 0; i < 2; i++)
		setSales(test[i], avg[i], 4);
	for (int i = 0; i < 2; i++)
		showSales(test[i]);
	return 0;
}