/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 22:19:49 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/15 23:05:52 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

/*	INHERITANCE and DERIVED CLASS
**	https://en.cppreference.com/w/cpp/language/derived_class
*/
class ScavTrap : virtual public ClapTrap {
	public:
		ScavTrap(void);
		~ScavTrap(void);
		ScavTrap(ScavTrap const &obj);
		ScavTrap	&operator=(ScavTrap const &obj);
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		guardGate(void);
};

#endif