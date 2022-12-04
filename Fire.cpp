#include "Fire.h"
int Fire::GetHealth() {
	return Health;
}
void Fire::SetHealth(int newHealth) {
	Health = newHealth;
}
void Fire::PrimaryMove() {

}
void Fire::SecondaryMove() {

}
void Fire::ThirdMove() {

}
Charmander::Charmander() {
	Health = 300;
	attackPower = 200;
	Mana = 400;
	Defend = 200;
	Speed = 300;
}
Charmander::~Charmander() {

}
Vulpix::Vulpix() {
	Health = 400;
	attackPower = 100;
	Mana = 600;
	Defend = 200;
	Speed = 150;
}
Vulpix :: ~Vulpix() {

}
Arcanine::Arcanine() {
	Health = 200;
	attackPower = 500;
	Mana = 100;
	Defend = 100;
	Speed = 400;
}
Arcanine::~Arcanine() {

}
Flareon::Flareon() {
	Health = 700;
	attackPower = 100;
	Mana = 200;
	Defend = 400;
	Speed = 100;
}
Flareon::~Flareon() {

}