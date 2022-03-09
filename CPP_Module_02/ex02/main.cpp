/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 23:25:21 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/10 00:11:57 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	{
		Fixed	a;
		Fixed const b(Fixed(5.05f) * Fixed(2));

		std::cout << "Subject main" << std::endl;
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
	}
	{
		std::cout << "\nAlternative tests to complement mandatory tests.\n" << std::endl;
		Fixed	a(15);
		Fixed	b(3);
		Fixed const c(Fixed(1.05f) * Fixed(2));
		Fixed const d(Fixed(5.05f) * Fixed(2));
		
		std::cout << "Max/Min functions." << std::endl;
		std::cout << Fixed::max( a, b ) << " -> Suposed to be: 15" << std::endl;
		std::cout << Fixed::min( a, b ) << " -> Suposed to be: 3" << std::endl;
		std::cout << Fixed::max( c, d ) << " -> Suposed to be: 10.1016" << std::endl;
		std::cout << Fixed::min( c, d ) << " -> Suposed to be: 2.10156" << std::endl;
		std::cout << std::endl;
		std::cout << "Arithmetic operators..." << std::endl;
		std::cout << (a + b) << " -> Suposed to be: 18" << std::endl;
		std::cout << (a - b) << " -> Suposed to be: 12" << std::endl;
		std::cout << (a * b) << " -> Suposed to be: 45" << std::endl;
		std::cout << (a / b) << " -> Suposed to be: 5" << std::endl;
		std::cout << std::endl;
		std::cout << "decrement operators..." << std::endl;
		std::cout << --a << " -> Suposed to be: 14.99609375 or 14.9961" << std::endl;
		std::cout << a-- << " -> Suposed to be: 14.99609375 or 14.9961" << std::endl;
		std::cout << std::endl;
		std::cout << "Comparison operators..." << std::endl;
		std::cout << (15 < b) << " -> Suposed to be: 0" << std::endl;
		std::cout << (b > 5) << " -> Suposed to be: 0" << std::endl;
		std::cout << (c >= d) << " -> Suposed to be: 0" << std::endl;
		std::cout << (3 <= 2) << " -> Suposed to be: 0" << std::endl;
		std::cout << (1 == 1) << " -> Suposed to be: 1" << std::endl;
		std::cout << (10 != 0) << " -> Suposed to be: 1" << std::endl;
		return (0);
	}
}