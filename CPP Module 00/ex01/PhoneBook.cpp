/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 23:42:33 by vminomiy          #+#    #+#             */
/*   Updated: 2022/02/12 01:44:08 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
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

PhoneBook::PhoneBook() {
	this->_index = 0;
}

void	PhoneBook::set_contact(Contact &newContact) {
	if (this->_index >= 8)
		this->_index = 0;
	this->_list[this->_index++] = newContact;
}

Contact	PhoneBook::get_contact(int index) {
	return (this->_list[index]);
}

int		PhoneBook::get_index(void) {
	return (this->_index);
}

Contact*	PhoneBook::get_all(void) {
	return (this->_list);
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

void	formatPrint(std::string str) {
	int	len = str.length();
	if (len > 10) {
		for (int i = 0; i < 9; i++) {
			std::cout << str[i];
		}
		std::cout << ".";
	} else {
		len = 10 - len;
		while (len--)
			std::cout << " ";
		std::cout << str;
	}
	std::cout << "|";
}

int		get_index(int err = 0) {
	std::string	input = "";

	if (err)
		std::cout << "Wrong input, please, try again..." << std::endl;
	std::cout << "Select the index of the contact:";
	std::cin >> input;
	if (input == "") return (-1);
	if (input.length() != 1 || input[0] < '0' || input[0] > '8') return get_index(1);
	return (input[0] - '0');
}

void	add_contact(PhoneBook &phone_book) {
	Contact		contact;
	std::string	buffer;

	buffer = get_data("first name");
	if (buffer == "")
		return ;
	contact.set_first_name(buffer);
	buffer = get_data("last name");
	if (buffer == "")
		return ;
	contact.set_last_name(buffer);
	buffer = get_data("nickname");
	if (buffer == "")
		return ;
	contact.set_nickname(buffer);
	buffer = get_data("phone number");
	if (buffer == "")
		return ;
	contact.set_phone_number(buffer);
	buffer = get_data("darkest secret");
	if (buffer == "")
		return ;
	contact.set_darkest_secret(buffer);
	phone_book.set_contact(contact);
}

void	search(PhoneBook &phone_book) {
	Contact		contact;
	int			index;
	
	contact = phone_book.get_contact(0);
	if (contact.get_first_name() == "") {
		std::cout << "No contact found ..." << std::endl;
		return ;
	}
	std::cout << "|     Index|First name| Last Name|  Nickname|" << std::endl;
	for (int i = 0; i < 8; i++) {
		contact = phone_book.get_contact(i);
		if (contact.get_first_name() == "")
			break;
		std::cout << "|         " << i << "|";
		formatPrint(contact.get_first_name());
		formatPrint(contact.get_last_name());
		formatPrint(contact.get_nickname());
		std::cout << std::endl;
	}
	index = get_index();
	if (index == -1)
		return ;
	contact = phone_book.get_contact(index);
	if (contact.get_first_name() == "") {
		std::cout << "The contact was not found..." << std::endl;
		return ;
	}
	std::cout << contact.get_first_name() << std::endl;
	std::cout << contact.get_last_name() << std::endl;
	std::cout << contact.get_nickname() << std::endl;
	std::cout << contact.get_phone_number() << std::endl;
	std::cout << contact.get_darkest_secret() << std::endl;
}

int main(void) {
	int		input;
	PhoneBook	phone_book;
	
	while ((input = get_input())) {
		if (input == 1) {
			std::cout << "searching!" << std::endl;
			search(phone_book);
		}
		else if (input == 2) {
			std::cout << "adding..." << std::endl;
			add_contact(phone_book);
		}
	}
	std::cout << "Exiting ..." << std::endl;
	return (0);
}
