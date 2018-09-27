#include <iostream>
#include <set>
#include <iterator>

template <class T>
int reduce(T ar[], int n)
{
	using namespace std;
	set<T, greater<T>> s;
	copy(&ar[0], &ar[n], insert_iterator< set<T, greater<T> > >(s,s.begin()));

	cout << "After reduece the ar is:" << endl;
	for (auto x : s)
		cout << x << " ";
	return s.size();
}

int main()
{
	using std::cout;
	using std::endl;

	long ar[] = { 1,2,2,3,4,5,6,6,6 };
	cout << "\nAfter reduce the ar has:" << reduce(ar, 9) <<" numbers."<< endl;
	return 0;
}