/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 10:30:36 by r                 #+#    #+#             */
/*   Updated: 2024/05/21 12:03:02 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
// Constructor initializes attributes to 0 by default 

RPN::RPN()
{
	std::cout << "RPN constructor called" << std::endl;
}

RPN::RPN( const RPN& rhs)
{
	std::cout << "RPN copy constructor called" << std::endl;
	*this = rhs;
}

RPN::~RPN()
{
	std::cout << "RPN destructor called" << std::endl;
}

RPN	&RPN::operator=( const RPN& rhs )
{
	(void)rhs;
	return *this;
}

// Getters 
 
// Setters 
 
// Output
	void RPN::output()
{}
 
static bool isDouble(const std::string &str)
{
    if (str.empty())
        return false;
    if (str.find_first_not_of("0123456789.-") != std::string::npos)
        return false;
    size_t dash_pos = str.find('-');
    if ((dash_pos != std::string::npos && dash_pos != 0) || str.find('-') != str.rfind('-'))
        return false;
    size_t dot_pos = str.find('.');
    if (dot_pos != std::string::npos)
        if (dot_pos == 0 || dot_pos == str.size() - 1 || str.find('.') != str.rfind('.'))
            return false;
    if (str.find_first_of("0123456789") == std::string::npos)
        return false;

    return true;
}

bool RPN::is_operator(const std::string& token)
{
    return token == "+" || token == "-" || token == "*" || token == "/";
}

int RPN::apply_operator(const std::string& op, int a, int b)
{
    if (op == "+") return a + b;
    if (op == "-") return a - b;
    if (op == "*") return a * b;
    if (op == "/")
	{
        if (b == 0)
			throw std::runtime_error("Division by zero");
        return a / b;
    }
    throw std::invalid_argument("Invalid operator");
}

void		RPN::parse_RPN()
{
	std::istringstream	exp(_expression);
	std::string			token;
	int					a, b, p;

	while (exp >> token)
	{
		if (isDouble(token))
		{
			p = atoi(token.c_str());
			if (p > 9)
    			throw std::invalid_argument("The numbers should be less than 10");
			_numbers.push(p);
		}
		else
		{
			if (!is_operator(token))
    			throw std::invalid_argument("Invalid operator");
			if (_numbers.size() < 2)
    			throw std::invalid_argument("Invalid number of operands");
			b = _numbers.top();
			_numbers.pop();
			a = _numbers.top();
			_numbers.pop();
			_numbers.push(apply_operator(token, a, b));
		}
	}
	if (_numbers.size() != 1)
		throw std::runtime_error("Too many operands");
}

RPN::RPN(std::string input) : _expression(input)
{
	std::cout << "RPN constructor called" << std::endl;
	parse_RPN();
	std::cout << "Result : " << _numbers.top() << std::endl;
}
