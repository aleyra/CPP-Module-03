#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ){
	std::cout << "Construction of a ClapTrap called " << name << std::endl;
	this->_name = name;
}

ClapTrap::~ClapTrap(){
	std::cout << "Destruction of a ClapTrap" << std::endl;
}

void	ClapTrap::attack(std::string const & target){

	if (this->_energyPoints > 0 && this->_hitPoints > this->_attack_Damage){
		std::cout << "ClapTrap " << this->_name << " attack " << target
			<< ", causing some damage!" << std::endl;
		this->_energyPoints--;
		std::cout << "\tIt has " << this->_energyPoints << " energy points left."  << std::endl;
	}
	else
		std::cout << "Nothing happen because " << this->_name
			<< " has 0 energy point or took too much damage." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount){
	std::cout << "ClapTrap " << this->_name << " take " << amount
		<< " points of damage!" << std::endl;
	this->_attack_Damage += amount;
	std::cout << "\tIts amount of damage is " << this->_attack_Damage << "/"
		<< this->_hitPoints << "." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount){
	std::cout << "ClapTrap " << this->_name << " is repaired with "
		<< amount << " points." << std::endl;
	if (this->_attack_Damage < amount)
		this->_attack_Damage = 0;
	else
		this->_attack_Damage -= amount;
	std::cout << "\tIts amount of damage is " << this->_attack_Damage << "/"
		<< this->_hitPoints << "." << std::endl;
}
