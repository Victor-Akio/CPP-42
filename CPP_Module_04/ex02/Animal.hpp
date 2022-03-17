/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 00:17:46 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/16 01:39:39 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

/*	ABSTRACT CLASS
**	https://www.tutorialspoint.com/cplusplus/cpp_interfaces.htm
**	Quando se abstrai uma função, a classe fica categorizada como abstrata.
**	Servindo apenas de interface.
*/
class Animal {
	private:
	protected:
		std::string		type;
	public:
		Animal(void);
		virtual ~Animal(void);
		Animal(Animal const &obj);
		Animal	&operator=(Animal const &obj);
		std::string			getType(void) const;
		virtual void		makeSound(void) const = 0;
		virtual std::string	getBrainIdeas(int index) const = 0;
		virtual void		setBrainIdeas(int index, std::string obj) = 0;
};

#endif
