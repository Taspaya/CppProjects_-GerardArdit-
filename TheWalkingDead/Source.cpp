#include <iostream>
#include <string>
#include <ctime>

enum Weapon { FISTS, GUN, SHOTGUN, REVOLVER, SNIPER, MACHINE_GUN, MAX};

class Zombie;


class Player 
{
public:
	Weapon weapon;
	float precision; 
	int life;	
	
	
Player() {
		precision= std::rand() % MAX;
	}

	void attack(Zombie &);

};

Player::Player() : weapon(static_cast <Weapon>(rand() % static_cast <int> (Weapon::MAX))), precision((rand() % 11 / 10.0)), life(100) {}

class Zombie {

public:
	Zombie() {};
	int distanceToPlayer;
	float speed;
	float damage;
	int life;
	void attack;

};

void Player::attack(Zombie &a) {

	//	Si la distancia hasta el jugador es igual o menor que 0
	//	entonces se resta el da�o del zombie a la vida del jugador.En caso
	//	contrario, el zombie adelanta un paso m�s hacia el jugador.
}

void Zombie::attack(Player &z) {



}

Zombie::Zombie() : distanceToPlayer(rand() % 180 + 20), speed(rand() % 20), damage(rand() % 20 / 10.0), life(100) {}

bool IsAlive(){



}

void main() {

	Player p;
	

	
}

