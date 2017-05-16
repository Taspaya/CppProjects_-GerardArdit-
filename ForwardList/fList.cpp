#include "fList.h"



fList::fList()
{
	first = nullptr;
}


void fList::push_front(int a) {

	if (first == nullptr) {

		node* newNode= new node({ a, nullptr });
		first = newNode; 
	}
	else
	{
		node* nuevoNodo = new node({ a, first });
		first = nuevoNodo;
	}

}
void fList::pop_front() {

	node* aux = first->after;

	delete first;

	first = aux;


}
int fList::front() {
	return first->value;
}
bool fList::isEmpty() {

	if (first == nullptr) {
		return true;
	}
	
	return false;
	
}
int fList::size() {

	int count = 0;
	node* aux = first;
	while (aux != nullptr) {

		aux = aux->after;
		count++;
	}
	return count;
}

void fList::insert_after(int a, int b) {

	node* firstu = first;

	for (int i = 0; i < a; ++i) {

		firstu = firstu->after;
	}
	node* aux = firstu->after;

	firstu->after = new node{b, aux};
}

void fList::erase_after(int a) {

	node* firstAux = first;
	node* secondAux = first;
	for (int i = 0; i < a; ++i) {

		firstAux = firstAux->after;
		secondAux = secondAux->after;
	}
		secondAux = secondAux->after;
		secondAux = secondAux->after;
		delete firstAux->after;
		firstAux->after = secondAux;
}
fList::~fList()
{
	delete first;
}
