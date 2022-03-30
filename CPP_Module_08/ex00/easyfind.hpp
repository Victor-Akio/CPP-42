/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 00:00:06 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/30 02:53:23 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <list>

/*	STL
**	https://www.tutorialspoint.com/cplusplus/cpp_stl_tutorial.htm
**	https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
**	Containers - https://en.cppreference.com/w/cpp/container
**	List - https://en.cppreference.com/w/cpp/container/list
*/
//	Excessão para inteiro não encontrado
class NotFoundException: public std::exception {
	public:
		virtual const char *what() const throw() {
			return ("Exception - 404: Not Found");
		}
};

//	Usa o find para achar um inteiro dentro de um array, do começo ao fim.
template <typename T>
void	easyfind(T container, int num) {
	typename T::iterator		iter;
	iter = std::find(container.begin(), container.end(), num);
	if (*iter != num)
		throw NotFoundException();
	else
		std::cout << "Found a " << num << std::endl;
}

#endif
