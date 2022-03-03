/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 00:32:32 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/03 01:20:52 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*Zombie::zombieHorde(int N, std::string name) {
	Zombie	*horde;
	int		i = 0;

	horde = new Zombie[N];
	while (i < N) {
		horde[i].setName(name);
		i++;
	}
	return (horde);
}
