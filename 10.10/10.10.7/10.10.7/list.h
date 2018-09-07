#pragma once
#ifndef LIST
#define LIST
#include <iostream>
struct Node
{
	int data;
	Node* next;
};
class list
{
private:
	static const int LIMIT = 25;
	Node* first;
	int total;
public:
	list()
	{
		first = NULL;
	}
	void insert(int data);
	bool del(int data);
	bool isEmpty() const;
	bool isFull() const;
	void reverse() const;
};
#endif // !LIST
