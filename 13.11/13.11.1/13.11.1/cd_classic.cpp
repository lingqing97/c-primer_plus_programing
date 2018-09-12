#include "cd_classic.h"
#include <iostream>
cd::cd()
{
	strcpy(performers, "");
	strcpy(laber, "");
	selections = 0;
	playtime = 0.0;
}
cd::cd(const char* p, const char* l, const int s, const double pl)
{
	strcpy(performers, p);
	strcpy(laber, l);
	selections = s;
	playtime = pl;
}
cd::cd(const cd& c)
{
	strcpy(performers, c.performers);
	strcpy(laber, c.laber);
	selections = c.selections;
	playtime = c.playtime;
}
cd::~cd()
{

}
void cd::Report() const
{
	using std::cout;
	using std::endl;
	cout << "performers is:" << performers << endl;
	cout << "laber is:" << laber << endl;
	cout << "selections:" << selections << endl;
	cout << "playtime:" << playtime << endl;
}
cd& cd::operator=(const cd& c)
{
	if (&c == this)
		return *this;
	strcpy(performers, c.performers);
	strcpy(laber, c.laber);
	selections = c.selections;
	playtime = c.playtime;
	return *this;
}
classic::classic():cd()
{
	strcpy(mainworks, "");
}
classic::classic(const char* m, const char* p, const char* l, const int s, const double pl) : cd(p, l, s, pl)
{
	strcpy(mainworks, m);
}
classic::classic(const classic& c):cd(c)
{
	strcpy(mainworks, c.mainworks);
}
classic::~classic()
{

}
void classic::Report() const
{
	cd::Report();
	std::cout << "mainwords is:" << mainworks << std::endl;
}
classic& classic::operator=(const cd& c)
{
	cd::operator=(c);
	strcpy(mainworks, "");
	return *this;
}
classic& classic::operator=(const classic& c)
{
	if (&c == this)
		return *this;
	cd::operator=(c);
	strcpy(mainworks, c.mainworks);
	return *this;
}