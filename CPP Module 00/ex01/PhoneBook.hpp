/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 23:41:08 by vminomiy          #+#    #+#             */
/*   Updated: 2022/02/12 01:00:44 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK_H__
# define __PHONEBOOK_H__

# include <string>
# include <iostream>
# include "Contact.hpp"

class PhoneBook {
	private:
		int		_index;
		Contact	_list[8];
	public:
		PhoneBook();
		
		void		set_contact(Contact &newContact);
		
		Contact		get_contact(int index);
		int			get_index(void);		
		Contact*	get_all(void);
};

#endif
