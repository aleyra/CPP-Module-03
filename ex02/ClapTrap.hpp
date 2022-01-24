#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>
# include <string>

class ClapTrap {
public:
	ClapTrap( std::string name );
	ClapTrap();
	~ClapTrap();

	void			attack(std::string const & target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
	// std::string		getName();
	// void			setName(std::string name);
	// unsigned int	getHitPoints();
	// void			setHitPoints(unsigned int hp);
	// unsigned int	getEnergyPoints();
	// void			setEnergyPoints(unsigned int ep);
	// unsigned int	getAttackDamage();
	// void			setAttackDamage(unsigned int ad);

protected:
	std::string		_name;
	unsigned int	_hitPoints = 100;//PV
	unsigned int	_energyPoints = 50;//PP
	unsigned int	_attack_Damage = 20;//PV lost
};

#endif