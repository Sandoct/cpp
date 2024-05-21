/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:06:43 by r                 #+#    #+#             */
/*   Updated: 2024/05/21 14:14:30 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int argc, char** argv)
{
	if (argc < 2)
	{
		std::cout << "Error" << std::endl;
	}
	try
    {
        PmergeMe sortCompet(argv);
    }
    catch (const std::exception& e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    return (0);

}
