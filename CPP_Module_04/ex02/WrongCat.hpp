/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 02:04:05 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/16 02:04:08 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : virtual public WrongAnimal {
	private:
	protected:
	public:
		WrongCat(void);
		~WrongCat(void);
		WrongCat(WrongCat const &obj);
		WrongCat		&operator=(WrongCat const &obj);
		void	makeSound(void) const;
};

#endif
