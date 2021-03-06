/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 03:22:07 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/05 01:32:36 by vminomiy         ###   ########.fr       */
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
    std::cout << "I love having extra bacon for my 7XL-double-cheese-" \
    << "triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void        Karen::info(void) {
    std::cout << "I cannot believe adding extra bacon costs more money." \
    << "You didn’t put enough bacon in my burger! If you did, I wouldn’t" \
    << "be asking for more!" << std::endl;
}

void        Karen::warning(void) {
    std::cout << "I think I deserve to have some extra bacon for free." \
    << "I’ve been coming for years whereas you started working here since" \
    << " last month." << std::endl;
}

void        Karen::error(void) {
    std::cout << "This is unacceptable! I want to speak to the manager now." \
    << std::endl;
}

void        Karen::complain(std::string level) {
    int         i = 0;
    std::string list[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    cFunc       outputF[4] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
    
    while (i < 4 && (list[i] != level)) i++; 
    if (i >= 4)
        return ;		
    (this->*(outputF[i]))();
}