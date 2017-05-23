#include <stack>
#include <iostream>
#include <deque>
#include <queue>
#include <algorithm>

#include "List.h"


void main() {

	int mida;
	List a; //crida al constructor per defecte

	a.push_front(1);
	a.push_front(2);
	a.push_front(3);
	a.push_front(4);
	a.push_front(5);

	//a.shift_right();
	//a.shift_left();
	a.rotate_right();
}