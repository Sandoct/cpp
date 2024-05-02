/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpouzet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:55:29 by gpouzet           #+#    #+#             */
/*   Updated: 2024/05/02 17:21:55 by gpouzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <string>

template<typename T>
void	easyfind(T list, int find)
{
	for (int i = 0; i < list.length(); i++)
	{
		if (list[i] == find)
			return (i);
	}
	throw NoFindException()
}
class NoFindException : public std::exception
{
	public:
		virtual const char *what() const throw()
		{
			return ("No occurrence is found.");
		}
}
#endif
