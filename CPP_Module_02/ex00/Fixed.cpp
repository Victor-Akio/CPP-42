/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 23:27:29 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/09 01:06:46 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Fractional Bits deve sempre ser 8
const int Fixed::fractionalBits = 8;

// Inicializa rawBits referenciando a 0
Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;
	Fixed::rawBits = 0;
}

// Destroi só avisando
Fixed::~Fixed(void) {std::cout << "Destructor called" << std::endl;}

// Copy constructor implementa com uma chamada com valor (obj)
Fixed::Fixed(const Fixed &obj) {
	std::cout << "Copy Constructor called" << std::endl;
	*this = obj;
}

// Atribui valor ao operador
Fixed	&Fixed::operator=(Fixed const &obj) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &obj) return *this;
	this->rawBits = obj.getRawBits();
	return (*this);
}

// retorna valor do rawBits
int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (Fixed::rawBits);
}

// atribui valor à rawBits
void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	Fixed::rawBits = raw;
}
