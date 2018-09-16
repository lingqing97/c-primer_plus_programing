#pragma once
#ifndef BADDUDE_H
#define BADDUDE_H
#include <iostream>
#include <string>
class person
{
private:
	std::string firstname;
	std::string lastname;
public:
	person() { firstname = "none"; lastname = "none"; }
	person(const std::string& fn,const std::string& ln):firstname(fn),lastname(ln){}
	void show() const { std::cout << "firstname:" << firstname << std::endl; std::cout << "lastname:" << lastname << std::endl; }
};
class Gunslinger :virtual public person
{
private:
	double time;
	int num;
public:
	Gunslinger():person(),time(0.0),num(0){}
	Gunslinger(double t,int n,const std::string& fn,const std::string& ln):person(fn,ln),time(t),num(n){}
	Gunslinger(const person& p,double t,int n):person(p),time(t),num(n){}
	double Draw() const { return time; }
	void show() const;
protected:
	void Gunshow() const;
};
class PokerPlayer :virtual public person
{
private:
	int rand_poker;
	int Draw() const;
public:
	PokerPlayer():person(),rand_poker(Draw()){}
	PokerPlayer(const std::string& fn,const std::string& ln):person(fn,ln),rand_poker(Draw()){}
	PokerPlayer(const person& p):person(p),rand_poker(Draw()){}
	void show() const { person::show(); }
};
class BadDude:public Gunslinger, public PokerPlayer
{
public:
	BadDude():person(),Gunslinger(),PokerPlayer(){}
	BadDude(const person& p, double t, int n):person(p),Gunslinger(p,t,n),PokerPlayer(p){}
	void show() const{ Gunslinger::Gunshow(); PokerPlayer::show(); }
};
#endif // !BADDUDE_H
