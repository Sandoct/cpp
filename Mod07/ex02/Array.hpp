/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:37:09 by r                 #+#    #+#             */
/*   Updated: 2024/04/25 15:23:57 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <string>

template<typename T>

class Array
{
	private:
		T		*_array;
		size_t	_size;
 
	public:
		Array() : _array(new T[0]), _size(0) 
		{
			std::cout << "Array constructor called" << std::endl;
		};
		Array(size_t n) : _array(new T[n]), _size(n)
		{
			std::cout << "Array constructor called" << std::endl;
			//for (unsigned int i = 0; i < n; i++)
			//	this->_array[n] = 0;
		};
		Array( const Array &rhs)
		{
			std::cout << "Array copy constructor called" << std::endl;
			*this = rhs;
		};
		~Array()
		{
			if (this->_array != NULL)
				delete []	this->_array;
			std::cout << "Array destructor called" << std::endl;
		};
		Array& operator=( const Array &rhs)
		{
			if (this->_array != NULL)
				delete [] this->_array;
			if (this->_size != rhs->_size)
			{
				this->_size = rhs->_size;
				this->_array = new T[this->_size];
			}
			for (size_t i = 0; i < _size; i++)
				_array[i] = rhs->_array[i];
			return (*this);
		};
		T&	operator[](size_t index)
		{
			if (index >= this->_size)
				throw Array::out_of_bound_exception();
			return (this->_array[index]);
		};
		const	T&operator[](size_t index)const
		{
			if (index >= this->_size)
				throw Array::out_of_bound_exception();
			return (this->_array[index]);
		};
		class	out_of_bound_exception : public	std::exception
		{
			public:
				char const	*what() const throw()
				{
					return "Index is out of bound.";
				}
		};
}; 
 
#endif
