#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap{
public:
	DiamondTrap();
	DiamondTrap(DiamondTrap const &scr);
	DiamondTrap(std::string name);
	~DiamondTrap();
	
	DiamondTrap	&operator=(DiamondTrap const &src);
	void		whoAmI();

private:
	std::string _name;
};

#endif