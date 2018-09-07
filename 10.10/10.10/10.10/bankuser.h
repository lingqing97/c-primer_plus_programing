#pragma once
#ifndef BANKUSER
#define BANKUSER
#include <iostream>
class bankuser
{
private:
	std::string m_name;
	std::string m_user;
	double m_salay;
public:
	bankuser();
	bankuser(std::string name, std::string user, double salay);
	void show() const;
	bool save(double salay);
	bool takeout(double salay);
};
#endif // !BANKUSER
