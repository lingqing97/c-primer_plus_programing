#include "port.h"
#include <iostream>
int main()
{
	using namespace std;
	cout << "****Test port functions:*******"<<endl;
	port p1;
	port p2("ad gai", "ruby", 888);
	cout << p1;
	p2.show();
	p2 += 3;
	cout << p2;
	p2 -= 4;
	cout << p2;
	p1 = p2;
	p1.show();
	
	cout << "***Test vintageport functions:****" << endl;
	vintageport v0;
	vintageport v1("ad gai", "ruby", 666, "The Noble", 1988);
	cout << v1;
	v1 += 2;
	cout << v1;
	v1 -= 4;
	cout << v1;
	v0.show();
	v0 = v1;
	v0.show();
	vintageport v3 = v1;
	cout << v3;

	cout << "***Test the duotai character:***" << endl;
	port* p = new vintageport("ad gai", "ruby", 666, "The Noble", 1988);
	p->show();
	delete p;
	return 0;
}