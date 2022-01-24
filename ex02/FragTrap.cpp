#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name){
	std::cout << "Construction of a FragTrap called " << name << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attack_Damage = 30;
}

FragTrap::~FragTrap(){
		std::cout << "Destruction of a FragTrap" << std::endl;
}

void	FragTrap::highFivesGuys(void){
	std::cout << "FragClap " << this->_name << " asks for a high fives and get it"
		<< std::endl;
	this->_energyPoints--;
	std::cout << "\tIt has " << this->_energyPoints << " energy points left."  << std::endl;

}

void	FragTrap::attack(std::string const & target){

	if (this->_energyPoints > 0 && this->_hitPoints > this->_attack_Damage){
		std::cout << "CFragTrap " << this->_name << " attack " << target
			<< ", causing some damage!" << std::endl;
		this->_energyPoints--;
		std::cout << "\tIt has " << this->_energyPoints << " energy points left."  << std::endl;
	}
	else
		std::cout << "Nothing happen because " << this->_name
				<< " has 0 energy point or took too much damage." << std::endl;
}
