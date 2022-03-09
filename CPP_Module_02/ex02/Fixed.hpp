/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 23:25:48 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/09 23:34:04 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed {
	private:
		int					rawBits;
		static const int	fractionalBits;
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed &obj);
		Fixed(const int fixedPointValue);
		Fixed(const float floatPointValue);
		Fixed &operator=(Fixed const &obj);
		float	toFloat(void) const;
		int		toInt(void) const;
		int		getRawBits(void) const;
		//	MAX/MIN OPERATORS OVERLOAD
		static Fixed &min(Fixed &x, Fixed &y);
		static const Fixed &min(Fixed const &x, Fixed const &y);
		static Fixed &max(Fixed &x, Fixed &y);
		static const Fixed &max(Fixed const &x, Fixed const &y);
		//	INC/DECR OPERATORS OVERLOAD - https://en.cppreference.com/w/cpp/language/operator_incdec
		Fixed	operator++(void);
		Fixed	operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);
};

std::ostream	&operator<<(std::ostream &os, Fixed const &obj);

// COMPARISON OVERLOAD - https://en.cppreference.com/w/cpp/language/operator_comparison
bool	operator>(Fixed const &num, Fixed const &obj);
bool	operator<(Fixed const &num, Fixed const &obj);
bool	operator>=(Fixed const &num, Fixed const &obj);
bool	operator<=(Fixed const &num, Fixed const &obj);
bool	operator==(Fixed const &num, Fixed const &obj);
bool	operator!=(Fixed const &num, Fixed const &obj);
// ARITHMETIC OPERATORS OVERLOAD - https://en.cppreference.com/w/cpp/language/operator_arithmetic
Fixed	operator+(Fixed const &num, Fixed const &obj);
Fixed	operator-(Fixed const &num, Fixed const &obj);
Fixed	operator*(Fixed const &num, Fixed const &obj);
Fixed	operator/(Fixed const &num, Fixed const &obj);

#endif
