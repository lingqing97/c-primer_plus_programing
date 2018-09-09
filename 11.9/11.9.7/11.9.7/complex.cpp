#include "complex0.h"
#include <iostream>
using namespace std;
Complex::Complex(int real, int imag)
{
	_real = real;
	_imag = imag;
}
Complex Complex::operator+(const Complex& c) const
{
	return Complex(this->_real + c._real, this->_imag + c._imag);
}
Complex Complex::operator-(const Complex& c) const
{
	return Complex(this->_real - c._real, this->_imag - c._imag);
}
Complex Complex::operator*(const Complex& c) const
{
	return Complex(this->_real*c._real - this->_imag*c._imag, this->_real*c._imag + this->_imag*c._real);
}
Complex operator*(const int& d, const Complex& c)
{
	return Complex(d*c._real, d*c._imag);
}
istream& operator>>(istream& in, Complex& c)
{
	using std::cout;
	using std::endl;
	cout << "real:";
	int temp_real = 0;
	in >> temp_real;
	cout << "imag:";
	int temp_imag;
	in >> temp_imag;
	return in;
}
ostream& operator<<(ostream& os, const Complex& c)
{
	os<< "(" << c._real << "," << c._imag << "j" << ")" << std::endl;
	return os;
}

