/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 20:42:17 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/03 00:13:11 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*	Zumbi no monte...
**	Neste momento não há necessidade de criar um zumbi na heap,
**	uma vez que este zumbi funcionaria durante esta função apenas. rápido e fácil
*/
void	Zombie::randomChump(std::string name){
	Zombie chump(name);
	chump.announce();
}