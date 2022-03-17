/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zeroZero.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 17:51:41 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/17 03:27:39 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Main.hpp"

void	ex00(void) {
	{
		// const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		
		std::cout << "[The Dog Type]" << std::endl;
		std::cout << j->getType() << " " << std::endl;
		std::cout << "[The Cat Type]" << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		// meta->makeSound();

		std::cout << "[Freeing Cat]" << std::endl;
		delete i;
		std::cout << "[Freeing Dog]" << std::endl;
		delete j;
		std::cout << "[Freeing Animal]" << std::endl;
		// delete meta;
		std::cout << "------------------------------------------------------" << std::endl;
	}
	{
		const WrongAnimal* meta = new WrongAnimal();
		const Animal* j = new Dog();
		const WrongAnimal* i = new WrongCat();
		
		std::cout << "[The Dog Type]" << std::endl;
		std::cout << j->getType() << " " << std::endl;
		std::cout << "[The WrongCat Type]" << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound(); //does nothing
		meta->makeSound();

		std::cout << "[Freeing WrongCat]" << std::endl;
		delete i;
		std::cout << "[Freeing Dog]" << std::endl;
		delete j;
		std::cout << "[Freeing WrongAnimal]" << std::endl;
		delete meta;
	}
}