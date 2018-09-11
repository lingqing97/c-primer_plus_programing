#pragma once
#ifndef COW_H
#define COW_H
#define _CRT_SECURE_NO_WARNINGS
class cow
{
private:
	char name[20];
	char* hobby;
	double weight;
public:
	cow();
	cow(const char* nm, const char* hb, const double wt);
	cow(const cow& c);
	~cow();
	cow& operator=(const cow& c);
	void show() const;
};
#endif // !COW_H
