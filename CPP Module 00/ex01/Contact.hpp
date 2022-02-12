/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 23:19:47 by vminomiy          #+#    #+#             */
/*   Updated: 2022/02/11 22:42:47 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONTACT_H__
# define __CONTACT_H__

#include <iostream>

class Contact {
	private:
		std::string _first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;
	public:
		Contact();
		void	set_first_name(std::string input);
		void	set_last_name(std::string input);
		void	set_nickname(std::string input);
		void	set_phone_number(std::string input);
		void	set_darkest_secret(std::string input);
		std::string	get_first_name(void);
		std::string	get_last_name(void);
		std::string get_nickname(void);
		std::string get_phone_number(void);
		std::string get_darkest_secret(void);
};

#endif