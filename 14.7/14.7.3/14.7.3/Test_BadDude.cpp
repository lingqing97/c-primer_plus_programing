#include "BadDude.h"
#include <iostream>
int main()
{
	using std::cout;
	using std::endl;
	const person p("wu", "shukun");
	Gunslinger g(p, 12.5, 10);
	PokerPlayer po(p);

	cout << "Test person,Gunslinger,PlkerPlayer's show function:" << endl;
	p.show();
	g.show();
	po.show();

	BadDude b(p,13.9,14);
	
	cout << "Test BadDude's show function:" << endl;
	b.show();
	return 0;
}