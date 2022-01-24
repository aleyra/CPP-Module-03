#include "DiamondTrap.hpp"

int	main(){
	std::string	claptrap1("bouh");
	// std::string	scavtrap1("bidule");//
	// std::string	fragtrap1("machin");//
	std::string	diatrap1("chose");
	// ClapTrap	clap1(claptrap1);//
	// ScavTrap	scav1(scavtrap1);//
	// FragTrap	frag1(fragtrap1);//
	DiamondTrap	dia1(diatrap1);

	// std::cout << "\033[34m\tfrom ex00\033[0m" << std::endl << std::endl;
	// clap1.attack(scavtrap1);
	// scav1.takeDamage(3);
	// scav1.beRepaired(2);

	// std::cout << std::endl << "\033[34m\tfrom ex01\033[0m" << std::endl << std::endl; 
	// clap1.attack(scavtrap1);
	// scav1.takeDamage(3);
	// scav1.beRepaired(2);
	// scav1.attack(claptrap1);
	// clap1.takeDamage(5);
	// clap1.beRepaired(10);
	// scav1.guardGate();
	
	// std::cout << std::endl << "\033[34m\tfrom ex02\033[0m" << std::endl << std::endl;
	// clap1.attack(fragtrap1);
	// frag1.takeDamage(3);
	// frag1.beRepaired(2);
	// frag1.attack(claptrap1);
	// clap1.takeDamage(5);
	// clap1.beRepaired(10);
	// frag1.highFivesGuys();

	std::cout << std::endl << "\033[34m\tfor ex03\033[0m" << std::endl << std::endl;
	dia1.whoAmI();
	dia1.attack(claptrap1);
	dia1.takeDamage(0);
	dia1.beRepaired(10);
	dia1.highFivesGuys();
	dia1.guardGate();

	return (0);
}
