#include <iostream>
#include <string>
#include <ctime>

enum Weapon { FISTS, GUN, SHOTGUN, REVOLVER, SNIPER, MACHINE_GUN, MAX};


class Zombie;


class Player              // AIXÒ NORMALMENT HAURIA D'ANAR AL FITXER .h
{
public:
	Weapon weapon;
	float precision;
	int life;
	int attack;
	Player() :																								  // CONSTRUCTOR	(sempre ha de ser públic)
		weapon(static_cast<Weapon>(rand() % static_cast<int>(Weapon::MAX))),								 //
		precision((rand() % 10 / 10.f)),																	//
		life(100) {};																					   //
																										  //
																									     //
	Player(const Weapon &t_weapon, float t_precision, int t_life) :										// DESTRUCTOR
		weapon(t_weapon),
		precision(t_precision),
		life(t_life) {};


	void attack(Zombie &zombie) const;
	bool isAlive() const;
};

//Player::Player() : weapon(static_cast <Weapon>(rand() % static_cast <int> (Weapon::MAX))), precision((rand() % 11 / 10.0)), life(100){}

class Zombie {

public:
	int distanceToPlayer;	
	float speed;
	float damage;
	int life;
	
	Zombie():
		distanceToPlayer(rand() % 180 + 20),
		speed((rand() % 20)), 
		damage(rand() % 20 / 10.f), life(100){}

	void attack(Player &);

};

//Zombie::Zombie() : distanceToPlayer(rand() % 180 + 20), speed(rand() % 20), damage(rand() % 20 / 10.0), life(100) {}

void Player::attack(Zombie &zombie)
{

	zombie.life -= static_cast<int>(static_cast<int>(weapon)* precision);
	/*if (zombie.distanceToPlayer <= 0){
		zombie.life = zombie.life - (static_cast<int>(weapon)*precision);
	}*/
}

bool Player::isAlive() const
{
	return life > 0;
}

void Zombie::attack(Player &z) {
	

	if (z.attack <= 0) {
		z.life = z.life - (static_cast<int>(Weapon)*precision);
	}

}



bool IsAlive(){



}

void main() {

	srand(static_cast<unsigned>(time(nullptr)));

	Player pepito;
	const int MAX_ZOMBIES{ 10 };
	Zombie zombies[MAX_ZOMBIES];

	std::cout << "Player \n\tinitial life:" << pepito.life << ", weapon: " << pepito.weapon << ", precision:" << pepito.precision << std::endl;

	std::cout << "ZOMBIES ARE COMING!" << std::endl;

	bool zombiesAreAlive;
	do {
		zombiesAreAlive = false;
		
		for (int i = 0; i < MAX_ZOMBIES; ++i) 
		{
			std::cout << "Zombie[" << i << "] \n\tlife:" << zombies[i].life << ", distance: " << zombies[i].distanceToPlayer << ", speed";



		}






	} while (pepito.isAlive() && zombiesAreAlive);

	if (zombiesAreAlive)
		std::cout << "GAME OVER";
	

	
	}

	



