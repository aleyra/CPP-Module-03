#include "ClapTrap.hpp"

int	main(){
	std::string	name1("bouh");
	std::string	name2("machin");
	ClapTrap	trap1(name1);
	ClapTrap	trap2(name2);

	trap1.attack(name2);
	trap2.takeDamage(3);
	trap2.beRepaired(2);

	return (0);
}
