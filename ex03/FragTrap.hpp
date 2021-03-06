#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"

class FragTrap:virtual public ClapTrap{
public:
	FragTrap(FragTrap const &src);
	FragTrap(std::string name);
	~FragTrap();

	FragTrap &operator=(FragTrap const &src);

	void	highFivesGuys(void);
	void	attack(std::string const & target);

protected:
	FragTrap();

};

#endif