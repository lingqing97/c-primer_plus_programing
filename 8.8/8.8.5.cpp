#include <iostream>
using namespace std;
template <class T>
T max(T a[])
{
	T max=0;
	for(int i=0;i<5;i++)
	if(a[i]>max) max=a[i];
	return max;
}
int main()
{
	int a[5]={1,2,3,4,5};
	cout<<"the max of int array is:"<<max(a)<<endl;
	double b[5]={1.0,2.0,3.0,4.0,5.0};
	cout<<"the max of double array is:"<<max(b)<<endl;
	return 0;
}

