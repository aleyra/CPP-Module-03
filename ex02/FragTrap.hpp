#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"

class FragTrap:public ClapTrap{
public:
	FragTrap(std::string name);
	~FragTrap();

	void	highFivesGuys(void);
	void	attack(std::string const & target);

protected:
	unsigned int	_hitPoints = 100;
	unsigned int	_energyPoints = 100;
	unsigned int	_attackDamage = 30;
};

#endif