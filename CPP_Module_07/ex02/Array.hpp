/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 06:36:54 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/29 07:26:47 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <cstring>
# include <cstdlib>

# define MAX_VAL 750

template<typename T>
class Array {
	private:
		T				*arr;
		unsigned int	num;
	protected:
	public:
		//	Construto padrão, cria um array(int) vazio
		Array(void) { arr = new int(); }
		//	Construtor parametrizado que leva quantidade de elementos
		Array(unsigned int n): num(n) { arr = new int[num]; }
		//	Destrutor padrão com free
		~Array(void) { delete[] arr; }
		//	Copy constructor e Operator= (Hard copy)
		Array(Array const &copy) { *this = copy; }
		Array	&operator=(Array const &copy) {
			num = copy.num;
			arr = new int[num];
			return (*this);
		}
		//	Overload operator[]- Elementos são acessados pelo []
		T		&operator[](unsigned int index) {
			if (index >= num)
				throw OutRangeException();
			return (arr[index]);
		}
		//	getter para num, void e sem modificar a instancia
		unsigned int	size(void) { return (this->num); }

		//	Exception cases
		class OutRangeException: public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("Exception - Out of Range!");
				}
		};
};

#endif