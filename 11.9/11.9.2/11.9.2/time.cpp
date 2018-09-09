#include "time.h"
#include <iostream>
void time::add_min(int min)
{
	_min += min;
	_h += _min / 60;
	_min = _min % 60;
}
void time::add_h(int h)
{
	_h += h;
}
void time::show() const
{
	std::cout << "_h:" << _h << " _min:" << _min << std::endl;
}
time operator+(const time& t1, const time& t2)
{
	int temp_h, temp_min;
	temp_min = (t1._min + t2._min) % 60;
	temp_h = (t1._h + t2._h) + (t1._min + t2._min) / 60;
	return time(temp_h,temp_min);
}
time operator-(const time& t1, const time& t2)
{
	int to1, to2;
	to1 = t1._h * 60 + t1._min;
	to2 = t2._h * 60 + t2._min;
	if(to1>=to2)
	return time((to1-to2)/60, (to1-to2)%60);
	else
	{
		std::cout << "be sure that t1>t2:"<<std::endl;
		return time(0, 0);
	}
}
time operator*(const double& d, const time& t)
{
	int temp_h;
	int temp_min;
	int total_min =t._h * 60 * d +t._min * d;
	temp_h = total_min / 60;
	temp_min = total_min % 60;
	return time(temp_h, temp_min);
}