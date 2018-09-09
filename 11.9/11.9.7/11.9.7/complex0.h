#pragma once
#ifndef COMPLEX0_H
#define COMPLEX0_H
#include <iostream>
using namespace std;
class Complex
{
private:
	int _real;
	int _imag;
public:
	Complex() { _real = 0; _imag = 0; };
	Complex(int real, int imag);
	int get_real() { return _real; }
	int get_imag() { return _imag; }
	Complex operator+(const Complex& c) const;
	Complex operator-(const Complex& c) const;
	Complex operator*(const Complex& c) const;
	Complex operator-() const { return Complex(_real, -_imag); }
	friend Complex operator*(const int& d, const Complex& c);
	friend istream operator>>(istream& in, Complex& c);    //第二个参数不用const,因为cin本身就是对complex进行写入
	friend ostream operator<<(ostream& os, const Complex& c);
};
#endif