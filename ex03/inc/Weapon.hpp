/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghambrec <ghambrec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 12:51:22 by ghambrec          #+#    #+#             */
/*   Updated: 2025/12/02 14:19:38 by ghambrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Weapon
{
	private:
		std::string type_;
	
	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();
		const std::string &getType(void) const;
		void setType(std::string type);
};
