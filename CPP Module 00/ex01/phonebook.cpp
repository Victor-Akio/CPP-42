/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 23:42:33 by vminomiy          #+#    #+#             */
/*   Updated: 2021/10/05 23:49:19 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(int argc, char const *argv[])
{
	if (strcmp(argv[1], "SEARCH") == 0)
		printf("SEARCH\n");
	else if (strcmp(argv[1], "ADD") == 0)
		printf("ADD\n");
	else if (strcmp(argv[1], "EXIT") == 0)
		printf("EXIT\n");
	else
		printf("FUCK You - %d\n", argc);
	return 0;
}

