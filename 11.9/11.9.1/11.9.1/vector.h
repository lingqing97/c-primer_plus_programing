#pragma once
#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>
namespace Vector
{
	class vector
	{
	public:
		enum Mood {RECT,POL};
	private:
		double x;
		double y;
		double mag;
		double ang;
		Mood mood;
		void set_x();
		void set_y();
		void set_mag();
		void set_ang();
	public:
		vector();
		vector(double a, double b, Mood form = RECT);
		void reset(double a, double b, Mood form = RECT);
		double xval() const{ return x; } 
		double yval() const{ return y; }
		double magval() const{ return mag; }
		double angval() const{ return ang; }
		Mood set_rect() const{ return RECT; }
		Mood set_pol() const{ return POL; }
		vector operator+(const vector& v) const;
		vector operator-(const vector& v) const;
		vector operator-() const;
		vector operator*(const double& d) const;
		friend vector operator*(const double& d, const vector& v);
		friend std::ostream& operator<<(std::ostream& os, const vector& v);
	};
}
#endif // !VECTOR_H
