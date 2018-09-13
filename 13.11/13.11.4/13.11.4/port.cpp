#include "port.h"
#include <iostream>
port::port(const char* br, const char* st, int b )
{
	brand = new char[strlen(br) + 1];
	strcpy(brand, br);
	strcpy(style, st);
	bottles = b;
}
port::port(const port& p)
{
	brand = new char[strlen(p.brand) + 1];
	strcpy(brand, p.brand);
	bottles = p.bottles;
}
port& port::operator=(const port& p)
{
	if (&p == this)
		return *this;
	delete[] brand;
	brand = new char[strlen(p.brand) + 1];
	strcpy(brand, p.brand);
	strcpy(style, p.style);
	bottles = p.bottles;
}
port& port::operator+=(int b)
{
	bottles += b;
	return *this;
}
port& port::operator-=(int b)
{
	bottles -= b;
	return *this;
}
void port::show() const
{
	using std::cout;
	using std::endl;
	cout << "Brand:" << brand << endl;
	cout << "Kind:" << style << endl;
	cout << "Bottles:" << bottles << endl;
}
std::ostream& operator<<(std::ostream& os, const port& p)
{
	os << p.brand << "," << p.style << "," << p.bottles;
	return os;
}
vintageport::vintageport() :port()
{
	nickname = new char[strlen("none") + 1];
	strcpy(nickname, "none");
	year = 0;
}
vintageport::vintageport(const char* br, const char* st, int b, const char* nm, int y) : port(br, st, b)
{
	nickname = new char[strlen(nm) + 1];
	strcpy(nickname, nm);
	year = y;
}
vintageport::vintageport(const vintageport& vp):port(vp)
{
	nickname = new char[strlen(vp.nickname) + 1];
	strcpy(nickname, vp.nickname);
	year = vp.year;
}
vintageport& vintageport::operator=(const vintageport& vp)
{
	if (&vp == this)
		return *this;
	port::operator=(vp);
	delete[] nickname;
	nickname = new char[strlen(vp.nickname) + 1];
	strcpy(nickname, vp.nickname);
	year = vp.year;
	return *this;
}
void vintageport::show() const
{
	port::show();
	std::cout << "nickname:" << nickname << std::endl;
	std::cout << "year:" << year << std::endl;
}
std::ostream& operator<<(std::ostream& os, const vintageport& vp)
{
	os << (const port&)vp;
	os << "," << vp.nickname << "," << vp.year << std::endl;
	return os;
}