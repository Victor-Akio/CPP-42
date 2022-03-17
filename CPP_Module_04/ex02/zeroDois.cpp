/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zeroDois.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 18:33:34 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/17 03:29:42 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Main.hpp"

void	ex02(void) {
	{
		std::cout << "[Standard main test]" << std::endl;
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << "[Freeing Dog]" << std::endl;
		delete j;//should not create a leak
		std::cout << "[Freeing Cat]" << std::endl;
		delete i;
		std::cout << "------------------------------------------------------\n" << std::endl;
	}
	{
		int		x = 4;
		Animal	**animals = new Animal*[x];

		std::cout << "[Keep spawning lots and lots of animals.]" << std::endl;
		for (int i = 0; i < x; i++) {
			if ((i % 2) == 0)
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
			std::cout << "---------------------------------------[Division to better view the output]" << std::endl;
		}
		std::cout << "[Opening the front door]" << std::endl;
		for (int i = 0; i < x; i++) {
				delete animals[i];
				std::cout << "---------------------------------------[Division to better view the output]" << std::endl;
		}
		delete[] animals;
		std::cout << std::endl;
	}
	{
		std::cout << "[Deep copy and Shallow copy tests...]\n" << std::endl;
		Cat *cat = new Cat();
		Dog *dog = new Dog();
		std::cout << "---------------------------------------[Division to better view the output]" << std::endl;

		std::cout << "[Setting some thoughts to them...]" << std::endl;
		cat->setBrainIdeas(0, "\"Let the World Burn!\"");
		dog->setBrainIdeas(1, "\"Look, a BALLL!!!\"");
		std::cout << "The Cat often thinks: " << cat->getBrainIdeas(0) << std::endl;
		std::cout << "The Dog often thinks: " << dog->getBrainIdeas(1) << std::endl;
		std::cout << "---------------------------------------[Division to better view the output]" << std::endl;
		std::cout << "[Now, creating a Deep Copy of the Animals..]" << std::endl;

		Cat *ccat = new Cat(*cat);
		Dog *cdog = new Dog(*dog);
		std::cout << "The CopyCat often thinks: " << ccat->getBrainIdeas(0) << std::endl;
		std::cout << "The CopyDog often thinks: " << cdog->getBrainIdeas(1) << std::endl;
		std::cout << "---------------------------------------[Division to better view the output]" << std::endl;
		std::cout << "[Setting diferent thoughts to the copied animals.]" << std::endl;
		ccat->setBrainIdeas(0, "\"Maybe ... it is nap time!\"");
		cdog->setBrainIdeas(1, "\"That might be edible..\"");
		std::cout << "The CopyCat is now thinking: " << ccat->getBrainIdeas(0) << std::endl;
		std::cout << "The CopyDog is now thinking: " << cdog->getBrainIdeas(1) << std::endl;
		std::cout << "---------------------------------------[Division to better view the output]" << std::endl;
		std::cout << "[While both of the original animas still thinks keeps the original thoghts]\n" << std::endl;

		std::cout << "The Cat still thinks: " << cat->getBrainIdeas(0) << std::endl;
		std::cout << "The Dog still thinks: " << dog->getBrainIdeas(1) << std::endl;
		std::cout << "---------------------------------------[Division to better view the output]" << std::endl;
		std::cout << std::endl;
		
		delete cat;
		delete dog;
		delete ccat;
		delete cdog;
	}
}