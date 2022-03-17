/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 00:17:46 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/16 18:39:49 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {
	private:
	protected:
		std::string		type;
	public:
		Animal(void);
		virtual ~Animal(void);
		Animal(Animal const &obj);
		Animal	&operator=(Animal const &obj);
		std::string		getType(void) const;
		virtual void	makeSound(void) const;
};

#endif
