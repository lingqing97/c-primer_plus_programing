#include <iostream>
#include <set>
#include <algorithm>
#include <string>
using namespace std;
std::set<std::string> merge(const set<string> a,const set<string> b)
{
	set<string> result;
	for (auto x : a)
		result.insert(x);
	for (auto x : b)
		result.insert(x);
	return result;
}

int main()
{
	set<string> set1;
	set<string> set2;
	set<string> set3;
	cout << "Mat,please input your friends' name:<input n to exit>";
	string in;
	cin >> in;
	while(in!="n")
	{
		set1.insert(in);
		cin >> in;
	}
	cout << "\nPat,please input your friends' name:<input n to exit>";
	cin >> in;
	while (in != "n")
	{
		set2.insert(in);
		cin >> in;
	}
	set3=merge(set1, set2);
	cout << "\nMat's friends' sort:" << endl;
	for (auto x : set1)
		cout << x<<" ";
	cout << "\nPat's friends' sort:" << endl;
	for (auto x : set2)
		cout << x<<" ";
	cout << "\nAfter merge:" << endl;
	for (auto x : set3)
		cout << x<<" ";
	return 0;
}