#pragma once
#include<iostream>
using namespace std;
class Fire
{
public:
	void PrimaryMove();
	void SecondaryMove();
	void ThirdMove();
	int GetHealth();
	void SetHealth(int newHealth);
	int GetAttackPower() { return attackPower;  }
protected:
	int Health;
	int Mana;
	int Speed;
	int attackPower;
	int Defend;
	

};
class Charmander : public Fire {
public:

	Charmander();
	~Charmander();
	

};
class Vulpix : public Fire {
public:
	Vulpix();
	~Vulpix();
	

};
class Arcanine : public Fire {
public:
	Arcanine();
	~Arcanine();
	


};
class Flareon : public Fire {
public:
	Flareon();
	~Flareon();
	
};
