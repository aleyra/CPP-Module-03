#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(){
	std::string	claptrap1("bouh");
	std::string	scavtrap1("bidule");
	std::string	fragtrap1("machin");
	ClapTrap	clap1(claptrap1);
	ScavTrap	scav1(scavtrap1);
	FragTrap	frag1(fragtrap1);

	std::cout << "\033[34m\tfrom ex00\033[0m" << std::endl << std::endl;
	clap1.attack(scavtrap1);
	scav1.takeDamage(3);
	scav1.beRepaired(2);

	std::cout << std::endl << "\033[34m\tfrom ex01\033[0m" << std::endl << std::endl; 
	clap1.attack(scavtrap1);
	scav1.takeDamage(3);
	scav1.beRepaired(2);
	scav1.attack(claptrap1);
	clap1.takeDamage(5);
	clap1.beRepaired(10);
	scav1.guardGate();
	
	std::cout << std::endl << "\033[34m\tfor ex02\033[0m" << std::endl << std::endl;
	clap1.attack(fragtrap1);
	frag1.takeDamage(3);
	frag1.beRepaired(2);
	frag1.attack(claptrap1);
	clap1.takeDamage(5);
	clap1.beRepaired(10);
	frag1.highFivesGuys();

	return (0);
}
