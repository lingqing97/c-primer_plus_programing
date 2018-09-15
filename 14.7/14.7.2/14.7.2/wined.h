#pragma once
#ifndef WINED_H
#define WINED_H
#include <iostream>
#include <valarray>
#include <string>
template <class T1,class T2>
class Pair
{
private:
	T1 a;
	T2 b;
public:
	Pair(const T1 aa,const T2 bb):a(aa),b(bb){}
	Pair() {}
	~Pair(){}
	T1& first() { return a; }
	T2& second() { return b;}
	T1 first() const { return a; }
	T2 second() const { return b; }
	Pair& operator=(const Pair<T1, T2> p);
};
template <class T1,class T2>
Pair<T1,T2>& Pair<T1,T2>::operator=(const Pair<T1, T2> p)
{
	if (&p == this)
		return *this;
	a = p.a;
	b = p.b;
	return *this;
}
typedef std::valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;
class Wine:private std::string,private PairArray
{
private:
	int num;
public:
	Wine(const char* l, int n, const int yr[], const int bot[]) :std::string(l), PairArray(ArrayInt(yr, n), ArrayInt(bot, n)) { num = n; };
	Wine(const char* l, int n);
	void GetBottles();
	const std::string& Label()const { return (const std::string&)*this; }
	int sum() const;
	void show() const;
};
#endif // !WINED_H
