#include <stack>
#include <iostream>
#include <deque>
#include <queue>
#include <algorithm>
/*
std::stack<int>superMerge(std::stack<int> stack1, std::stack<int> stack2) {


	int temp1, temp2;
	std::stack<int> sstack1(stack1);
	std::stack<int> sstack2(stack2);
	//std::stack<int> stack1({ 4,3,2,1 });
	//std::stack<int> stack2({ 9,8,7,6,5 });
	std::stack<int> mergedStack;

	// mirem quin stack es mes gran
	if (sstack1.size() > sstack2.size()) {

		//si 1 es mes gran, iterem sobre el stack 1
		int tam1 = sstack2.size();
		for (int i = 0; i < tam1; i++) {
			
			temp1 = sstack1.top();
			temp2 = sstack2.top();

			if (temp1 > temp2) {

				mergedStack.push(temp1);
				mergedStack.push(temp2);
			}
			else
			{
				mergedStack.push(temp2);
				mergedStack.push(temp1);
			}
			sstack1.pop();
			sstack2.pop();
		}
	}
	else
	{
		//si 2 es mes gran, iterem sobre el stack 2
		int tam2 = sstack1.size();
		for (int i = 0; i < tam2; i++) {
			temp1 = sstack1.top();
			temp2 = sstack2.top();

			if (temp1 > temp2) {

				mergedStack.push(temp1);
				mergedStack.push(temp2);

			}
			else
			{
				mergedStack.push(temp1);
				mergedStack.push(temp2);
			}
			sstack1.pop();
			sstack2.pop();
		}
	}
	return mergedStack;
}


std::stack<int>superMerge2(std::stack<int> stack1, std::stack<int> stack2) {

	std::stack<int> sstack1(stack1);
	std::stack<int> sstack2(stack2);
	std::stack<int> mergedStack1, mergedStack2;

	int size1 = sstack1.size();
	for (int i = 0; i < size1; i++) {
		int temp;
		temp = sstack1.top();
		sstack1.pop();
		mergedStack1.push(temp);
	}
	int size2 = sstack2.size();
	for (int i = 0; i < size2; i++) {
		int temp;
		temp = sstack2.top();
		sstack1.pop();
		mergedStack1.push(temp);
	}
	//comprovant
	int size3 = mergedStack1.size();
	for (int i = 0; i < size3; i++) {
		int temp = 


	}


}*/
/*
bool balancedP(std::stack<char> balance) {

	std::stack<char> balance1(balance);
	int countOpen, countClose;
	int size = balance1.size();
	for (int i = 0; i < size; i++) {

		char aux;
		aux = balance1.top();

		if (aux == '(') {
			countOpen++;
		}
		else
		{
			countClose++;
		}
		balance1.pop();
	}

	if (countClose > countOpen) {
		return true;
	}
	else
	{
		return false;
	}
}*/

/*
void transformToQ(std::stack<int> stack1) {

	std::queue<int> cola;
	std::stack<int> sstack1(stack1);

	int size = sstack1.size();

	for (int i = 0; i <= size - 1; i++) {
		int aux;
		aux = sstack1.top();
		cola.push(aux);
		sstack1.pop();
	}
}
*/




void main() {



}