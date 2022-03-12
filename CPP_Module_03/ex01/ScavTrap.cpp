/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 22:19:27 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/12 01:02:11 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
	ScavTrap::_name = "SC4V-TP";
	ScavTrap::_hitPoints = 100;
	ScavTrap::_energyPoints = 50;
	ScavTrap::_attackDamage = 20;
	std::cout << ScavTrap::_name << ": Default constructor called." << std::endl;
}

ScavTrap::~ScavTrap(void) {
	std::cout << ScavTrap::_name << ": Destructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &obj): ClapTrap(obj) {
	std::cout << ScavTrap::_name << ": Copy constructor called" << std::endl;
	*this = obj;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &obj) {
	this->_name = obj._name;
	this->_hitPoints = obj._hitPoints;
	this->_energyPoints = obj._energyPoints;
	this->_attackDamage = obj._attackDamage;
	return (*this);
}

void		ScavTrap::attack(const std::string& target) {
	if ((ScavTrap::_hitPoints > 0) && (ScavTrap::_energyPoints > 0)) {
		std::cout << ScavTrap::_name
			<< " Hit " << target << ", dealing "
			<< ScavTrap::_attackDamage << " points of damage!" << std::endl;
		ScavTrap::_energyPoints--;
	} else if ((ScavTrap::_hitPoints > 0) && (ScavTrap::_energyPoints <= 0)) {
		std::cout << ScavTrap::_name << " I lost my arms, but still here!" << std::endl;
	} else {
		std::cout << ScavTrap::_name << " died, logically, can't attack..." << std::endl;
	}
}

//	Suffer Damage function
void		ScavTrap::takeDamage(unsigned int amount) {
	if (ScavTrap::_hitPoints > 0){
		std::cout << ScavTrap::_name
			<< " was inflicted " << amount
			<< " points of damage!" << std::endl;
		ScavTrap::_hitPoints -= amount;
	} else {
		std::cout << "Flicked and stoped working... at least i think so..." << std::endl;
		ScavTrap::_hitPoints -= amount;
	}
}

//	Heal function
void		ScavTrap::beRepaired(unsigned int amount) {
	if (ScavTrap::_energyPoints > 0) {
		std::cout << ScavTrap::_name << " glued some parts "
		<< amount << " points of HP!" << std::endl;
		ScavTrap::_hitPoints += amount;
		ScavTrap::_energyPoints--;
	} else {
		std::cout << "Did not found anymore parts..." << std::endl;
	}
}

void		ScavTrap::guardGate(void) {
	std::cout << ScavTrap::_name << "Shouts:" << std::endl;
	std::cout << "- YOUU shall not ... PASSSS!!!!" <<std::endl;
	std::cout << "Assuming the Gate keeper Stance." << std::endl;
}