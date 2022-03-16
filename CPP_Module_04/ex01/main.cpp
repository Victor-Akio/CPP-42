/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 01:17:38 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/16 02:45:52 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AnimalClass.hpp"
#include "DogClass.hpp"
#include "CatClass.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void	ex00(void) {
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		
		std::cout << "[The Dog Type]" << std::endl;
		std::cout << j->getType() << " " << std::endl;
		std::cout << "[The Cat Type]" << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();

		std::cout << "[Freeing Cat]" << std::endl;
		delete i;
		std::cout << "[Freeing Dog]" << std::endl;
		delete j;
		std::cout << "[Freeing Animal]" << std::endl;
		delete meta;
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

void	ex01(void) {
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << "[Freeing Dog]" << std::endl;
		delete j;//should not create a leak
		std::cout << "[Freeing Cat]" << std::endl;
		delete i;
	}
}

void	invArg(void) {
	std::cout << "Error - Invalid argument." << std::endl;
	std::cout << "Please, use the following syntax: \"./animal_brains <model_number>\"" << std::endl;
	std::cout << "ex00 is 0 and ex01 is 1." << std::endl;
}

//	I don’t want to set the world on fire
int main(int ac, char **av) {
	int			x = 2;
	std::string	list[x] = {"0", "1"};
	int			i = 0;

	if (ac != 2) {
		std::cout << "Error - Wrong number of arguments." << std::endl;
		std::cout << "Please, use the following syntax: \"./animal_brains <model_number>\"" << std::endl;
		std::cout << "ex00 is 0 and ex01 is 1." << std::endl;
		return (1);
	}
	while (i < x && list[i] != av[1]) i++;
	if (i > x) {
		invArg();
		return (1);
	}
	switch (i) {
		case 0:
			{
				std::cout << "[Zero Hour - First exercise]" << std::endl;
				ex00();
				return (0);
			}
		case 1:
			{
				std::cout << "[Let's set the world on fire?]" << std::endl;
				ex01();
				return (0);
			}
		default:
			invArg();
			return (1);
	}
	return 0;
}
