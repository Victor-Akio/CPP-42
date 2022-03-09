/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 23:25:48 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/09 01:31:55 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

/*	Copy Constructor - https://www.tutorialspoint.com/cplusplus/cpp_copy_constructor.htm
**	Copy Assignment Operator - https://en.cppreference.com/w/cpp/language/copy_assignment
*/
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
};

/*	An overload of the insertion («) operator that inserts a floating-point representation
**	of the fixed-point number into the output stream object passed as parameter.
*/
std::ostream	&operator<<(std::ostream &os, Fixed const &obj);

#endif
