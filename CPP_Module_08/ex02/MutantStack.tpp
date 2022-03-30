/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack<T>.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 19:56:25 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/30 20:29:13 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template<class T>
MutantStack<T>::MutantStack(void): std::stack<T>() {}

template<class T>
MutantStack<T>::~MutantStack(void) {}

template<class T>
MutantStack<T>::MutantStack(MutantStack<T> const &copy): std::stack<T>(copy) { *this = copy; }

template<class T>
MutantStack<T>		&MutantStack<T>::operator=(MutantStack<T> const &copy) {
	this->c = copy.c;
	return (*this);
}

//	'c' corresponde ao container subjacente(no caso deque)
template<class T>
typename MutantStack<T>::iterator	MutantStack<T>::begin(void) {
	return (std::stack<T>::c.begin());
}

template<class T>
typename MutantStack<T>::iterator	MutantStack<T>::end(void) {
	return (std::stack<T>::c.end());
}
