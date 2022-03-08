/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 23:25:48 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/08 00:26:09 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

/*	Copy Constructor - https://www.tutorialspoint.com/cplusplus/cpp_copy_constructor.htm
**	Copy Assignment Operator - https://en.cppreference.com/w/cpp/language/copy_assignment
*/
class	Fixed {
	private:
		int					fixedValue;
		static const int	fractionalBits;
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed &obj)
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
}

#endif
