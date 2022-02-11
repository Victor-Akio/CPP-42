/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 23:19:47 by vminomiy          #+#    #+#             */
/*   Updated: 2022/02/11 02:29:46 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONTACT_H__
# define __CONTACT_H__

#include <iostream>

class Contact {
	private:
		std::string _first_name;
	public:
		Contact();
		void	set_first_name(std::string input);
		// void	set_last_name(std::string input);
		// void	set_nickname(str::string input);
		// void	set_phone_number(std::string input);
		// void	set_darkest_secret(std::string input);
		std::string	get_first_name(void);		
};

#endif