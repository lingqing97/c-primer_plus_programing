#include "time.h"
#include <iostream>
int main()
{
	time t1(2, 36);
	time t2(3, 24);
	time t3;
	t3 = t1 + t2;
	t3.show();
	t3 = 3*t3;
	t3.show();
	t3 = t3 - t1;
	t3.show();
	return 0;
}