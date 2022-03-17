/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 02:51:26 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/16 17:45:27 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) { std::cout << "Brain: Default Constructor called" << std::endl; }

Brain::~Brain(void) { std::cout << "Brain: Destructor called" << std::endl; }

Brain::Brain(Brain const &obj) { *this = obj; }

Brain			&Brain::operator=(Brain const &obj) {
	for (int i = 0; i < 100; i++)
		Brain::ideas[i] = obj.ideas[i];
	return (*this);
}

std::string	Brain::getIdeas(int index) const {
	if (index >= 0 && index <= 100)
		return (Brain::ideas[index]);
	else
		return ("No thoughts.");
}

void		Brain::setIdeas(int index, std::string obj) {
	if (index >= 0 && index <= 100)
		Brain::ideas[index] = obj;
}
