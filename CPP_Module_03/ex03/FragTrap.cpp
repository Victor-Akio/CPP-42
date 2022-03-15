/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 00:59:17 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/15 23:19:00 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
	FragTrap::_name = "FR4G-TP";
	FragTrap::_hitPoints = 100;
	FragTrap::_energyPoints = 100;
	FragTrap::_attackDamage = 30;
	std::cout << FragTrap::_name << ": Default constructor called." << std::endl;
}

FragTrap::~FragTrap(void) {
	std::cout << "FR4G-TP: Destructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &obj): ClapTrap(obj) {
	std::cout << FragTrap::_name << ": Copy constructor called" << std::endl;
	*this = obj;
}

FragTrap	&FragTrap::operator=(FragTrap const &obj) {
	this->_name = obj._name;
	this->_hitPoints = obj._hitPoints;
	this->_energyPoints = obj._energyPoints;
	this->_attackDamage = obj._attackDamage;
	return (*this);
}

void		FragTrap::attack(const std::string& target) {
	if ((FragTrap::_hitPoints > 0) && (FragTrap::_energyPoints > 0)) {
		std::cout << FragTrap::_name
			<< " Hit " << target << ", dealing "
			<< FragTrap::_attackDamage << " points of damage!" << std::endl;
		FragTrap::_energyPoints--;
	} else if ((FragTrap::_hitPoints > 0) && (FragTrap::_energyPoints <= 0)) {
		std::cout << FragTrap::_name << " I lost my arms, but still here!" << std::endl;
	} else {
		std::cout << FragTrap::_name << " died, logically, can't attack..." << std::endl;
	}
}

//	Suffer Damage function
void		FragTrap::takeDamage(unsigned int amount) {
	if (FragTrap::_hitPoints > 0){
		std::cout << FragTrap::_name
			<< " was inflicted " << amount
			<< " points of damage!" << std::endl;
		FragTrap::_hitPoints -= amount;
	} else {
		std::cout << "Flicked and stoped working... at least i think so..." << std::endl;
		FragTrap::_hitPoints -= amount;
	}
}

//	Heal function
void		FragTrap::beRepaired(unsigned int amount) {
	if (FragTrap::_energyPoints > 0) {
		std::cout << FragTrap::_name << " glued some parts "
		<< amount << " points of HP!" << std::endl;
		FragTrap::_hitPoints += amount;
		FragTrap::_energyPoints--;
	} else {
		std::cout << "Did not found anymore parts..." << std::endl;
	}
}

void		FragTrap::highFivesGuys(void) {
	std::cout << FragTrap::_name << "Shouts:" << std::endl;
	std::cout << "- High Five!!" <<std::endl;
	std::cout << "Standing while keeping his hand up..." << std::endl;
}
