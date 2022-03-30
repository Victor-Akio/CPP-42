/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 01:17:38 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/30 22:11:13 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int		main(void) {
	std::cout << "[PDF tests]" << std::endl;
	MutantStack<int> mstack;

	std::cout << "[ push 5 and push 17 on top ]" << std::endl;
	mstack.push(5);
	mstack.push(17);
	std::cout << "[ Print top of stack (17) ]" << std::endl;
	std::cout << mstack.top() << std::endl;
	std::cout << "[then Pop top one (17)]" << std::endl;
	mstack.pop();
	std::cout << "[than the size will be...]" << std::endl;
	std::cout << mstack.size() << std::endl;
	std::cout << "[Push 3, 5, 737 and 0 to the pile]" << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	std::cout << "[Now iterate begin() and end() and print the pile]" << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "[Now.. lets see, try to stack it]" << std::endl;
	std::stack<int> s(mstack);
	std::cout << "The current stack size is " << s.size() << std::endl;
	std::cout << "The top item in stack is " << s.top() << std::endl;
	return (0);
}
