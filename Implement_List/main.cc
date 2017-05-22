#include <stack>
#include <iostream>
#include <deque>
#include <queue>
#include <algorithm>

#include "List.h"


void main() {

	int mida;
	List a; //crida al constructor per defecte

	a.push_front(5);

	a.push_front(10);

	a.push_front(20);

	mida = a.size();

	a.pop_back();

	mida = a.size();
	 
}