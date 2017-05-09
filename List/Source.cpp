#include <conio.h>
#include <list>
#include <algorithm>


void main() {

	std::list<int> mylist;
	std::list<int>::iterator it1, it2;

	for (int i = 1; i < 10; ++i) mylist.push_back(i * 10);

	it1 = it2 = mylist.begin();

	std::advance(it2, 6);
	++it1;


	mylist.erase(it1);

}