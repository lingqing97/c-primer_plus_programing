#include <iostream>
#include "head.h"
void setgolf(golf& g, char name[], int handicap)
{
	strcpy_s(g.fullname, name);
	g.handicap = handicap;
}
int setgolf(golf& g)
{
	using std::cout;
	using std::cin;
	using std::endl;
	cout << "please input the fullname of the golf:" << endl;
	char name[Len];
	cin.get(name, Len);
	while (cin)
	{
		strcpy_s(g.fullname, name);
		cout << "please input the handicap of the golf:" << endl;
		int handicap;
		cin >> handicap;
		g.handicap = handicap;
		return 1;
	}
	return 0;
}
void showgolf(const golf& g)
{
	using std::cout;
	using std::endl;
	cout << "the golf information is:" << endl;
	cout << g.fullname << " " << g.handicap << endl;
}