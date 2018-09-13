#pragma once
#ifndef CD_CLASSIC_H
#define CD_CLASSIC_H
#define _CRT_SECURE_NO_WARNINGS
class cd
{
private:
	char* performers;
	char* label;
	int selections;
	double playtime;
public:
	cd();
	cd(const char* p, const char* l, const int s, const double pl);
	cd(const cd& c);
	virtual ~cd();
	virtual void Report() const;
	cd& operator=(const cd& d);
};
class classic :public cd
{
private:
	char* mainworks;
public:
	classic();
	classic(const char* m, const char* p, const char* l, const int s, const double pl);
	classic(const cd& c, const char* m);
	classic(const classic& c);
	virtual ~classic();
	virtual void Report() const;
	classic& operator=(const classic& c);
};
#endif