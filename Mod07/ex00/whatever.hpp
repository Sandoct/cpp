/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:09:11 by r                 #+#    #+#             */
/*   Updated: 2024/04/09 17:01:24 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <iostream>
# include <string>

template<typename T>
void	swap(T &elem1, T &elem2)
{
	T	tmp;

	tmp = elem1;
	elem1 = elem2;
	elem2 = tmp;;
}

template<typename T>
T	min(T elem1, T elem2)
{
	if (elem1 < elem2)
		return (elem1);
	return (elem2);
}

template<typename T>
T max(T elem1, T elem2)
{
	if (elem1 > elem2)
		return (elem1);
	return (elem2);
}

#endif
