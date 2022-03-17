/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 00:24:37 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/16 18:03:22 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : virtual public Animal {
	private:
		Brain	*brain;
	protected:
	public:
		Dog(void);
		~Dog(void);
		Dog(Dog const &obj);
		Dog			&operator=(Dog const &obj);
		void		makeSound(void) const;
		std::string	getBrainIdeas(int index) const;
		void		setBrainIdeas(int index, std::string ideas);
};

#endif
