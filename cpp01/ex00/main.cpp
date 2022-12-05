#include "Zombie.hpp"

int main() {

	Zombie*	zombie1;

	zombie1 = newZombie("zomzomzom");
	zombie1->Announce();
	randomChump("zombiezombie");

	delete zombie1;

	return 0;
}
