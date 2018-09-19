#include "tv.h"
#include <iostream>
bool TV::voldown()
{
	if (volume > minval)
	{
		volume--;
		return true;
	}
	else
		return false;
}
bool TV::volup()
{
	if (volume < maxval)
	{
		volume++;
		return true;
	}
	else
		return false;
}
void TV::chandown()
{
	if (channel > 1)
		channel--;
	else
		channel = maxchannel;
}
void TV::chanup()
{
	if (channel < maxchannel)
		channel++;
	else
		channel = 1;
}
void TV::settings() const
{
	using std::cout;
	using std::endl;
	cout << "TV is" << (state == off ? "off" : "on") << endl;
	if (state == on)
	{
		cout << "volume setting =" << volume << endl;
		cout << "channel setting =" << channel << endl;
		cout << "mode=" << (mode == antenna ? "antenna" : "cable" )<< endl;
		cout << "input=" << (input == tv ? "tv" : "dvd" )<< endl;
	}
}
bool TV::set_remote_state(Remote& r)
{
	if (state == on)
	{
		r.set_state();
		return true;
	}
	else
		return false;
}
Remote::Remote():mode(TV::tv) {}
Remote::Remote(int m):mode(m) 
{}
bool Remote::volup(TV& t) { return t.volup(); }
bool Remote::voldown(TV& t) { return t.voldown(); }
void Remote::onoff(TV& t) { t.onoff(); }
void Remote::chanup(TV& t) { t.chanup(); }
void Remote::chandown(TV& t) { t.chandown(); }
void Remote::set_chan(TV& t, int c) { t.channel = c; }
void Remote::set_mode(TV& t) { t.set_mode(); }
void Remote::set_input(TV& t) { t.set_input(); }