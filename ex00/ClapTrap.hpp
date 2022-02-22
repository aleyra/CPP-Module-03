#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>
# include <string>

class ClapTrap {
public:
	ClapTrap(ClapTrap const &src);
	ClapTrap( std::string name );
	~ClapTrap();

	ClapTrap		&operator=(ClapTrap const &src);
	
	void	attack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

protected:
	ClapTrap();

private:
	std::string		_name;
	unsigned int	_hitPoints;//PV restants
	unsigned int	_energyPoints;//PP
	unsigned int	_attack_Damage;//degats du perso/trap
};

#endif