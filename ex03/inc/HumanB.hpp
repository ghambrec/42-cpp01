/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghambrec <ghambrec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 12:51:19 by ghambrec          #+#    #+#             */
/*   Updated: 2025/12/04 14:59:21 by ghambrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string	name_;
		Weapon		*w_;
	
	public:
		HumanB() = delete;
		HumanB(std::string name);
		~HumanB();
		void attack(void);
		void setWeapon(Weapon &w);
};
