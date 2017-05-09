#include "myStack.h"



myStack::myStack()
{
	first = nullptr;
}
void myStack::pop() {
	delete first;
 }
void myStack::push(int elm) {
	first = new node({ elm, first });
}
int myStack::front() {}
bool myStack::isEmpty(){}
int myStack::size(){}
myStack myStack::copy(myStack stack){}
myStack myStack::copyArray(int *arr){}
myStack::~myStack(){}
