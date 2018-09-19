#pragma once
#ifndef TV_H
#define TV_H
#include <iostream>
class TV;
class Remote
{
private:
	int mode;
	int state;
public:
	enum { usual, jiaohu };
	friend class TV;
	Remote();
	Remote(int m);
	bool volup(TV& t);
	bool voldown(TV& t);
	void onoff(TV& t);
	void chanup(TV& t);
	void chandown(TV& t);
	void set_chan(TV& t, int c);
	void set_mode(TV& t);
	void set_input(TV& t);
	void set_state() { state = (state == usual) ? jiaohu : usual; }
	void show_state() const { std::cout << (state == usual ? "usual" : "jiaohu") << std::endl; }
};
class TV
{
private:
	int state;
	int volume;
	int maxchannel;
	int channel;
	int mode;
	int input;
public:
	friend class Remote;
	enum {off,on};
	enum {minval,maxval=20};
	enum {antenna,cable};
	enum {tv,dvd};
	TV(int s = off, int mc = 125) :state(s), volume(5), maxchannel(mc), channel(2), mode(cable), input(tv) {}
	void onoff() { state = (state == on) ? off : on; }
	bool ison() const { return state == on; }
	bool volup();
	bool voldown();
	void chanup();
	void chandown();
	void set_mode() { mode = (mode == antenna) ? cable : antenna; }
	void set_input() { input = (input == tv) ? dvd : tv; }
	void settings() const;
	bool set_remote_state(Remote& r);
};

#endif // !TV_H
