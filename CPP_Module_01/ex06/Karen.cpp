/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 03:22:07 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/07 22:34:19 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

/*  FUNCTION POINTER
**  https://stackoverflow.com/questions/4295432/typedef-function-pointer
*/
typedef void(Karen::*cFunc) (void);

Karen::Karen(void) {};
Karen::~Karen(void) {};

void        Karen::debug(void) {
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-" \
    << "triple-pickle-specialketchup burger. I really do!\n" << std::endl;
}

void        Karen::info(void) {
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money." \
    << "You didn’t put enough bacon in my burger! If you did, I wouldn’t" \
    << "be asking for more!\n" << std::endl;
}

void        Karen::warning(void) {
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." \
    << "I’ve been coming for years whereas you started working here since" \
    << " last month.\n" << std::endl;
}

void        Karen::error(void) {
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." \
    << std::endl;
}

/*	SWITCH CASE
**	https://gcc.gnu.org/onlinedocs/gcc/Warning-Options.html
**	https://en.cppreference.com/w/cpp/language/switch
*/
void        Karen::filter(std::string level) {
	int         i = 0;
	std::string list[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	cFunc       outputF[4] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

	while (i < 4 && list[i] != level) i++;
	if (i > 4) return ;

	switch(i) {
		case 0:
			(this->*(outputF[0]))();
			
			__attribute__ ((fallthrough));
		case 1:
			(this->*(outputF[1]))();
			__attribute__ ((fallthrough));
		case 2:
			(this->*(outputF[2]))();
			__attribute__ ((fallthrough));
		case 3:
			(this->*(outputF[3]))();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
	}
}