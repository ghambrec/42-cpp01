/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghambrec <ghambrec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 13:12:16 by ghambrec          #+#    #+#             */
/*   Updated: 2025/12/04 14:58:15 by ghambrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &w)
	:	name_(name),
		w_(w)
{}

HumanA::~HumanA(void) {};

void HumanA::attack(void)
{
	std::cout << name_ << " attacks with their " << w_.getType();
}
