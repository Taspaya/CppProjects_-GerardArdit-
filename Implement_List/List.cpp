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
	
}


void List::push_front(int elm) // push front
{
	node* next = new node{first};
	next = next->before;
	first = new node{nullptr, elm, next};
}


void List::pop_back() {


}
void List::push_back(int elm) 
{
	last = new node{ nullptr, elm, first };
}
/*/
int List::front(){

}
bool List::isEmpty() {


 }
int List::size() {

}
*/



