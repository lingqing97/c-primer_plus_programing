#include <iostream>
struct chaff
{
	char dross[20];
	int slag;
};
void showchaff(const chaff& c)
{
	using std::cout;
	using std::endl;
	cout << "the information of the chaff is:";
	cout << c.dross << " " << c.slag << endl;
}
int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	char buffer[512];
	chaff* chaff_one = new (buffer) chaff[2];
	cout << "please input two chaff's informations:";
	for(int i = 0; i < 2; i++)
	{
		char name[20];
		cin >> name;
		strcpy_s(chaff_one[i].dross, name);
		int slag = 0;
		cin >> slag;
		chaff_one[i].slag = slag;
	}
	for (int i = 0; i < 2; i++)
		showchaff(chaff_one[i]);
	return 0;
}