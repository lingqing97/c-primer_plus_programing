#include <iostream>
#include <cctype>
#include <algorithm>
#include <string>
using namespace std;
void toupper(const string& str)
{
	string temp=str;
	transform(temp.begin(),temp.end(),temp.begin(),::toupper);
	cout<<temp<<endl;
}
int main()
{
	cout<<"Enter a string (q to quit):";
	string str;
	cin>>str;
	while(str!="q")
		toupper(str);
	cout<<"Bye"<<endl;
	return 0;	
}

