/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghambrec <ghambrec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 20:02:35 by ghambrec          #+#    #+#             */
/*   Updated: 2025/12/01 20:31:49 by ghambrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *z;
	
	z = newZombie("brian");
	z->announce();
	randomChump("foo");
	delete z;
	return (EXIT_SUCCESS);
}
