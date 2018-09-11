#include "cow.h"
#include <iostream>

int main()
{
	cow c("001", "eat", 12.9);
	c.show();
	cow a;
	a = c;
	a.show();
	cow d = c;
	d.show();
	return 0;
}