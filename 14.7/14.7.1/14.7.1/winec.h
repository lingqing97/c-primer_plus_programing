#pragma once
#ifndef WINE_H
#define WINE_H
#include <valarray>
#include <string>
template <class T1,class T2>
class Pair
{
private:
	T1 a;
	T2 b;
public:
	T1& first();
	T2& second();
	T1 first() const{ return a; }
	T2 second() const{ return b; }
};
template <class T1,class T2>
T1& Pair<T1,T2>::first()
{
	return a;
}template <class T1,class T2>
T2& Pair<T1, T2>::second()
{
	return b;
}
class Wine
{
private:
	typedef std::valarray<int> ArrayInt;
	typedef Pair<ArrayInt, ArrayInt> PairArray;
	std::string label;
	PairArray year_count;
	int num;
public:
	Wine(const char* l, int y, const int yr[], const int bot[]);
	Wine(const char* l, int y);
	~Wine(){}
	void GetBottles();
	const std::string& Label()const { return label; }
	int sum() const;
	void show() const;
};
#endif // !WINE_H

