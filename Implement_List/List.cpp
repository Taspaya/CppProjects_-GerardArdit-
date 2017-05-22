#include "List.h"



List::List()  // constructor defecto
{
	first = nullptr;
	last = nullptr;
}

List::List(List &a) { // constructor copia

	node* bFirst;
	bFirst = a.first;

	first = new node{nullptr, bFirst->element, last};

	for (int i = 0; i < a.size() - 1; i++) {
		
		bFirst = bFirst->next;
		push_front(bFirst->element);
		/*int temp = bFirst->element;

		last = new node{ last, temp ,last };*/
	}
}

List::~List() // destructor defecto
{
	delete first;
	delete last;
}

void List::pop_front()
{
	node* aux;
	aux = first->next;

	delete first;
	first = aux;
}

void List::push_front(int elm) // push front
{
	if (first == nullptr) {

		first = new node{ nullptr,elm, nullptr };
		last = first;
	}
	else {

		node* aux = new node{ nullptr, first->element, first->next };
		first = new node{nullptr, elm, aux};
		aux->before = first->next;
	}
}


void List::pop_back() {


}
void List::push_back(int elm) 
{
	last = new node{ nullptr, elm, first };
}

int List::front(){
	return 0;
}
bool List::isEmpty() {

	return true;
 }

int List::size() {
	
	node* bFirst = first;
	int count = 0;

	while (bFirst != nullptr) {
		bFirst = bFirst->next;
		count++;
	}

	return count;
}




