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

		first = new node{nullptr,elm, nullptr};   
		last = first;
	}
	else {
		//node* aux = first->before;							//first
																// |
		node* nodo;												// |
		node* auxilio;											// v
		nodo = new node{ nullptr,elm, first};         // asd{//0 - elm - aux}   first{nptr - elm - nptr}
		nodo->next = first->before;
		first->before = nodo;

		auxilio = first;
		first = nodo;
		nodo = auxilio;

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
	return 0;
}




