#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> Lotto(int range, int n)
{
	using std::vector;
	using std::random_shuffle;
	vector<int> all;
	vector<int> result;
	for (int i = 1; i <= range; i++)
		all.push_back(i);
	for (int i = 0; i < n; i++)
	{	
		random_shuffle(all.begin(), all.end());
		result.push_back(all[0]);
	}
	return result;
}

int main()
{
	using std::vector;
	using std::cout;
	vector<int> winner;
	winner = Lotto(51, 6);
	for (auto x : winner)
		cout << x << " ";
	return 0;
}