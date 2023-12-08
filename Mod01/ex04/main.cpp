/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:52:16 by r                 #+#    #+#             */
/*   Updated: 2023/11/14 18:19:55 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bettersed.hpp"

int	main( int argc, char** argv)
{
	if (argc != 4)
	{
		std::cerr << "Need <filename> <to replace> <replace>" << std::endl;
		return (1);
	}
	Bettersed	rep(argv[1]);
	rep.ft_replace(argv[2], argv[3]);
}
