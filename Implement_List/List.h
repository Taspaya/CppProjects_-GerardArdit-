#pragma once
class List
{
	struct node
	{
		node* before;
		int element;
		node* next;
	};


	node* first; //attr 
	node* last;

public:
	
	List();
	~List();
	List(List &a);

	void pop_front();
	void push_front(int elm);
	void pop_back();
	void push_back(int elm);

	int front();
	bool isEmpty();
	int size();
};

