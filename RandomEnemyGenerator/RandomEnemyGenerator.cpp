#include <stdio.h>
#include <math.h>
#include <time.h>
#include <iostream>
#include <ctime>
#include <string>

enum EnemyType{ZOMBIE, VAMPIRE, GHOST, WITCH, MAX};


struct Enemy
{
	EnemyType type;

	std::string name;
	int health;

	std::string getEnemyTypeString()
	{
		switch (type) {
		case EnemyType::ZOMBIE: return "zombie";
		case EnemyType::VAMPIRE: return "vampire";
		case EnemyType::GHOST: 	return "ghost";
		case EnemyType::WITCH: return "werewolf";
		case EnemyType::MAX: return "max";
		default: return " ";
		}
	}


};

bool operador(Enemy a, Enemy b) {

	return a.name == b.name && a.type == b.type;

	/*if (a.name == b.name && a.type == b.type) {           ESTA BE IGUALMENT

		return true;
	}
	else
	{
		return false;
	}*/
}

Enemy CreateRandomEnemy() {

	const int MAX_LIFE = 500;
	const std::string NAMES[]{
		"Gertrudiz",
		"Pancracia",
		"Anacleto",
		"Hipolito",
		"Eustaquio",
		"Fulgencia"
	};

	return Enemy{
		static_cast <EnemyType>(rand() % static_cast<int>(EnemyType::MAX)),
		NAMES[rand() % (sizeof NAMES / sizeof std::string)], rand() % MAX_LIFE
	};
}


int main(void) {

	srand(static_cast<unsigned>(time(nullptr)));

	const int MAX_ENEMIES{ 5 };
	Enemy enemies[MAX_ENEMIES];

	{
		int i = 0;
		while (i < MAX_ENEMIES) {

			enemies[i] = CreateRandomEnemy();
			int j = i - 1;
			while (j >= 0)
			{
				if (enemies[i] == enemies[j]) {
					--i;
					break;

				}
			}
		}


	}


	std::cout << "List of enemies:\n";

	for (auto &e : enemies) {

		std::cout << e.name << "is a" << e.getEnemyTypeString() << "whose life is" << e.health << std::endl;
 
	}



}