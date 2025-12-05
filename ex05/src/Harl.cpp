/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghambrec <ghambrec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 09:46:53 by ghambrec          #+#    #+#             */
/*   Updated: 2025/12/05 10:49:19 by ghambrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month.\n";
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(std::string level)
{	
	void (Harl::*complain_functions[])() = {
		&Harl::debug, 
		&Harl::info, 
		&Harl::warning, 
		&Harl::error
	};

	std::string complain_levels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	int i = 0;
	while (i < 4)
	{
		if (complain_levels[i] == level)
		{
			(this->*complain_functions[i])();
			return ;
		}
		i++;
	}
}
