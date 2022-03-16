/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CatClass.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 00:37:24 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/16 02:03:54 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CATCLASS_HPP
# define CATCLASS_HPP

# include <iostream>
# include "AnimalClass.hpp"

class Cat : virtual public Animal {
	private:
	protected:
	public:
		Cat(void);
		~Cat(void);
		Cat(Cat const &obj);
		Cat		&operator=(Cat const &obj);
		void	makeSound(void) const;
};

#endif
