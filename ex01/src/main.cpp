/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghambrec <ghambrec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 20:02:35 by ghambrec          #+#    #+#             */
/*   Updated: 2025/12/04 16:57:05 by ghambrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int		size = 8;
	Zombie 	*horde;
	
	horde = zombieHorde(size, "brian");
	for (int i = 0; i < size; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
	return (0);
}
