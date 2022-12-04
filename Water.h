#pragma once
class Water
{
public:
	void PrimaryMove();
	void SecondaryMove();
	void ThirdMove();
	int GetHealth();
	void SetHealth(int newHealth);
	int GetAttackPower() { return attackPower; }
protected:
	int Health;
	int Mana;
	int Speed;
	int attackPower;
	int Defend;
	
};
class Squirtle :public Water {
public:
	Squirtle();
	~Squirtle();
};
class Golduck :public Water {
public:
	Golduck();
	~Golduck();

};
class Vaporeon :public Water {
public:
	Vaporeon();
	~Vaporeon();
};
class Horsea :public Water {
	Horsea();
	~Horsea();
};

