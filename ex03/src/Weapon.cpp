/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghambrec <ghambrec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 13:12:16 by ghambrec          #+#    #+#             */
/*   Updated: 2025/12/02 14:19:50 by ghambrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {};

Weapon::Weapon(std::string type)
	:	type_(type)
{}

Weapon::~Weapon() {}

const std::string &Weapon::getType(void) const
{
	return (type_);
}

void Weapon::setType(std::string type)
{
	type_ = type;
}
