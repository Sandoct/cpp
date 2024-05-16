/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 17:25:57 by r                 #+#    #+#             */
/*   Updated: 2024/05/16 18:05:37 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <string>
# include <vector>
# include <algorithm>

// Class definition
class Span
{
	private:
		size_t				_size;
		std::vector<int>	_vector;
		Span(); 
 
	public:
	// Constructor 
		Span( const Span &rhs); 
		Span(size_t number);
		~Span(); 
		Span& operator=( const Span &rhs); 
		size_t	shortestSpan();
		size_t	longestSpan();
		void	addNumber(size_t number);
		void	fillContainer();
		void	show();
	// Exception
		class FullException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Span already full.");
				}
		};
		class TooShortException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("container too short.");
				}
		};
}; 
 
#endif
