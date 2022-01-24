#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name){
	std::cout << "Construction of a ScavTrap called " << name << std::endl;
	this->_name = name;
}

ScavTrap::~ScavTrap(){
	std::cout << "Destruction of a ScavTrap" << std::endl;
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
