#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>
char symbol[] = { ',','.','!','\'','\"','-',' '};
bool is_symbol(char c) {
	for (int i = 0; i < strlen(symbol); i++)
		if (c == symbol[i])
			return true;
	return false;
}
bool reverse_words(const std::string str)
{
	std::string str1 = str;
	std::string str2(str1.begin(),remove_if(str1.begin(), str1.end(), is_symbol));
	std::string str3 = str2;
	reverse(str2.begin(), str2.end());
	if (str3 == str2)
		return true;
	else
		return false;
}
int main()
{
	using std::cout;
	using std::cin;
	using std::endl;

	cout << "please input a string:" << endl;
	std::string str;
	getline(cin, str);
	if (reverse_words(str))
		cout << str << " is reverse word" << endl;
	else
		cout << str << " is not reverse word" << endl;
	return 0;
}