/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 23:30:14 by vminomiy          #+#    #+#             */
/*   Updated: 2022/02/12 00:51:28 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact::Contact():
	_first_name(""),
	_last_name(""),
	_nickname(""),
	_phone_number(""),
	_darkest_secret("") {}

void	Contact::set_first_name(std::string input) {
	this->_first_name = input;
}

void	Contact::set_last_name(std::string input) {
	this->_last_name = input;
}

void	Contact::set_nickname(std::string input) {
	this->_nickname = input;
}

void	Contact::set_phone_number(std::string input) {
	this->_phone_number = input;
}

void	Contact::set_darkest_secret(std::string input) {
	this->_darkest_secret = input;
}

std::string Contact::get_first_name(void) {
	return (this->_first_name);
}

std::string	Contact::get_last_name(void) {
	return (this->_last_name);
}

std::string	Contact::get_nickname(void) {
	return (this->_nickname);
}

std::string	Contact::get_phone_number(void) {
	return (this->_phone_number);
}

std::string	Contact::get_darkest_secret(void) {
	return (this->_darkest_secret);
}
