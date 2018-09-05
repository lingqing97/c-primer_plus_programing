#include <iostream>
using namespace std;
struct CandyBar
{
	string name;
	double weight;
	double energy;
};
void set(CandyBar& candy,char* name,double weight,double energy)
{
	candy.name=name;
	candy.weight=weight;
	candy.energy=energy;
}
void show(const CandyBar& candy)
{
	cout<<candy.name<<endl;
	cout<<candy.weight<<endl;
	cout<<candy.energy<<endl;
}
int main()
{
	CandyBar candy;
	char* name=new char[20];
	cin>>name;
	double weight;
	cin>>weight;
	double energy;
	cin>>energy;
	set(candy,name,weight,energy);
	show(candy);
	return 0;
}





