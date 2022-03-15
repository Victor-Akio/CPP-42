/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 01:16:48 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/12 00:28:26 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

/*	PROTECTED MEMBER
**	Para uma classe herdar um membro privado haveria necessidade de faze-lo "friend";
**	Alternativamente, sem manter o membro como publico, existe a opção protegido, que 
**	permite um polimorfismo controlado para a classe derivada. 
*/
class ClapTrap {
	private:
	protected:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
	public:
		ClapTrap(void);
		~ClapTrap(void);
		ClapTrap(ClapTrap const &obj);
		ClapTrap	&operator=(ClapTrap const &obj);
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

#endif
