/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 19:37:41 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/03 21:28:44 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {this->_type = type;}
Weapon::~Weapon(void) {}

const std::string	&Weapon::getType(void) {return this->_type;}
void				Weapon::setType(std::string nType) {
	this->_type = nType;
}	
