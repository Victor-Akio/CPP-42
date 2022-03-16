/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CatClass.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 00:36:57 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/16 02:21:49 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CatClass.hpp"

Cat::Cat(void) {
	Cat::type = "Maine Coon";
	std::cout << Cat::type << ": Default Constructor Called." << std::endl;
}

Cat::~Cat(void) { std::cout << Cat::type << ": Destructor Called." << std::endl; }

Cat::Cat(Cat const &obj): Animal(obj) {
	std::cout << Cat::type << ": Copy Constructor Called." << std::endl;
	*this = obj;
}

Cat	&Cat::operator=(Cat const &obj) {
	(void)obj;
	return (*this);
}

void	Cat::makeSound(void) const { std::cout << Cat::type << " goes Meown Meown!!" << std::endl; }
