/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 22:20:40 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/15 23:58:53 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string _name) {
	DiamondTrap::_name = _name;
	ClapTrap::_name = DiamondTrap::_name + "_clap_name";
	DiamondTrap::_hitPoints = FragTrap::_hitPoints;
	DiamondTrap::_energyPoints = ScavTrap::_energyPoints;
	DiamondTrap::_attackDamage = FragTrap::_attackDamage;
	std::cout << DiamondTrap::_name << ": Named constructor called." << std::endl;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << DiamondTrap::_name << ": Destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &obj): ClapTrap(obj), ScavTrap(obj), FragTrap(obj) {
	std::cout << DiamondTrap::_name << ": Copy constructor called" << std::endl;
	*this = obj;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &obj) {
	this->_name = obj._name;
	this->_hitPoints = obj._hitPoints;
	this->_energyPoints = obj._energyPoints;
	this->_attackDamage = obj._attackDamage;
	return (*this);
}

void		DiamondTrap::attack(const std::string& target) {
	if ((DiamondTrap::_hitPoints > 0) && (DiamondTrap::_energyPoints > 0)) {
		std::cout << DiamondTrap::_name
			<< " Punches " << target << ", dealing "
			<< DiamondTrap::_attackDamage << " points of damage!" << std::endl;
		DiamondTrap::_energyPoints--;
	} else if ((DiamondTrap::_hitPoints > 0) && (DiamondTrap::_energyPoints <= 0)) {
		std::cout << DiamondTrap::_name << " Hardness level reached... cracked myself." << std::endl;
	} else {
		std::cout << DiamondTrap::_name << " got Destroyed, can't attack..." << std::endl;
	}
}

//	Suffer Damage function
void		DiamondTrap::takeDamage(unsigned int amount) {
	if (DiamondTrap::_hitPoints > 0){
		std::cout << DiamondTrap::_name
			<< " was inflicted " << amount
			<< " points of damage!" << std::endl;
		DiamondTrap::_hitPoints -= amount;
	} else {
		std::cout << "Became dust..." << std::endl;
		DiamondTrap::_hitPoints -= amount;
	}
}

//	Heal function
void		DiamondTrap::beRepaired(unsigned int amount) {
	if (DiamondTrap::_energyPoints > 0) {
		std::cout << DiamondTrap::_name << " polished itself "
		<< amount << " points of HP!" << std::endl;
		DiamondTrap::_hitPoints += amount;
		DiamondTrap::_energyPoints--;
	} else {
		std::cout << "became coal again..." << std::endl;
	}
}

void		DiamondTrap::whoAmI(void) {
	std::cout << DiamondTrap::_name << " says: You are " << ClapTrap::_name << " ..." <<std::endl;
	std::cout << "Surprized... He turns arround.. looked in his eyes." << std::endl;
	std::cout << ClapTrap::_name << " says: And You are " << DiamondTrap::_name << "..." << std::endl;
}
