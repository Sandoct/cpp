/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:56:30 by r                 #+#    #+#             */
/*   Updated: 2024/03/11 18:07:25 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "converter.hpp"

int	main(int argc, char **argv)
{
	if (argc == 2)
		ScalarConverter::convert(argv[1]);
	else
		std::cout << "Error syntaxe! : should be ./convert [string]" << std::endl;
}
