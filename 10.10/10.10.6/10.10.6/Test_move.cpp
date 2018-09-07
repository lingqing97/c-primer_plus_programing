#include <iostream>
#include "move.h"
int main()
{
	move move_1(1, 2);
	move move_2(2, 3);
	move move_3;
	move_3=move_1.add(move_2);
	move_3.showmove();
	move_3.reset();
	move_3.showmove();
	return 0;
}