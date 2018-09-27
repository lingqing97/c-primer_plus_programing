#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <ctime>
int main()
{
	using std::vector;
	using std::string;
	using std::cout;
	using std::cin;
	using std::cin;
	using std::endl;
	using std::ifstream;

	vector<string> v;
	ifstream fin;
	fin.open("./wordlist.txt");
	string temp;
	while (getline(fin,temp))
	{
		v.push_back(temp);
	}

	std::srand(time(0));
	char play;
	cout << "will you play a word game?<y/n>:";
	cin >> play;
	while (tolower(play) == 'y')
	{
		string target = v[std::rand() % v.size()];
		int length = target.size();
		string attempt(length, '-');
		string badchars;
		int guesses = 6;
		cout << "Guess my secret word.It has " << length << " letters, and you guess\n";
		cout << "one letter at a time.You get " << guesses << " wrong guesses.\n";
		cout << "Your word: " << attempt << endl;

		while (guesses > 0 && attempt != target)
		{
			char letter;
			cout << "Guess a letter: ";
			cin >> letter;
			if (badchars.find(letter) != string::npos || attempt.find(letter) != string::npos)
			{
				cout << "You already guessed that.Try again.\n";
				continue;
			}
			int loc = target.find(letter);
			if (loc == string::npos)
			{
				cout << "Oh,bad guess!\n";
				--guesses;
				badchars += letter;
			}
			else
			{
				cout << "Good guess!\n";
				attempt[loc] = letter;
				loc = target.find(letter, loc + 1);
				while (loc != string::npos)
				{
					attempt[loc] = letter;
					loc = target.find(letter, loc + 1);
				}
			}
			cout << "YOur word: " << attempt << endl;
			if (attempt != target)
			{
				if (badchars.length() > 0)
					cout << "Bad choice:" << badchars << endl;
				cout << guesses << " bad guesses left.\n";
			}
		}
		if (guesses > 0)
		{
			cout << "That's right!\n";
		}
		else
		{
			cout << "Sorry,the word is " << target << ".\n";
		}
		cout << "Will you play another?<y/n>";
		cin >> play;
		play = tolower(play);
	}
	cout << "Bye!\n";
	fin.clear();
	fin.close();
	return 0;
}