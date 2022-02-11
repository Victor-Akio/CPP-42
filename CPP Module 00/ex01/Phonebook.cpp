/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 23:42:33 by vminomiy          #+#    #+#             */
/*   Updated: 2022/02/11 02:41:11 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"
#include "iostream"

std::string	get_data(std::string data) {
	std::string	input;
	std::cout << "Please, enter the " << data << ": " << std::endl;
getData:
	std::getline(std::cin, input);
	if (std::cin.eof())
		return "";
	else if (input.length() == 0) goto getData;
	else
		return (input);
}

Phonebook::Phonebook() {
	this->_index = 0;
}

void	Phonebook::set_contact(Contact &newContact) {
	if (this->_index >= 8)
		this->_index = 0;
	this->_list[this->_index++] = newContact;
}

Contact	Phonebook::get_contact(int index) {
	return (this->_list[index]);
}

int	get_input(void) {
	std::string input = "";
	std::cin >> input;
	if (input == "SEARCH")
		return (1);
	else if (input == "ADD")
		return (2);
	else if (input == "EXIT")
		return (0);
	else {
		std::cout << "Wrong input, please, try again..." << std::endl;
	}
	return (-1);
}

void	add_contact(Phonebook &phone_book) {
	Contact		contact;
	std::string	buffer;

	buffer = get_data("first name");
	if (buffer == "")
		return ;
	contact.set_first_name(buffer);
	
	phone_book.set_contact(contact);
}

void	search(Phonebook &phone_book) {
	Contact		contact;
	// int			index;
	
	contact = phone_book.get_contact(0);
	if (contact.get_first_name() == "") {
		std::cout << "No contact found ..." << std::endl;
		return ;
	}
	std::cout << "|		Index|First name|" << std::endl;
	for (int i = 0; i < 8; i++) {
		contact = phone_book.get_contact(i);
		if (contact.get_first_name() == "")
			break;
		std::cout << "|		" << i << "|" << contact.get_first_name() << std::endl;
	}
}

int main(void) {
	int		input;
	Phonebook	phone_book;
	
	while ((input = get_input())) {
		if (input == 1) {
			std::cout << "searching!" << std::endl;
			search(phone_book);
		}
		else if (input == 2) {
			std::cout << "adding..." << std::endl;
			add_contact(phone_book);
	}
	std::cout << "Exiting ..." << std::endl;
	return (0);
}
