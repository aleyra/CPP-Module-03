#include "FragTrap.hpp"

int	main(){
	std::string	claptrap1("bouh");
	std::string	fragtrap1("bidule");
	ClapTrap	clap1(claptrap1);
	FragTrap	frag1(fragtrap1);

	clap1.attack(fragtrap1);
	frag1.takeDamage(3);
	frag1.beRepaired(2);
	frag1.attack(claptrap1);
	clap1.takeDamage(5);
	clap1.beRepaired(10);
	frag1.highFivesGuys();

	return (0);
}
