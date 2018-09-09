#include "vector.h"
#include <iostream>
#include <cmath>
namespace Vector
{
	using std::cos;
	using std::sin;
	using std::tan;
	using std::sqrt;
	using std::atan2;
	using std::atan;
	const double ang_pi = 45.0 / atan(1.0);
	void vector::set_x()
	{
		x = mag * cos(ang);
	}
	void vector::set_y()
	{
		y = mag * sin(ang);
	}
	void vector::set_mag()
	{
		mag = sqrt(x*x + y * y);
	}
	void vector::set_ang()
	{
		if (x == 0 && y == 0)
			ang = 0;
		else
		{
			ang = atan2(y, x);
		}
	}
	vector::vector()
	{
		x = 0;
		y = 0;
		mag = 0;
		ang = 0;
		mood = RECT;
	}
	vector::vector(double a, double b, Mood form)
	{
		mood = form;
		if (form == RECT)
		{
			x = a;
			y = b;
			set_mag();
			set_ang();
		}
		else if (form == POL)
		{
			mag = a;
			ang = b/ang_pi;
			set_x();
			set_y();
		}
		else
		{
			std::cout << "WARNING:please input 3rd arguments to the vector:" << std::endl;
			std::cout << "vector init to 0:" << std::endl;
			x = y = mag = ang = 0;
			mood = RECT;
		}
	}
	void vector::reset(double a, double b, Mood form)
	{
		mood = form;
		if (form == RECT)
		{
			x = a;
			y = b;
			set_mag();
			set_ang();
		}
		else if (form == POL)
		{
			mag = a;
			ang = b / ang_pi;
			set_x();
			set_y();
		}
		else
		{
			std::cout << "WARNING:please input 3rd arguments to the vector:" << std::endl;
			std::cout << "vector init to 0:" << std::endl;
			x = y = mag = ang = 0;
			mood = RECT;
		}
	}
	vector vector::operator+(const vector& v) const
	{
		return vector(this->x + v.xval(), this->y + v.yval());
	}
	vector vector::operator-(const vector& v) const
	{
		return vector(this->x - v.xval(), this->y - v.yval());
	}
	vector vector::operator-() const
	{
		return vector(-x, -y);
	}
	vector vector::operator*(const double& d) const
	{
		return vector(x*d, y*d);
	}
	vector operator*(const double& d, const vector& v)
	{
		return v * d;
	}
	std::ostream& operator<<(std::ostream& os, const vector& v)
	{
		os << "v.x=" << v.x << " v.y=" << v.y << std::endl;
		os << "v.mag=" << v.mag << " v.ang=" << v.ang << " v.mood=" << v.mood << std::endl;
		return os;
	}
}