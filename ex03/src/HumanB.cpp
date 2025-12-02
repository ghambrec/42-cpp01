/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghambrec <ghambrec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 13:12:16 by ghambrec          #+#    #+#             */
/*   Updated: 2025/12/02 14:19:38 by ghambrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
	: name_(name)
{}

HumanB::~HumanB() {}

void HumanB::attack(void)
{
	std::cout << name_ << " attacks with their " << w_.getType();
}

void HumanB::setWeapon(Weapon w)
{
	w_ = w;
}
