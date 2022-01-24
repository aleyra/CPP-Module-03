#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap: public FragTrap , public ScavTrap{
public:
	DiamondTrap();
	DiamondTrap(DiamondTrap const &scr);
	DiamondTrap(std::string name);
	~DiamondTrap();
	
	DiamondTrap	&operator=(DiamondTrap const &src);

	void	whoAmI();
	void	attack(std::string const & target);
	void	display();
private:
	std::string _name;
};

#endif