#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name){
	std::cout << "Construction of a ScavTrap called " << name << std::endl;
	this->setName(name);
}

ScavTrap::~ScavTrap(){
	std::cout << "Destruction of a ScavTrap" << std::endl;
}

void	ScavTrap::attack(std::string const & target){
	unsigned int	ep = this->getEnergyPoints();
	if (this->getEnergyPoints() > 0 && this->getHitPoints() > this->getAttackDamage()){
		std::cout << "ScavTrap " << this->getName() << " attack " << target
			<< ", causing some damage!" << std::endl;
		ep--;
		this->setEnergyPoints(ep);
		std::cout << "\tIt has " << ep << " energy points left."  << std::endl;
	}
	else
		std::cout << "Nothing happen because " << this->getName()
			<< " has 0 energy point or took too much damage." << std::endl;
}

void	ScavTrap::guardGate(){
	std::cout << "ScavTrap " << this->getName() << " has entered in Gate keeper mode"
		<< std::endl;
}
