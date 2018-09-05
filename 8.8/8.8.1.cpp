#include <iostream>
using namespace std;
void repeat(string str, int n = 0)
{
	if (n != 0)
	{
		for (int i = 0; i < n; i++)
			cout << str << endl;
	}
	else
		cout << str << endl;
}
int main()
{
	string str;
	cin >> str;
	int n;
	cin>>n;
	repeat(str,n);
	return 0;
}
