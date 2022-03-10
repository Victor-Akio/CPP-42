/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 01:20:07 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/10 03:20:24 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void):_name("CL4P-TP"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << ClapTrap::_name << ": Default constructor called" << std::endl;
}
ClapTrap::~ClapTrap(void) {
	std::cout << "Destructor called" << std::endl;
	}
ClapTrap::ClapTrap(ClapTrap const &obj) {
	std::cout << "Copy Constructor called" << std::endl;
	*this = obj;
}
ClapTrap &ClapTrap::operator=(ClapTrap const &obj) {
	this->_name = obj._name;
	this->_hitPoints = obj._hitPoints;
	this->_energyPoints = obj._energyPoints;
	this->_attackDamage = obj._attackDamage;
	return (*this);
}

void ClapTrap::attack(const std::string& target) {
	std::cout << "ClapTrap " << ClapTrap::_name
		<< " attacks " << target << ", causing "
		<< ClapTrap::_attackDamage << " points of damage!"
		<< std::endl;
	std::cout << ClapTrap::_hitPoints << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << ClapTrap::_name
		<< " suffered " << amount
		<< " points of damage!" << std::endl;
	ClapTrap::_hitPoints -= amount;
	std::cout << ClapTrap::_hitPoints << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << ClapTrap::_name
		<< " recovered " << amount
		<< " points of HP!" << std::endl;
	ClapTrap::_hitPoints += amount;
	std::cout << ClapTrap::_hitPoints << std::endl;
}
