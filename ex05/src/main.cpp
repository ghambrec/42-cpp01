/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghambrec <ghambrec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 09:47:04 by ghambrec          #+#    #+#             */
/*   Updated: 2025/12/05 10:49:49 by ghambrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl a;

	a.complain("DEBUG");
	a.complain("INFO");
	a.complain("WARNING");
	a.complain("ERROR");
	return (0);
}
