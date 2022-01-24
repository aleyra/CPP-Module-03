#include "ScavTrap.hpp"

int	main(){
	std::string	claptrap1("bouh");
	std::string	scavtrap1("bidule");
	ClapTrap	clap1(claptrap1);
	ScavTrap	scav1(scavtrap1);

	std::cout << "\033[34m\tfrom ex00\033[0m" << std::endl << std::endl;
	clap1.attack(scavtrap1);
	scav1.takeDamage(3);
	scav1.beRepaired(2);
	
	std::cout << std::endl << "\033[34m\tfor ex01\033[0m" << std::endl << std::endl; 
	clap1.attack(scavtrap1);
	scav1.takeDamage(3);
	scav1.beRepaired(2);
	scav1.attack(claptrap1);
	clap1.takeDamage(5);
	clap1.beRepaired(10);
	scav1.guardGate();

	return (0);
}
