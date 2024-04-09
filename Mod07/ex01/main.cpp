/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:06:37 by r                 #+#    #+#             */
/*   Updated: 2024/04/09 18:49:02 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main()
{
	std::cout << "---- String array ----" << std::endl;
	std::string strArray[5] = {"this", "is", "a", "string", "array"};
	iter<std::string>(strArray, 5, printarray<std::string>);

	std::cout << "---- Int array ----" << std::endl;
	int intArray[2] = {1, 2};
	iter<int>(intArray, 2, printarray<int>);

	std::cout << "---- Float array ----" << std::endl;
	float floatArray[2] = { 1.02f, 2.04f };
	iter<float>(floatArray, 2, printarray<float>);

	std::cout << "---- Double array ----" << std::endl;
	double doubleArray[2] = {1.1, 2.2};
	iter<double>(doubleArray, 2, printarray<double>);

	std::cout << "---- Char array ----" << std::endl;
	char charArray[2] = {'a', 'b'};
	iter(&charArray, 2, printarray);
	return (0);
}
