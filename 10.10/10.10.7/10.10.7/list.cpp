#include "list.h"
void list::insert(int data)
{
	if (!isFull())
	{
		Node* oldfirst = first;
		Node* temp = new Node;
		temp->data = data;
		temp->next = oldfirst;
		first= temp;
		total++;
	}
	else
		return;
}
bool list::del(int data)
{
	if (!isEmpty())
	{
		Node* temp;
		for (temp = first; temp != NULL && temp->next->data != data; temp = temp->next);
		if (temp == NULL) return false;
		Node* old;
		old = temp->next;
		temp->next = old->next;
		temp = NULL;
		total--;
		return true;
	}
	return false;
}
bool list::isEmpty() const
{
	return total == 0;
}
bool list::isFull() const
{
	return total == LIMIT;
}
void list::reverse() const
{
	for (Node* temp = first; temp != NULL; temp = temp->next)
		std::cout << temp->data << " ";
}