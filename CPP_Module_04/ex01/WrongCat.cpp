/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 02:05:21 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/16 02:05:23 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) {
	WrongCat::type = "Tiger";
	std::cout << WrongCat::type << ": Default Constructor Called." << std::endl;
}

WrongCat::~WrongCat(void) { std::cout << WrongCat::type << ": Destructor Called." << std::endl; }

WrongCat::WrongCat(WrongCat const &obj): WrongAnimal(obj) {
	std::cout << WrongCat::type << ": Copy Constructor Called." << std::endl;
	*this = obj;
}

WrongCat	&WrongCat::operator=(WrongCat const &obj) {
	(void)obj;
	return (*this);
}

void	WrongCat::makeSound(void) const { std::cout << WrongCat::type << " goes GRoAARr!!" << std::endl; }
