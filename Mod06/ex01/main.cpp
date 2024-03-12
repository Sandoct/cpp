/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpouzet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:12:29 by gpouzet           #+#    #+#             */
/*   Updated: 2024/03/12 10:40:11 by gpouzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serializer.hpp"

int	main()
{
	Data	ptr;
	ptr.data = "test";
	ptr.next = NULL;
	
	std::cout << "Original adress :\t" << &ptr << std::endl;
	uintptr_t	serialized_ptr = serializer::serialize(&ptr);
	std::cout << "serialized address :\t" << &ptr << std::endl;
	Data	*ptr2 = serializer::deserialize(serialized_ptr);
	std::cout << "deserialize address :\t" << ptr2 << std::endl;
	return (0);
}
