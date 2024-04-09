/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:08:34 by r                 #+#    #+#             */
/*   Updated: 2024/04/09 18:33:12 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>
# include <string>

template<typename T>
void	printarray(const T &var)
{
	std::cout << var << std::endl;
}

template<typename T>
void	iter(T *array, unsigned int length, void (*function)(const T &arr))
{
	for (unsigned int i = 0; i < length; i++)
		function(array[i]);
}

#endif
