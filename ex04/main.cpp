/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghambrec <ghambrec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 15:06:18 by ghambrec          #+#    #+#             */
/*   Updated: 2025/12/04 16:47:25 by ghambrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

static std::string replace_str(const std::string &input, const std::string &s1, const std::string &s2)
{
	std::string	ret;
	std::size_t curr_pos;
	std::size_t	found_pos;

	if (s1.empty())
		return (input);
	curr_pos = 0;
	while ((found_pos = input.find(s1, curr_pos)) != std::string::npos)
	{
		ret += input.substr(curr_pos, found_pos - curr_pos);
		ret += s2;
		curr_pos = found_pos + s1.length();
	}
	ret += input.substr(curr_pos);
	return (ret);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Program must have exaclty 3 arguments!\n";
		return (1);
	}

	std::string filename = argv[1];
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];
	std::string line;
	std::string	text;

	// open input file
	std::ifstream infile(filename);
	if (!infile.is_open())
	{
		std::cerr << "Unable to open input file!\n";
		return (1);
	}
	// open output file
	std::ofstream outfile(filename + ".replace");
	if (!outfile.is_open())
	{
		std::cerr << "Unable to open output file!\n";
		return (1);
	}
	// get text from input file
	while (std::getline(infile, line))
	{
		text += line;
		if (!infile.eof())
			text += "\n";
	}
	infile.close();
	outfile << replace_str(text, s1, s2);
	outfile.close();
	return (0);
}
