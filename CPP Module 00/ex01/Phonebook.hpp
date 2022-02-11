/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 23:41:08 by vminomiy          #+#    #+#             */
/*   Updated: 2022/02/11 02:24:20 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK_H__
# define __PHONEBOOK_H__

# include <string>
# include <iostream>
# include "Contact.hpp"

class Phonebook {
	private:
		int		_index;
		Contact	_list[8];
	public:
		Phonebook();
		
		void		set_contact(Contact &newContact);
		
		Contact		get_contact(int index);
		// Contact*	get_all(void);
		// int			get_index(void);		
};

#endif
