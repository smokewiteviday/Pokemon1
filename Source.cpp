#include "Fire.h"
#include<iostream>
using namespace std;
int main() {
	Charmander charmander;
	cout << charmander.GetHealth()<<endl;
	charmander.SetHealth(5000);
	cout << charmander.GetHealth();
}