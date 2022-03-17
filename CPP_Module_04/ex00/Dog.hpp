/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 00:24:37 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/16 18:40:12 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class Dog : virtual public Animal {
	private:
	protected:
	public:
		Dog(void);
		~Dog(void);
		Dog(Dog const &obj);
		Dog		&operator=(Dog const &obj);
		void	makeSound(void) const;
};

#endif
