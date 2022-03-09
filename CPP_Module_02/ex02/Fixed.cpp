/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 23:27:29 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/10 00:41:31 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Fractional Bits deve sempre ser 8
const int Fixed::fractionalBits = 8;

// Inicializa rawBits referenciando a 0
Fixed::Fixed(void) {Fixed::rawBits = 0;}

// Destroi só avisando
Fixed::~Fixed(void) {}

// Copy constructor implementa com uma chamada com valor (obj)
Fixed::Fixed(const Fixed &obj) {*this = obj;}
Fixed::Fixed(const int fixedPointValue) {Fixed::rawBits = fixedPointValue << Fixed::fractionalBits;}
Fixed::Fixed(const float floatPointValue) {Fixed::rawBits = roundf(floatPointValue  * (1 << Fixed::fractionalBits));}

// Atribui valor ao operador
Fixed	&Fixed::operator=(Fixed const &obj) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &obj) return *this;
	this->rawBits = obj.rawBits;
	return (*this);
}

Fixed	&Fixed::min(Fixed &x, Fixed &y) {return(x < y ? x : y);}
Fixed	const &Fixed::min(Fixed const &x, Fixed const &y) {return(x > y ? x : y);}
Fixed	&Fixed::max(Fixed &x, Fixed &y) {return(x < y ? x : y);}
Fixed	const &Fixed::max(Fixed const &x, Fixed const &y) {return(x > y ? x : y);}

Fixed	Fixed::operator++(void) {
	Fixed	fixed;
	fixed.rawBits = ++rawBits;
	return (fixed);
}

Fixed	Fixed::operator--(void) {
	Fixed	fixed;
	fixed.rawBits = --rawBits;
	return (fixed);
}

Fixed	Fixed::operator++(int) {
	Fixed	fixed;
	fixed.rawBits = rawBits++;
	return (fixed);
}

Fixed	Fixed::operator--(int) {
	Fixed	fixed;
	fixed.rawBits = rawBits--;
	return (fixed);
}
int		Fixed::getRawBits(void) const {return (Fixed::rawBits);}
float	Fixed::toFloat(void) const {return ((float)Fixed::rawBits / (1 << Fixed::fractionalBits));}
int		Fixed::toInt(void) const {return (Fixed::rawBits / (1 << Fixed::fractionalBits));}

std::ostream	&operator<<(std::ostream &os, Fixed const &obj) {
	os << obj.toFloat();
	return (os);
}

bool	operator>(Fixed const &num, Fixed const &obj) {return (num.getRawBits() > obj.getRawBits());}
bool	operator<(Fixed const &num, Fixed const &obj) {return (num.getRawBits() < obj.getRawBits());}
bool	operator>=(Fixed const &num, Fixed const &obj) {return (num.getRawBits() >= obj.getRawBits());}
bool	operator<=(Fixed const &num, Fixed const &obj) {return (num.getRawBits() <= obj.getRawBits());}
bool	operator==(Fixed const &num, Fixed const &obj) {return (num.getRawBits() == obj.getRawBits());}
bool	operator!=(Fixed const &num, Fixed const &obj) {return (num.getRawBits() != obj.getRawBits());}

Fixed	operator+(Fixed const &num, Fixed const &obj) {return (Fixed(num.toFloat() + obj.toFloat()));}
Fixed	operator-(Fixed const &num, Fixed const &obj) {return (Fixed(num.toFloat() - obj.toFloat()));}
Fixed	operator*(Fixed const &num, Fixed const &obj) {return (Fixed(num.toFloat() * obj.toFloat()));}
Fixed	operator/(Fixed const &num, Fixed const &obj) {return (Fixed(num.toFloat() / obj.toFloat()));}
