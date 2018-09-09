#include "vector.h"
#include <iostream>
#include <cstdlib> //srand(),rand()
#include <ctime> //time()
#include <fstream>
int main()
{
	using Vector::vector;
	using namespace std;
	vector step;
	vector result;
	result.reset(0.0, 0.0, vector::RECT);
	double target = 0.0;
	double dstep=0.0;
	double direction = 0.0;
	int steps = 0;
	srand(time(0));
	ofstream fout("./result.txt");
	while (cin >> target)
	{
		cout << "Enter the step:" << endl;
		if (!(cin >> dstep))
			break;
		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, vector::POL);
			result=result+step;
			steps++;
		}
		fout << "target distance:" << target << endl;
		fout << "step distance:" << dstep << endl;
		fout << "steps:" << steps << endl;
		fout << "the (x,y)=" << "(" << result.xval() << "," << result.yval() << ")" << endl;
		dstep = 0;
		result.reset(0.0, 0.0);
		cout << "Enter target to continue(q to exit)" << endl;
	}
	fout.close();
	return 0;
}