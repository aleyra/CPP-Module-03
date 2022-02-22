#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	std::cout << "Construction of a ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src){
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attack_Damage = src._attack_Damage;
}

ClapTrap::ClapTrap( std::string name ){
	std::cout << "Construction of a ClapTrap called " << name << std::endl;
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attack_Damage = 0;
}

ClapTrap::~ClapTrap(){
	std::cout << "Destruction of a ClapTrap" << std::endl;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const &src){
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attack_Damage = src._attack_Damage;
	return (*this);
}

void	ClapTrap::attack(std::string const & target){

	if (this->_energyPoints > 0 && this->_hitPoints > 0){
		std::cout << "ClapTrap " << this->_name << " attack " << target
			<< ", causing " << this->_attack_Damage << " points of damage!" << std::endl;
		this->_energyPoints--;
		std::cout << "\tIt has " << this->_energyPoints << " energy points left."  << std::endl;
	}
	else
		std::cout << "Nothing happen because " << this->_name
			<< " has 0 energy point or has 0 hit point." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount){
	std::cout << "ClapTrap " << this->_name << " take " << amount
		<< " points of damage!" << std::endl;
	this->_hitPoints -= amount;
	std::cout << "\tIt has " << this->_hitPoints << " left." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (this->_energyPoints > 0 && this->_hitPoints > 0){
		std::cout << "ClapTrap " << this->_name << " is repaired with "
			<< amount << " points." << std::endl;
		this->_hitPoints += amount;
		std::cout << "\tIt has " << this->_hitPoints << " left." << std::endl;
	}
	else
		std::cout << "Nothing happen because " << this->_name
			<< " has 0 energy point or has 0 hit point." << std::endl;
}
