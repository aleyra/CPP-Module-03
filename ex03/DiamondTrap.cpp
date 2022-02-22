#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){
	std::cout << "Construction of a DiamondTrap" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src){
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attack_Damage = src._attack_Damage;
}

DiamondTrap::DiamondTrap(std::string name){
	std::cout << "Construction of a ClapTrap called " << name << std::endl;
	this->_name = name;
	ClapTrap::_name = name + "_clap_name";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attack_Damage = 30;
}

DiamondTrap::~DiamondTrap(){

}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const &src){
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attack_Damage = src._attack_Damage;

	return (*this);
}

void	DiamondTrap::whoAmI(){
	std::cout << "DiamondTrap name is " << this->_name << " and its ClapTrap name is "
		<< ClapTrap::_name << std::endl;
}
