#include "list.h"
int main()
{
	using namespace std;
	list test;
	cout << "please input five int data to test list:" << endl;
	int data[5];
	for (int i = 0; i < 5; i++)
		cin >> data[i];
	for (int i = 0; i < 5; i++)
		test.insert(data[i]);
	test.reverse();
	cout << "\nplease input a int data to del in the list:" << endl;
	int temp;
	cin >> temp;
	if (test.del(temp))
		test.reverse();
	return 0;
}