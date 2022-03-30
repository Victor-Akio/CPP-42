/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 00:00:06 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/30 22:14:09 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <algorithm>
# include <stack>
# include <deque>

/*	STACK and ITERATOR
**	https://stackoverflow.com/questions/525365/does-stdstack-expose-iterators
**	https://en.cppreference.com/w/cpp/container/stack
**	https://en.cppreference.com/w/cpp/container/deque
**	Nesse exercício fiz uso do .tpp, totalmente opcional, mas apenas para ter a experiência.
*/
template<class T>
class MutantStack: public std::stack<T> {
	private:
	protected:
	public:
		MutantStack(void);
		~MutantStack(void);
		MutantStack(MutantStack<T> const &copy);
		MutantStack<T>		&operator=(MutantStack<T> const &copy);

		//	defining the iterator
		typedef typename std::stack<T>::container_type::iterator iterator;

		//	Iterator Functions
		iterator	begin(void);
		iterator	end(void);
};

# include "MutantStack.tpp"

#endif
