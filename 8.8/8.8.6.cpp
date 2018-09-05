#include <iostream>
#include <cstring>
using namespace std;

template <class T>
T maxn(T a[],int n)
{
	T max=0;
	for(int i=0;i<n;i++)
	if(a[i]>max) max=a[i];
	return max;
}
template <> char* maxn<char*>(char* a[],int n)
{
	char* max="";
	for(int i=0;i<n;i++)
	if(strcmp(a[i],max)>0) max=a[i];
	return max;
 } 
int main()
{
	char* a[5]={"abc","def","zfg","hij","rst"};
	cout<<maxn(a,5);
	return 0;
}
