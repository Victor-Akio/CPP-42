/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 01:17:38 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/28 20:54:33 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

//	Serialize converte um endereço de estrutura de dados e converte para umn número serial
uintptr_t	serialize(Data* ptr) {
	uintptr_t	raw;
	
	raw = reinterpret_cast<uintptr_t>(ptr);
	return (raw);
}

//	Deserialize converte de volta para ponteiro, um número serializado
Data		*deserialize(uintptr_t raw) { return (reinterpret_cast<Data *>(raw)); }

int		main(void) {
	std::cout << "[Serialize e G]" << std::endl;
	Data	*ptr = new Data();

	if (!ptr)
		return (1);
	ptr->num = 42;
	std::cout << "At the beggining: " << ptr <<std::endl;
	std::cout << "------------------------------------------------------" << std::endl;
	uintptr_t raw = serialize(ptr);
	std::cout << "Serialize the data: " << raw << std::endl;
	std::cout << "------------------------------------------------------" << std::endl;
	Data	*ret = deserialize(raw);
	std::cout << "Deserialization of data: " << ret <<std::endl;
	
	delete ptr;
	return (0);
}
