/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 00:37:24 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/16 18:03:27 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : virtual public Animal {
	private:
		Brain	*brain;
	protected:
	public:
		Cat(void);
		~Cat(void);
		Cat(Cat const &obj);
		Cat			&operator=(Cat const &obj);
		void		makeSound(void) const;
		std::string	getIdeas(void) const;
		void		setIdeas(const std::string ideas);
		std::string	getBrainIdeas(int index) const;
		void		setBrainIdeas(int index, std::string obj);
};

#endif
