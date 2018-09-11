#include <iostream>
class test
{
private:
	char* name;
public:
	test(const char* nm);
	~test();
};
test::test(const char* nm)
{
	name = new char(strlen(nm) + 1);
	strcpy(name, nm);
}
test::~test()
{
	delete[] name;
}
