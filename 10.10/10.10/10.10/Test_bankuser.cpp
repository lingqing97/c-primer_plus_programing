#include "bankuser.h"

int main()
{
	using std::endl;
	bankuser user_1("wsk", "lingqing", 999.0);
	user_1.show();
	std::cout << "please input the salay to save:"<<endl;
	double salay;
	std::cin >> salay;
	user_1.save(salay);
	user_1.show();
	std::cout << "please input the salay to takeout" << endl;
	std::cin >> salay;
	user_1.takeout(salay);
	user_1.show();
	return 0;
}