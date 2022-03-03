/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 20:41:40 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/03 03:28:04 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {this->_name = "";}
Zombie::~Zombie(void) {
	if (!this->_name.empty())
		std::cout << this->_name << ": died!" << std::endl;
	}

void		Zombie::announce(void) {std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;}
void		Zombie::setName(std::string name) {this->_name = name;};