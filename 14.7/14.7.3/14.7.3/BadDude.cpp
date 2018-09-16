#include "BadDude.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
void Gunslinger::Gunshow() const
{
	using std::cout;
	using std::endl;
	cout << "time:" << time << endl;
	cout << "num:" << num << endl;
}
void Gunslinger::show() const
{
	person::show();
	Gunshow();
}
int PokerPlayer::Draw() const
{
	std::srand(time(0));
	return rand() % 53;
}