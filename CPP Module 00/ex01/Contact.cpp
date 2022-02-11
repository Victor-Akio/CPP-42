/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 23:30:14 by vminomiy          #+#    #+#             */
/*   Updated: 2022/02/11 01:58:55 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
	_first_name = "";
	// _last_name = "";
	// _nickname = "";
	// _phone_number = "";
	// _darkest_secret = "";
}

void	Contact::set_first_name(std::string input) {
	this->_first_name = input;
}

std::string Contact::get_first_name(void) {
	return (this->_first_name);
}