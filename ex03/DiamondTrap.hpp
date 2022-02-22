#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap: public FragTrap , public ScavTrap{
public:
	DiamondTrap(DiamondTrap const &scr);
	DiamondTrap(std::string name);
	~DiamondTrap();
	
	DiamondTrap	&operator=(DiamondTrap const &src);

	void	whoAmI();
	using 	ScavTrap::attack;

protected:
	DiamondTrap();

private:
	std::string _name;
	// using	FragTrap::_hitPoints;
	// using	ScavTrap::_energyPoints;
	// using	FragTrap::_attack_Damage;
};

#endif