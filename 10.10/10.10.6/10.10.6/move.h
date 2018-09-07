#pragma once
#ifndef MOVE
#define MOVE
class move
{
private:
	double x;
	double y;
public:
	move(double x = 0, double y = 0);
	void showmove() const;
	move add(const move& m);
	void reset()
	{
		x = 0;
		y = 0;
	}
};
#endif // !MOVE
