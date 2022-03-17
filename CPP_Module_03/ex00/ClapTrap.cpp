/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 01:20:07 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/16 19:44:34 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//	Default Constructor
ClapTrap::ClapTrap(void):_name("CL4P-TP"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << ClapTrap::_name << ": Default constructor called" << std::endl;
}

//	Destructor
ClapTrap::~ClapTrap(void) {
	std::cout << "Destructor called" << std::endl;
}

//	Copy Cosntructor
ClapTrap::ClapTrap(ClapTrap const &obj) {
	std::cout << "Copy Constructor called" << std::endl;
	*this = obj;
}

//	Object Assign the variables
ClapTrap &ClapTrap::operator=(ClapTrap const &obj) {
	this->_name = obj._name;
	this->_hitPoints = obj._hitPoints;
	this->_energyPoints = obj._energyPoints;
	this->_attackDamage = obj._attackDamage;
	return (*this);
}

//	Attack function
void ClapTrap::attack(const std::string& target) {
	if ((ClapTrap::_hitPoints > 0) && (ClapTrap::_energyPoints > 0)) {
		std::cout << ClapTrap::_name
			<< " attacks " << target << ", causing "
			<< ClapTrap::_attackDamage << " points of damage!"
			<< std::endl;
		ClapTrap::_energyPoints--;
	} else if ((ClapTrap::_hitPoints > 0) && (ClapTrap::_energyPoints <= 0)) {
		std::cout << ClapTrap::_name << " has no energy, can't attack..." << std::endl;
	} else {
		std::cout << ClapTrap::_name << " is dead already, can't attack..." << std::endl;
	}
}

//	Suffer Damage function
void ClapTrap::takeDamage(unsigned int amount) {
	if (ClapTrap::_hitPoints > 0){
		std::cout << ClapTrap::_name
			<< " suffered " << amount
			<< " points of damage!" << std::endl;
		ClapTrap::_hitPoints -= amount;
	} else {
		std::cout << "Stop hitting him!!! he's already dead!!" << std::endl;
		ClapTrap::_hitPoints -= amount;
	}
}

//	Heal function
void ClapTrap::beRepaired(unsigned int amount) {
	if (ClapTrap::_energyPoints > 0) {
		std::cout << ClapTrap::_name
			<< " recovered " << amount
			<< " points of HP!" << std::endl;
		ClapTrap::_hitPoints += amount;
		ClapTrap::_energyPoints--;
	} else {
		std::cout << "There is not enough energy to repair him..." << std::endl;
	}
}
