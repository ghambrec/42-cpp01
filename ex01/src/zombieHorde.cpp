/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghambrec <ghambrec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 12:12:02 by ghambrec          #+#    #+#             */
/*   Updated: 2025/12/02 12:33:31 by ghambrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	int		i;
	Zombie	*horde;

	horde = new Zombie[N];
	i = 0;
	while (i < N)
	{
		horde[i].set_name(name);
		i++;
	}
	return (horde);
}
