#include <list>
#include <iostream>
#include <queue>
#include <string>
#include <deque>



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
	//printamos la lista
	for (int i = 0; i < lista.size(); i++) {

		std::cout << lista.front() << std::endl;
		lista.pop_front();
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
	std::priority_queue<int> dequeue;
	std::deque<int> queue;

	std::list<int> lista1(l1);

	int size1 = lista1.size();

	// mete toda la lista en la queue
	for (int i = 0; i < size1; i++) {
		int aux;
		aux = lista1.front();
		lista1.pop_front();
		dequeue.push(aux);
	}


	//recorremos la deque y la metemos en la queue
	for (int i = 0; i < dequeue.size(); i++) {
		int aux;
		aux = dequeue.top();
		dequeue.pop();
		queue.push_front(aux);
	}
	
	//recorremos la deque y la metemos en la queue

	// guardamos el valor anterior en aux, si la pos actual == aux, eleminas el elemento [i]
	int aux = queue.front();
	for (int i = 0; i < queue.size(); i++) {

		if (queue[i] == aux) {		
			queue.erase(queue.begin() +i);
			//queue.erase(queue.begin() + i - 1);
		}
		else
		{
			aux = queue[i];
		}
	}

	// vuidem l1

	for (int i = 0; i < l1.size(); i++) {

		l1.pop_front();
	}

	// Copiamos la queue en otra list y la devolvemos

	for (int i = 0; i < queue.size(); i++) {
		int aux;
		aux = queue.front();
		l1.push_front(aux);
	}
	
	return l1;

}

std::list<int> removeElement(std::list<int> l1, int num) {

	std::list<int> lista;
	std::priority_queue<int> dequeue;
	std::deque<int> queue;

	std::list<int> lista1(l1);

	int size1 = lista1.size();

	// mete toda la lista en la queue
	for (int i = 0; i < size1; i++) {
		int aux;
		aux = lista1.front();
		lista1.pop_front();
		dequeue.push(aux);
	}


	//recorremos la deque y la metemos en la queue
	for (int i = 0; i < dequeue.size(); i++) {
		int aux;
		aux = dequeue.top();
		dequeue.pop();
		queue.push_front(aux);
	}

	//recorremos la deque y la metemos en la queue

	// guardamos el valor anterior en aux, si la pos actual == aux, eleminas el elemento [i]
	for (int i = 0; i < queue.size(); i++) {

		if (queue[i] == num) {
			queue.erase(queue.begin() + i);
			//queue.erase(queue.begin() + i - 1);
		}
	}

	// vuidem l1

	for (int i = 0; i < l1.size(); i++) {

		l1.pop_front();
	}

	// Copiamos la queue en otra list y la devolvemos

	for (int i = 0; i < queue.size(); i++) {
		int aux;
		aux = queue.front();
		l1.push_front(aux);
	}

	return l1;
	
}

bool palindrom(std::list<int> &l1) {

	int half = l1.size() / 2;
	int count = 0;

	for (int i = 0; i < half; i++) {
		
		if (l1.begin() == l1.end()) {
			count++;
			l1.pop_back();
			l1.pop_front();
		}
		else
		{
			return false;
		}


	}

	if (count == half)
		return true;


}

void main() {

	std::list<int> lista1{ 5,4,3,2,1 };
	std::list<int> lista2{ 9,8,7,6,5 };

	superMerge(lista1, lista2);


}