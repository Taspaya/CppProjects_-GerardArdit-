#include <stack>
#include <iostream>
#include <deque>
#include <queue>
#include <algorithm>

#include "fList.h"


void main() {

	fList a;

	a.push_front(5);
	a.push_front(15);
	a.push_front(20);
	a.push_front(50);
	a.push_front(25);
	//a.erase_after(2);
	//a.insert_after(3, 60);
	int mida = a.size();
}