#include "myStack.h"



myStack::myStack()
{
	first = nullptr;
}

void myStack::pop() {

	node* aux = node.next;

	delete &first;

	first = aux;

 }

void myStack::push(int elm) {
	first = new node({ elm, first }); //crea un nou objecte 
}

int myStack::front() {
	
	return node.first.element;		 // retorna el valor int "element" del struct node de l'objecte First

}

bool myStack::isEmpty(){

	if (first.next == nullptr) { // Si el punter *next de l'objecte first no apunta enlloc, significa que l'array està buit
		
		return true;
	}
	else
	{
		return false;
	}

}

int myStack::size(){


}


myStack myStack::copy(myStack stack){

	myStack a(stack);

	return a;

}

myStack myStack::copyArray(int *arr, int size){

	myStack a;
	int aux;
	for (int i = 0; i < size; i++) {		
		aux = arr[i];
		a.push(aux);
	}

}


myStack::~myStack(){}
