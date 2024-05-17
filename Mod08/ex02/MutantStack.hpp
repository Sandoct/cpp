/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:42:44 by r                 #+#    #+#             */
/*   Updated: 2024/05/17 14:17:38 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <string>
# include <stack>

template <typename T>
// Class definition
class MutantStack : public std::stack<T>
{
	private:
 
	public:
		typedef std::stack<T> stack;
		typedef typename stack::container_type::iterator iterator;
	// Constructor 
		MutantStack() : stack()
		{
			std::cout << "MutantStack constructor called" << std::endl;
		};
		MutantStack( const MutantStack &rhs) : stack(rhs)
		{
			std::cout << "MutantStack copy constructor called" << std::endl;
		};
		~MutantStack()
		{
			std::cout << "MutantStack destructor called" << std::endl;
		};
		MutantStack& operator=( const MutantStack &rhs) 
		{
			return (stack::operator=(rhs));
		};
	// Iterator
		iterator	begin(void)
		{
			return this->c.begin();
		}
		iterator	end(void)
		{
			return this->c.end();
		}
}; 
 
#endif
