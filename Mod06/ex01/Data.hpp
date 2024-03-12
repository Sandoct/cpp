/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 22:15:05 by r                 #+#    #+#             */
/*   Updated: 2024/03/11 22:16:57 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP
# include <iostream>
# include <string>

// Class definition
class Data
{
	private:
 
	public:
	// Constructor 
		Data(); 
		Data( const Data &rhs); 
		~Data(); 
		Data& operator=( const Data &rhs); 
	// Getters 
	// Setters 
	// Output 
		void output(); 
}; 
 
#endif
