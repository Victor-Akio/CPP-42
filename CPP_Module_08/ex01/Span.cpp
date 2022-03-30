/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 07:27:38 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/30 10:50:31 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N): size(N) {}
Span::~Span(void) { Span::nList.clear(); }
Span::Span(Span const &copy) { *this = copy; }
Span	&Span::operator=(Span const copy) {
	this->size = copy.size;
	this->nList.clear();
	this->nList = copy.nList;
	return (*this);
}

std::multiset<int>	Span::getNList(void) { return (this->nList); }

void			Span::addNumber(int n) {
	if (this->nList.size() >= this->size)
		throw Span::SpanIsFullException();
	this->nList.insert(n);
}

unsigned int	Span::shortestSpan(void) {
	if (this->nList.size() <= 1)
		throw Span::NotSpanException();
	std::multiset<int>::iterator	x = this->nList.begin();
	std::multiset<int>::iterator	y = ++this->nList.begin();
	unsigned int	min = std::abs(*y++ - *x++);
	
	while (y != this->nList.end()) {
		unsigned int delta = std::abs(*y - *x);
		if (min > delta)
			min = delta;
		x++;
		y++;
	}
	return (min);
}

unsigned int	Span::longestSpan(void) {
	if (this->nList.size() <= 1)
		throw Span::NotSpanException();
	int	big = *std::max_element(this->nList.begin(), this->nList.end());
	int	small = *std::min_element(this->nList.begin(), this->nList.end());
	return (std::abs(big - small));
}

const char	*Span::SpanIsFullException::what() const throw() { return ("Exception - Span is already full"); }
const char	*Span::NotSpanException::what() const throw() { return ("Exception - 404: No span found or only one or none number in span"); }
