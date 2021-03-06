/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 19:38:52 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/03 21:35:03 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/*	Class reference attribute inicialization.
**	https://en.cppreference.com/w/cpp/language/constructor
*/
HumanA::HumanA(std::string name, Weapon &w):_weapon(w) {this->_name = name;}

void		HumanA::attack(void) {
	std::cout << this->_name << "attacks with their " << this->_weapon.getType() << std::endl;
}
