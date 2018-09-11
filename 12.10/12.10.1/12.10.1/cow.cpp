#include "cow.h"
#include <iostream>
cow::cow()
{
	strcpy(name, "");
	hobby =nullptr;
	weight = 0.0;
}
cow::cow(const char* nm, const char* hb, const double wt)
{
	strcpy(name, nm);
	hobby = new char[strlen(hb) + 1];
	strcpy(hobby, hb);
	weight = wt;
}
cow::cow(const cow& c)
{
	strcpy(name, c.name);
	hobby = new char[strlen(c.hobby) + 1];
	strcpy(hobby, c.hobby);
	weight = c.weight;
}
cow::~cow()
{
	delete[] hobby;
}
cow& cow::operator=(const cow& c)
{
	if (&c == this)
		return *this;
	delete[] hobby;
	hobby = nullptr;
	strcpy(name, c.name);
	hobby = new char[strlen(c.hobby) + 1];
	strcpy(hobby, c.hobby);
	weight = c.weight;
	return *this;
}
void cow::show() const
{
	using std::cout;
	using std::endl;
	cout << "name:" << name << endl;
	cout << "hobby:" << hobby << endl;
	cout << "weight:" << weight << endl;
}