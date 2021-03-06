/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 23:25:48 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/09 01:32:04 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

/*	OVERLOAD
**	https://www.tutorialspoint.com/cplusplus/cpp_overloading.htm
*/
class	Fixed {
	private:
		int					rawBits;
		static const int	fractionalBits;
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed &obj);
		Fixed &operator=(Fixed const &obj);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
