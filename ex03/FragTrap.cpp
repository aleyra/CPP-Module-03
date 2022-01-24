#include "FragTrap.hpp"

FragTrap::FragTrap(){
	std::cout << "Construction of a FragTrap" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attack_Damage = 30;
}

FragTrap::FragTrap(FragTrap const &src){
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attack_Damage = src._attack_Damage;
}

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

FragTrap&	FragTrap::operator=(FragTrap const &src){
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attack_Damage = src._attack_Damage;
	return (*this);
}

void	FragTrap::highFivesGuys(void){
	std::cout << "FragClap " << this->_name << " asks for a high fives and get it"
		<< std::endl;
	this->_energyPoints--;
	std::cout << "\tIt has " << this->_energyPoints << " energy points left."  << std::endl;

}

void	FragTrap::attack(std::string const & target){

	if (this->_energyPoints > 0 && this->_hitPoints > this->_attack_Damage){
		std::cout << "FragTrap " << this->_name << " attack " << target
			<< ", causing some damage!" << std::endl;
		this->_energyPoints--;
		std::cout << "\tIt has " << this->_energyPoints << " energy points left."  << std::endl;
	}
	else
		std::cout << "Nothing happen because " << this->_name
				<< " has 0 energy point or took too much damage." << std::endl;
}
