#include "tv.h"
#include <iostream>
int main()
{
	using std::cout;
	TV s42;
	cout << "Initial settings for 42\" TV:\n";
	s42.settings();
	s42.onoff();
	cout<<"\nadjust setttings for 42\" TV:\n";
	s42.chanup();
	s42.settings();

	Remote grey;
	grey.set_chan(s42, 10);
	grey.volup(s42);
	grey.voldown(s42);
	cout << "\n42\"settings after using remote:\n";
	s42.settings();

	cout << "\nusing s42 to set the grey's state:\n";
	grey.show_state();
	s42.set_remote_state(grey);
	grey.show_state();

	return 0;
}