/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghambrec <ghambrec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 12:51:11 by ghambrec          #+#    #+#             */
/*   Updated: 2025/12/04 14:58:17 by ghambrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string	name_;
		Weapon		&w_;
	
	public:
		HumanA() = delete;
		HumanA(const std::string &name, Weapon &w);
		~HumanA();
		void attack(void);
};
