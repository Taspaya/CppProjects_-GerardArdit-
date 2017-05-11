#include <list>
#include <iostream>
#include <queue>
#include <string>



std::list<int> superMerge(std::list<int> l1, std::list<int> l2) {

	std::list<int> lista;
	std::priority_queue<int> queue;
	
	std::list<int> lista1(l1);
	int size1 = lista1.size();
	std::list<int> lista2(l2);
	int size2 = lista2.size();


	// mete toda la lista 1 en la queue
	for (int i = 0; i < size1; i++) {
		int aux;
		aux = lista1.front();
		lista1.pop_front();
		queue.push(aux);
	}

	// mete toda la lista 2 en la queue
	for (int i = 0; i < size2; i++) {
		int aux;
		aux = lista2.front();
		lista2.pop_front();
		queue.push(aux);
	}
	// mete toda la queue en la lista ordenada
	for (int i = 0; i < queue.size(); i++) {

		int aux; 
		aux = queue.top();
		queue.pop();
		lista.push_back(aux);
	}

	return lista;
}

std::list<int> change(std::list<int> l1) {

	int first = l1.front();
	int last = l1.back();

	l1.pop_back();
	l1.pop_front();
	l1.push_back(first);
	l1.push_back(last);

	return l1;
}

int getElementPos(std::list<int> l1, int pos) {

	for (int i = 0; i < pos; i++) {
		l1.pop_front();
	}
	return l1.front();
}

std::list<int> removeDuplicates(std::list<int> l1) {

	std::list<int> lista;
	std::priority_queue<int> queue;

	std::list<int> lista1(l1);
	int size1 = lista1.size();

	// mete toda la lista en la queue
	for (int i = 0; i < size1; i++) {
		int aux;
		aux = lista1.front();
		lista1.pop_front();
		queue.push(aux);
	}

}


void main() {




}