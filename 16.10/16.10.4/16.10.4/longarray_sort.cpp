#include <iostream>
#include <algorithm>
#include <set>
#include <iterator>

int reduce(long ar[], int n)
{
	using std::set;
	using std::less;
	using std::copy;
	using std::cout;
	using std::endl;
	using std::insert_iterator;

	set<long, less<long>> s;
	copy(&ar[0], &ar[n], insert_iterator < set<long, less<long> > >(s,s.begin()));

	cout << "After reduce the ar is:" << endl;
	for (auto x : s)
		cout << x << " ";
	return s.size();
}

int main()
{
	using std::cout;
	using std::endl;

	long ar[] = { 1,2,2,3,4,5,5,6,6,7,7 };
	cout << "Before reduce ar has:" << 11 << " numbers.\n";
	int length = reduce(ar, 11);
	cout << "\nAfter reduce ar has:" << length << " numbers.\n";
	return 0;
}