/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 00:00:06 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/30 10:49:56 by vminomiy         ###   ########.fr       */
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
		void			addNumber(int n);
		unsigned int	shortestSpan(void);
		unsigned int	longestSpan(void);
		std::multiset<int>	getNList(void);
		class SpanIsFullException: public std::exception {
			virtual const char *what() const throw();
		};
		class NotSpanException: public std::exception {
			virtual const char *what() const throw();
		};
		template<typename T>
		void	addNumber(T begin, T end);
};

template<typename T>
void	Span::addNumber(T begin, T end) {
	if (this->nList.size() + std::distance(begin, end) > this->size)
		throw Span::SpanIsFullException();
	this->nList.insert(begin, end);
}

#endif
