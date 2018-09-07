#include <iostream>
struct customer
{
	char fullname[35];
	double payment;
};
class Stack
{
private:
	static const int LIMIT = 25;
	customer customer_stack[LIMIT];
	int total;
public:
	Stack()
	{
		total = 0;
	}
	void push(const customer& customer)
	{
		if (total < LIMIT)
			customer_stack[total++] = customer;
		else
			return;
	}
	customer pop()
	{
		if (total > 0)
			return customer_stack[--total];
	}
};
int main()
{
	using std::endl;
	customer customer_test[5] = { {"a",1.0},{"b",2.0},{"c",3.0},{"d",4.0},{"e",5.0} };
	Stack stack;
	double total_payment = 0.0;
	for (int i = 0; i < 5; i++)
		stack.push(customer_test[i]);
	for (int i = 0; i < 5; i++)
	{
		customer temp;
		temp = stack.pop();
		total_payment += temp.payment;
	}
	std::cout << "the total_payment is:" << total_payment << endl;
}