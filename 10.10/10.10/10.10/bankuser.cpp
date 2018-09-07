#include "bankuser.h"
#include <string>
bankuser::bankuser()
{
	m_name = "***";
	m_user = "***";
	m_salay = 0.0;
}
bankuser::bankuser(std::string name, std::string user, double salay)
{
	m_name = name;
	m_user = user;
	m_salay = salay;
}
void bankuser::show() const
{
	using std::cout;
	using std::endl;
	cout << "the bankuser's name is:" << m_name << endl;
	cout << "the bankuser's username is:" << m_user << endl;
	cout << "the bankuser's salay is:" << m_salay << endl;
}
bool bankuser::save(double salay)
{
	if (salay >= 0)
	{
		m_salay += salay;
		return true;
	}
	else
		return false;
}
bool bankuser::takeout(double salay)
{
	if (salay > 0&&salay<=m_salay)
	{
		m_salay -= salay;
		return true;
	}
	else return false;
}