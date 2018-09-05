#include <iostream>
using namespace std;
template <class T1,class T2>
auto add(T1 a,T2 b)->decltype(a+b)
{
	return a+b;
}
void main()
{
	int a=2;
	double b=3.4;
	cout<<add(a,b);
	return 0;
}
