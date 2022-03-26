/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 00:00:06 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/26 16:15:18 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

# include <iostream>
# include <stdint.h>

/*	SERIALIZATION
**	https://en.cppreference.com/w/cpp/language/reinterpret_cast
**	https://www.tutorialspoint.com/cplusplus/cpp_casting_operators.htm
**	UINTPTR_T - https://stackoverflow.com/questions/1845482/what-is-uintptr-t-data-type
**	Usei a stdint.h no lugar da cstdint, pois a uintptr_t foi implementada originalmente na c++99(stdint.h)
**	a cstdint corresponde à c++11 que entra na categoriad e forbidden.
**	A estrutura pode ter qualquer coisa dentro.. no caso só para popular com algo, coloquei um "num"
*/
typedef struct s_data {
	int		num;
}				Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif
