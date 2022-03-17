/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 02:50:51 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/16 17:45:22 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {
	private:
		std::string		ideas[100];
	protected:
	public:
		Brain(void);
		~Brain(void);
		Brain(Brain const &obj);
		Brain		&operator=(Brain const &obj);
		std::string	getIdeas(int index) const;
		void		setIdeas(int index, std::string obj);
};

#endif
