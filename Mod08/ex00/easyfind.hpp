/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpouzet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:55:29 by gpouzet           #+#    #+#             */
/*   Updated: 2024/05/03 16:48:35 by gpouzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <string>
# include <vector>
# include <algorithm>

class NoFoundException : public std::exception
{
	public:
		virtual const char *what() const throw()
		{
			return ("No occurrence is found.");
		}
};

template<typename T>
void	easyfind(T& container, int find)
{
	typename T::iterator	it;
	it = std::find(container.begin(), container.end(), find);
	if (it != container.end())
		std::cout << "Found : " << *it << std::endl;
	else
		throw NoFoundException();
}
#endif
