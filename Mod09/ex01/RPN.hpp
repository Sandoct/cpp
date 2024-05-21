/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 10:27:04 by r                 #+#    #+#             */
/*   Updated: 2024/05/21 12:07:05 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP
# include <iostream>
# include <sstream>
# include <cstdlib>
# include <string>
# include <stack>

// Class definition
class RPN
{
	private:
		std::string		_expression;
		std::stack<int>	_numbers;
		RPN(); 
		bool	is_operator(const std::string &token);
		int		apply_operator(const std::string &op, int a, int b);
		void	parse_RPN();
 
	public:
	// Constructor 
		RPN(std::string input);
		RPN( const RPN &rhs); 
		~RPN(); 
		RPN& operator=( const RPN &rhs); 
}; 
 
#endif
