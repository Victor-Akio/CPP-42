/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 23:22:05 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/29 00:15:48 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <cstring>

template<typename T>
void	iter(T *ptr, int len, void f(T const &)) {
	for (int i = 0; i < len; i++)
		(f)(ptr[i]);
}

template<typename T>
void	printer(T const &var) {
	std::cout << "Current var: " << var << std::endl;
}

#endif
