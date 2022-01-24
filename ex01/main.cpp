#include "ScavTrap.hpp"

int	main(){
	std::string	claptrap1("bouh");
	std::string	scavtrap1("bidule");
	ClapTrap	clap1(claptrap1);
	ScavTrap	scav1(scavtrap1);

	clap1.attack(scavtrap1);
	scav1.takeDamage(3);
	scav1.beRepaired(2);
	scav1.attack(claptrap1);
	clap1.takeDamage(5);
	clap1.beRepaired(10);
	scav1.guardGate();

	return (0);
}
