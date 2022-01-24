#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap{
public:
	ScavTrap();
	ScavTrap(ScavTrap const &src);
	ScavTrap(std::string name);
	~ScavTrap();

	ScavTrap &operator=(ScavTrap const &src);

	void	attack(std::string const & target);
	void	guardGate();

private:

};

#endif