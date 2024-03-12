/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bettersed.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:39:22 by r                 #+#    #+#             */
/*   Updated: 2024/01/23 15:35:09 by gpouzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bettersed.hpp"

Bettersed::Bettersed( std::string src) : _src(src)
{
	this->_dest = src + ".replace";
}

Bettersed::~Bettersed()
{
}

void	Bettersed::ft_replace( std::string s1, std::string s2 )
{
	std::ifstream	infile(this->_src.c_str());
	if (!infile.is_open())
	{
		std::cerr << "Error : Unable to open input file." << std::endl;
		return ;
	}
	std::ofstream	outfile(this->_dest.c_str());
	if (!outfile.is_open())
	{
		infile.close();
		std::cerr << "Error : Unable to open output file." << std::endl;
		return ;
	}
	std::string		content;
	if (std::getline(infile, content, '\0'))
	{
		size_t	index = content.find(s1);
		while (index != std::string::npos)
		{
			content.erase(index, s1.size());
			content.insert(index, s2);
			index = content.find(s1);
		}
		outfile << content;
	}
	else
		std::cerr << "Empty file." << std::endl;
	infile.close();
	outfile.close();
}
