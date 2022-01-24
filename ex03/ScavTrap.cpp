#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	std::cout << "Construction of a ScavTrap" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attack_Damage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &src){
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attack_Damage = src._attack_Damage;
}

ScavTrap::ScavTrap(std::string name){
	std::cout << "Construction of a ScavTrap called " << name << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attack_Damage = 20;
}

ScavTrap::~ScavTrap(){
	std::cout << "Destruction of a ScavTrap" << std::endl;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const &src){
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attack_Damage = src._attack_Damage;
	return (*this);
}

void	ScavTrap::attack(std::string const & target){
	if (this->_energyPoints > 0 && this->_hitPoints > this->_attack_Damage){
		std::cout << "ScavTrap " << this->_name << " attack " << target
			<< ", causing some damage!" << std::endl;
		this->_energyPoints--;
		std::cout << "\tIt has " << this->_energyPoints << " energy points left."  << std::endl;
	}
	else
		std::cout << "Nothing happen because " << this->_name
			<< " has 0 energy point or took too much damage." << std::endl;
}

void	ScavTrap::guardGate(){
	std::cout << "ScavTrap " << this->_name << " has entered in Gate keeper mode"
		<< std::endl;
}
