/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 20:42:04 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/03 00:13:23 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*	NEW Zombie - "new" -> heap
**	Tenta Alocar e Inicializar um Zumbi, retornando um ponteiro para ele mesmo
*/
Zombie* Zombie::newZombie(std::string name) {return new Zombie(name);}
