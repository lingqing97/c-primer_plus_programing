#include "cd_classic.h"
#include <iostream>
cd::cd()
{
	performers = nullptr;
	label = nullptr;
	selections = 0;
	playtime = 0.0;
}
cd::cd(const char* p, const char* l, const int s, const double pl)
{
	performers = new char[strlen(p) + 1];
	label = new char[strlen(l) + 1];
	strcpy(performers, p);
	strcpy(label, l);
	selections = s;
	playtime = pl;
}
cd::cd(const cd& c)
{
	performers = new char[strlen(c.performers) + 1];
	strcpy(performers, c.performers);
	label = new char[strlen(c.label) + 1];
	strcpy(label, c.label);
	selections = c.selections;
	playtime = c.playtime;
}
cd::~cd()
{
	delete[] performers;
	delete[] label;
}
void cd::Report() const
{
	using std::cout;
	using std::endl;
	cout << "performers is:" << performers << endl;
	cout << "label is:" << label << endl;
	cout << "selections is:" << selections << endl;
	cout << "playtime is:" << playtime << endl;
}
cd& cd::operator=(const cd& c)
{
	if (&c == this)
		return *this;
	delete[] performers;
	delete[] label;
	performers = new char[strlen(c.performers) + 1];
	label = new char[strlen(c.label) + 1];
	strcpy(performers, c.performers);
	strcpy(label, c.label);
	selections = c.selections;
	playtime = c.playtime;
	return *this;
}
classic::classic() :cd()
{
	mainworks = nullptr;
}
classic::classic(const char* m, const char* p, const char* l, const int s, const double pl) : cd(p, l, s, pl)
{
	mainworks = new char[strlen(m) + 1];
	strcpy(mainworks, m);
}
classic::classic(const cd& c, const char* m) : cd(c)
{
	mainworks = new char[strlen(m) + 1];
	strcpy(mainworks, m);
}
classic::classic(const classic& c) : cd(c)
{
	mainworks = new char[strlen(c.mainworks) + 1];
	strcpy(mainworks,c.mainworks);
}
classic::~classic()
{
	delete[] mainworks;
}
void classic::Report() const
{
	cd::Report();
	std::cout << "mainworks is:" << mainworks << std::endl;
}
classic& classic::operator=(const classic& c)
{
	if (&c == this)
		return *this;
	cd::operator=(c);
	delete[] mainworks;
	mainworks = new char[strlen(c.mainworks) + 1];
	strcpy(mainworks, c.mainworks);
	return *this;
}