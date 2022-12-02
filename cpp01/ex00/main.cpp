#include "Zombie.h"

int main() {

	Zombie*	zombie1;

	zombie1 = newZombie("zomzomzom");
	zombie1->Announce();
	randomChump("zombiezombie");

	return 0;
}
