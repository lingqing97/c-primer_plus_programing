#include "stack.h"
#include <iostream>
stack::stack(int n)
{
	pitems = new Item[n];
	size = 0;
	top = 0;
}
stack::stack(const stack& st)
{
	pitems = new Item[st.size];
	for (int i = 0; i < st.size; i++)
		pitems[i] = st.pitems[i];
	size = st.size;
	top = st.top;
}
stack::~stack()
{
	delete[] pitems;
}
bool stack::isempty() const
{
	return size == 0;
}
bool stack::isfull() const
{
	return size == stack::MAX;
}
bool stack::push(const Item& item)
{
	if (top <= size)
	{
		pitems[top++] = item;
		size++;
		return true;
	}
	return false;
}
bool stack::pop(Item& item)
{
	if (top > 0)
	{
		size--;
		item = pitems[--top];
		return true;
	}
	return false;
}
stack& stack::operator=(const stack& st)
{
	if (&st == this)
		return *this;
	delete[] pitems;
	pitems = new Item[st.size];
	for (int i = 0; i < st.size; i++)
		pitems[i] = st.pitems[i];
	size = st.size;
	top = st.top;
	return *this;
}