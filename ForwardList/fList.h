#pragma once
class fList
{

	struct node
	{
		
		int value;
		node* after;
	};

	node* first;

public:
	fList();
	~fList();

	void push_front(int a);
	int front();
	void pop_front();
	void insert_after(int a, int b);
	void erase_after(int a);
	bool isEmpty();
	int size();
	void shiftRight();

};

