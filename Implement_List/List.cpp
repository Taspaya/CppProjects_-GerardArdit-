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
// OK
void List::pop_front()
{
	node* aux;
	aux = first->next;

	delete first;
	first = aux;
	first->before = nullptr;
}
// OK
void List::push_front(int elm) // push front
{
	node* aux = new node{};
	if (first == nullptr) {

		first = last = new node{ aux,elm, nullptr };
	}
	else {

		aux = new node{ nullptr, first->element, first->next };
		first = new node{nullptr, elm, aux};
		aux->before = first->next;
	}
}
// OK
void List::pop_back() {

	node* aux = first;

	int a = size() - 2;
	for (int i = 0; i < a; i++) {

		aux = aux->next;
	}

	aux->next = nullptr;
	delete last;
	last = aux;

}
// OK
void List::push_back(int elm) 
{
	
	node* aux = first;

	int a = size() - 1;
	for (int i = 0; i < a; i++) {

		aux = aux->next;
	}
	node* nuevo = new node{ aux, elm, nullptr };
	aux->next = nuevo;
	last = nuevo;
}
// OK
int List::front(){
	return first->element;
}
// OK
bool List::isEmpty() {

	if (first == nullptr)
		return true;

	return false; 
 }
// OK
int List::size() {
	
	node* bFirst = first;
	int count = 0;

	while (bFirst != nullptr) {
		bFirst = bFirst->next;
		count++;
	}

	return count;
}
// OK
void List::shift_right() {

	node* bFirst = first;
	node* aux;
	int a = size() - 1;
	for (int i = 0; i < a; i++) {

		bFirst = bFirst->next;
	}
	int elm = bFirst->element;

	pop_back();
	push_front(elm);
}

void List::shift_left() {

	int elm = first->element;
	first = first->next;
	first->before = nullptr;
	push_back(elm);

}


