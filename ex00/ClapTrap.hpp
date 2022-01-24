#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>
# include <string>

class ClapTrap {
public:
	ClapTrap( std::string name );
	~ClapTrap();

	void	attack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

private:
	std::string		_name;
	unsigned int	_hitPoints = 10;//PV
	unsigned int	_energyPoints = 10;//PP
	unsigned int	_attack_Damage = 0;//PV lost
};

#endif