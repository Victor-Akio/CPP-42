/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 00:00:06 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/28 19:59:09 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

/*	TEMPLATES
**	https://en.cppreference.com/w/cpp/language/templates
**	Basicamente, define uma familia de classe ou objetos
*/
template<typename T>
T max(T x, T y) {return (x > y ? x : y); }

template<typename T>
T min(T x, T y) {return (x < y ? x : y); }

template<typename T>
void swap(T &x, T &y) {
	T	tmp = x;
	x = y;
	y = tmp;
}

#endif
