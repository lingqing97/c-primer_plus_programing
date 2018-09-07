#include "move.h"
#include <iostream>
move::move(double x, double y)
{
	this->x = x;
	this->y = y;
}
move move::add(const move& m)
{
	this->x += m.x;
	this->y += m.y;
	return *this;
}
void move::showmove() const
{
	using std::cout;
	using std::endl;
	cout << "(" << x << "," << y << ")" << endl;
}