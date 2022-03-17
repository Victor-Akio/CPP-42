/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 00:37:24 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/16 18:41:33 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"

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
