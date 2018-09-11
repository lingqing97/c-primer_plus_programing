#include "stock.h"
#include <iostream>
const int STKS = 5;
int main()
{
	stock stocks[STKS] = {
		stock("NanoSmart",12,20.0),
		stock("Boffo Objects",200,2.0),
		stock("Monolithic Obelisks",130,3.25),
		stock("Fleep Enterprises",60,6.5),
		stock("Enterment comany",12,123)
	};
	std::cout << "stock holdings:\n";
	int st;
	for (st = 0; st < STKS; st++)
		std::cout << stocks[st];
	std::cout << "please input the stocks num to buy(1-5):\n";
	int num = 0;
	std::cin >> num;
	if (num <= STKS&&num>0)
	{
		std::cout << "please input the num to buy:\n";
		long share;
		std::cin >> share;
		std::cout << "please input the price:\n";
		double price = 0.0;
		std::cin >>price;
		stocks[num-1].buy(share,price);
		std::cout << "buy successfully\n";
		std::cout << stocks[num-1];
	}
	const stock* top = &stocks[0];
	return 0;

}