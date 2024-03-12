/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpouzet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 09:54:53 by gpouzet           #+#    #+#             */
/*   Updated: 2024/03/12 10:40:01 by gpouzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP
# include <iostream>
# include <string>
# include <stdint.h>

typedef struct Data
{
	std::string	data;
	Data		*next;
}				Data;

// Class definition
class serializer
{
	private:
 
	public:
	// Constructor 
		serializer(); 
		serializer( const serializer &rhs); 
		~serializer(); 
		serializer& operator=( const serializer &rhs); 
	// function
		static uintptr_t	serialize(Data* ptr);
		static Data		*deserialize(uintptr_t raw);
}; 
 
#endif
