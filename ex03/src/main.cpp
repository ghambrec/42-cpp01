/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghambrec <ghambrec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 12:54:11 by ghambrec          #+#    #+#             */
/*   Updated: 2025/12/04 14:53:52 by ghambrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club\n");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club\n");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club\n");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club\n");
		jim.attack();
	}
	return 0;
}
