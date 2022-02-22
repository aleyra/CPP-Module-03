#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

class ScavTrap:public ClapTrap{
public:
	ScavTrap(ScavTrap const &src);
	ScavTrap(std::string name);
	~ScavTrap();

	ScavTrap &operator=(ScavTrap const &src);

	void	attack(std::string const & target);
	void	guardGate();

protected:
	ScavTrap();

private:

};

#endif