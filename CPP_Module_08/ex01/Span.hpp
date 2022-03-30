/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 00:00:06 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/30 19:44:59 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <set>
# include <cmath>
# include <cstdlib>
# include <vector>

/*	MULTISET e VECTOR
**	https://en.cppreference.com/w/cpp/container/multiset
**	https://en.cppreference.com/w/cpp/container/vector
*/
class Span {
	private:
		Span(void);
		std::multiset<int>	nList;
		unsigned int		size;
	protected:
	public:
		Span(unsigned int N);
		~Span(void);
		Span(Span const &copy);
		Span			&operator=(Span const copy);
		//	adiciona um número à lista
		void			addNumber(int n);
		//	Retorna a menos distancia e a maior distancia, respectivamente, de todos numeros da lista
		unsigned int	shortestSpan(void);
		unsigned int	longestSpan(void);
		//	getter para a lista
		std::multiset<int>	getNList(void);

		//	Exception cases
		class SpanIsFullException: public std::exception {
			virtual const char *what() const throw();
		};
		class NotSpanException: public std::exception {
			virtual const char *what() const throw();
		};
		
		//	Template call
		template<typename T>
		void	addNumber(T begin, T end);
};

//	Adiciona um range de numeros para a lista
template<typename T>
void	Span::addNumber(T begin, T end) {
	if (this->nList.size() + std::distance(begin, end) > this->size)
		throw Span::SpanIsFullException();
	this->nList.insert(begin, end);
}

#endif
