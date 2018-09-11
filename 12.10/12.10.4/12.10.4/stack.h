#pragma once
#ifndef STACK_H
#define STACK_H
typedef unsigned long Item;
class stack
{
private:
	enum {MAX=10};
	Item* pitems;
	int size;
	int top;
public:
	stack(int n = MAX);
	stack(const stack& st);
	~stack();
	bool isempty() const;
	bool isfull() const;
	bool push(const Item& item);
	bool pop(Item& item);
	stack& operator=(const stack& st);
};
#endif // !STACK_H
