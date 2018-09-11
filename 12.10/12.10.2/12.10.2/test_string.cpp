#include "string2.h"
#include <iostream>
int main()
{
	using std::cout;
	using std::cin;
	string s1(" and I an a c++ student.");
	string s2 = "please enter your name:";
	string s3;
	cout << s2;
	cin >> s3;
	s2 ="My name is "+s3;
	cout << s2 << std::endl;
	cout << s1 << std::endl;
	cout << s3 << std::endl;
	s2 = s2 + s1;
	cout<<s2.Stringup();
	cout << s2.Stringlow();
	cout << s2.Stringup().index('A') << std::endl;
	cout << s2.Stringlow().index('a') << std::endl;
	return 0;
}