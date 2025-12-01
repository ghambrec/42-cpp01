/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghambrec <ghambrec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 20:02:42 by ghambrec          #+#    #+#             */
/*   Updated: 2025/12/01 20:29:00 by ghambrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	name_ = name;
}

Zombie::~Zombie(void)
{
	std::cout << name_ << ": died\n";
}

void Zombie::announce(void)
{
	std::cout << name_ << ": BraiiiiiiinnnzzzZ...\n";
}
