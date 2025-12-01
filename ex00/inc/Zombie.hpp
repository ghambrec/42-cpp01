/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghambrec <ghambrec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 19:51:01 by ghambrec          #+#    #+#             */
/*   Updated: 2025/12/01 20:27:09 by ghambrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string name_;

	public:
		Zombie() = delete;
		Zombie(std::string name);
		~Zombie();
		void announce(void);
};

// functions
Zombie	*newZombie(std::string name);
void	randomChump(std::string name);