#pragma once
class Grass
{
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
class Snivy :public Grass {
	Snivy();
	~Snivy();
};
class Grotle :public Grass {
	Grotle();
	~Grotle();
};
class Bayleef :public Grass {
	Bayleef();
	~Bayleef();
};
class Leafeon :public Grass {
	Leafeon();
	~Leafeon();
};

