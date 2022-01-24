#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>
# include <string>

class ClapTrap {
public:
	ClapTrap();
	ClapTrap(ClapTrap const &src);
	ClapTrap( std::string name );
	~ClapTrap();

	ClapTrap		&operator=(ClapTrap const &src);
	
	void	attack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

private:
	std::string		_name;
	unsigned int	_hitPoints;//PV
	unsigned int	_energyPoints;//PP
	unsigned int	_attack_Damage;//PV lost
};

#endif