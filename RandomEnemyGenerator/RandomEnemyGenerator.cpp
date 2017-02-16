#include <stdio.h>
#include <math.h>
#include <time.h>
#include <iostream>

enum EnemyType{zombie, vampire, ghost, witch};


struct Enemy
{
	EnemyType type;

	std::string name;
	int health;
};

bool operador(Enemy a, Enemy b) {

	if (a.name == b.name) {

		return true;
	}
	else
	{
		return false;
	}
}

void CreateRandomEnemy() {





}


int main(void) {


}