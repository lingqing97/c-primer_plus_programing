#pragma once
#ifndef MY_TIME_H
#define MY_TIME_H
class time
{
private:
	int _min;
	int _h;
public:
	time() { _min = 0; _h = 0; }
	time(int h, int min) { _min = min; _h = h; }
	void reset(int h, int min) { _min = min; _h = h; }
	void add_min(int min);
	void add_h(int h);
	void show() const;
	friend time operator+(const time& t1,const time& t2);
	friend time operator-(const time& t1,const time& t2);
	friend time operator*(const double& d, const time& t);
};
#endif // !MY_TIME_H
