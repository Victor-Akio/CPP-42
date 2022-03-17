/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 22:09:41 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/16 20:29:42 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

/*	DIAMOND PROBLEM
**	https://www.makeuseof.com/what-is-diamond-problem-in-cpp/
*/
class DiamondTrap : public ScavTrap, public FragTrap {
	private:
		std::string	_name;
	protected:
	public:
		DiamondTrap(std::string _name);
		~DiamondTrap(void);
		DiamondTrap(DiamondTrap const &obj);
		DiamondTrap	&operator=(DiamondTrap const &obj);
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		whoAmI(void);
};

#endif
