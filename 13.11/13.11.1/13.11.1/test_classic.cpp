#include "cd_classic.h"
#include <iostream>
void Bravo(const cd& disk);
int main()
{
	using std::cout;
	using std::endl;
	cd c1("Beatles", "Captol", 14, 35.5);
	classic c2 = classic("Piano Sonata in B flat, Fantasia in C", "Alfred Brendel", "Philips", 2, 57.17);
	cd* pcd = &c1;
	cout << "Using object directly:\n";
	c1.Report();
	c2.Report();

	cout << "Using type cd* pointer to object:\n";
	pcd->Report();
	pcd = &c2;
	pcd->Report();

	cout << "calling a function with a cd reference atgument:\n";
	Bravo(c1);
	Bravo(c2);
	
	cout << "Testing assignment:\n";
	classic copy;
	copy = c2;
	copy.Report();
	return 0;
}
void Bravo(const cd& disk)
{
	disk.Report();
}