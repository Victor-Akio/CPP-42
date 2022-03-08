/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 23:25:21 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/08 00:25:02 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*	ARTICLES TO READ - subject
**	https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point.html
**	https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point_representation.html
**	https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point_printing.html
**	https://inst.eecs.berkeley.edu//~cs61c/sp06/handout/fixedpt.html
*/
int	main( void ) {
	Fixed a;
	Fixed b( a );
	Fixed c;
	
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}