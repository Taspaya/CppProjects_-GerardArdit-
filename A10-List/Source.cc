#include <list>
#include <iostream>
#include <queue>
#include <string>
#include <deque>


// Ok
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
	int size = queue.size();
	for (int i = 0; i < size; i++) {

		int aux; 
		aux = queue.top();
		queue.pop();
		lista.push_back(aux);
	}	
	return lista;
}
// Ok
std::list<int> change(std::list<int> l1) {

	std::list<int> lista(l1);
	int first = lista.front();
	int last = lista.back();

	lista.pop_back();
	lista.pop_front();
	lista.push_back(first);
	lista.push_front(last);

	return lista;
}
// Ok
int getElementPos(std::list<int> l1, int pos) {
	// fer-ho amb iterador
	for (int i = 0; i < pos; i++) {
		l1.pop_front();
	}
	int a = l1.front();
	return a;
}
// Ok
std::list<int> removeDuplicates(std::list<int> l1) {

	std::list<int> listabuena;
	std::list<int> lista;
	std::priority_queue<int> dequeue;
	std::deque<int> queue;

	std::list<int> lista1(l1);

	int size1 = lista1.size();
	// mete toda la lista en la dequeue
	for (int i = 0; i < size1; i++) {
		int aux;
		aux = lista1.front();
		lista1.pop_front();
		dequeue.push(aux);
	}
	//recorremos la deque y la metemos en la queue
	int medida = dequeue.size();
	for (int i = 0; i < medida; i++) {
		int aux;
		aux = dequeue.top();
		dequeue.pop();
		queue.push_front(aux);
	}
	// guardamos el valor anterior en aux, si la pos actual == aux, eleminas el elemento [i]
	int aux = queue.front();
	//MAL A PARTIR D'AQUI DDD:
	for (int i = 1; i < queue.size(); i++) {

		if (aux == queue[i]) {		
			queue.erase(queue.begin() +i);
			aux = queue[i];
		}
		else
		{
			aux = queue[i];
		}
	}
	
	// Copiamos la queue en otra list y la devolvemos
	int mesura = queue.size();
	for (int i = 0; i < mesura; i++) {
		int aux;
		aux = queue.front();
		queue.pop_front();
		listabuena.push_front(aux);
	}
	
	return listabuena;

}
// Ok
std::list<int> removeElement(std::list<int>a, int num) {
	
	int size = a.size();
	std::deque<int>helper;
	for (int i = 0; i < size; i++) {
		helper.emplace_front(a.front());
		a.pop_front();
	}
	int size2 = helper.size();
	for (int i = 0; i < helper.size(); i++) {
		if (helper[i] == num) {
			helper.erase(helper.begin() + i);
			i--;
		}
	}
	int size3 = helper.size();
	for (int i = 0; i < size3; i++) {
		a.push_front(helper.front());
		helper.pop_front();
	}
	std::list<int>l1(a);
	return l1;
}
// Ok
bool palindrome(std::list<int> &l1) {

	int half = l1.size() / 2;
	int count = 0;

	for (int i = 0; i < half; i++) {
		
		int first = l1.front();
		int last = l1.back();

		if (first == last) {
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
// Ok
void printList(std::list<int> l1) {


	int size6 = l1.size();
	for (int i = 0; i < size6; i++) {

		std::cout << l1.front() << std::endl;
		l1.pop_front();
	}
}



void main() {

	std::list<int> tonta1{ 1,2,3,4,5,6,3,2};
	

	std::list<int> palindrom{ 1,2,3,4,4,3,2,1 };

	std::cout << "Remove Duplicate " << std::endl;
	printList(removeDuplicates(tonta1)); // Remove Duplicate

	std::cout << std::endl;
	std::cout << "Remove Element 2 " << std::endl;
	printList(removeElement(tonta1, 2)); // Remove Element

	bool a = palindrome(palindrom);	// IsPalindrom

	}