/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 23:27:29 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/09 01:58:34 by vminomiy         ###   ########.fr       */
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

Fixed::Fixed(const int fixedPointValue) {
	std::cout << "Int constructor called" << std::endl;
	Fixed::rawBits = fixedPointValue << Fixed::fractionalBits;
}

Fixed::Fixed(const float floatPointValue) {
	std::cout << "Float constructor called" << std::endl;
	Fixed::rawBits = roundf(floatPointValue  * (1 << Fixed::fractionalBits));
}

// Atribui valor ao operador
Fixed	&Fixed::operator=(Fixed const &obj) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &obj) return *this;
	this->rawBits = obj.rawBits;
	return (*this);
}

float	Fixed::toFloat(void) const {return ((float)Fixed::rawBits / (1 << Fixed::fractionalBits));}
int		Fixed::toInt(void) const {return (Fixed::rawBits / (1 << Fixed::fractionalBits));}

std::ostream	&operator<<(std::ostream &os, Fixed const &obj) {
	os << obj.toFloat();
	return (os);
}