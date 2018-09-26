#include <iostream>
#include <string>
bool reverse_words(std::string str1)
{
	for (int i = 0; i < str1.size(); i++)
		if (str1[i] != str1[str1.size() - i-1])
			return false;
	return true;
}
int main()
{
	using std::cout;
	using std::cin;
	using std::endl;

	cout << "please input a string:" << endl;
	std::string str;
	cin >> str;
	if (reverse_words(str))
		cout << str << " is reverse_words" << endl;
	else
		cout << str << " is not reverse_words" << endl;
	return 0;
}