/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghambrec <ghambrec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 19:51:01 by ghambrec          #+#    #+#             */
/*   Updated: 2025/12/02 12:20:58 by ghambrec         ###   ########.fr       */
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
		Zombie();
		~Zombie();
		void set_name(std::string name);
		void announce(void);
};

// functions
Zombie *zombieHorde(int N, std::string name);
