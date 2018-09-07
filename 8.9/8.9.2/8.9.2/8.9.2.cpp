#include <iostream>
const int ArSize = 10;
void strcount(const char* str);
int main()
{
	using namespace std;
	char input[ArSize];
	char next;
	cin.get(input, ArSize);
	while (cin)
	{
		cin.get(next);
		while (next != '\n')
			cin.get(next);
		strcount(input);
		cout << "Enter next line (empty line to quit):\n";
		cin.get(input, ArSize);
	}
	cout << "Bye\n";
	return 0;
}
void strcount(const char* str)
{
	using namespace std;
	static int total;
	int count=0;
	cout << "\"" << str << "\" contain ";
	while (*str++)
		count++;
	cout << count << " charter \n";
	total += count;
	cout << "total charter is:" << total << endl;
}