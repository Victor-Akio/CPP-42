/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 00:00:06 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/28 07:14:25 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <cstdlib>
# include <ctime>

//	Casting - https://www.tutorialspoint.com/cplusplus/cpp_casting_operators.htm
//	clase base
class Base {
	private:
	protected:
	public:
		virtual ~Base(void);
};

//	classes derivadas
class A : public Base {};
class B : public Base {};
class C : public Base {};

//	funções mandatórias
Base	*generate(void);
void	identify(Base *p);
void	identify(Base &p);

#endif
