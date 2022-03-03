/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 19:39:58 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/03 21:31:25 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {this->_name = name;}

void		HumanB::setWeapon(Weapon &w) {this->_weapon = &w;}
void		HumanB::attack(void) {
	std::cout << this->_name << "attacks with their " << this->_weapon->getType() << std::endl;
}