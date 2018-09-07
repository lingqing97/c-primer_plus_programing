#include "person.h"
int main()
{
	person person_1;
	person person_2("bob");
	person person_3("bob","helen");
	person_1.formalshow();
	person_2.formalshow();
	person_3.formalshow();
	return 0;
}