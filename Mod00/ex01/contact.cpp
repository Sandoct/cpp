/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:01:22 by r                 #+#    #+#             */
/*   Updated: 2024/01/19 16:04:32 by gpouzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string Contact::_input(std::string str) const
{
	std::string	input = "";
	int			valid = 1;
	while (valid)
    {
        std::cout << str << std::endl;
        std::getline(std::cin, input);
		if (std::cin.eof())
			break;
        if (std::cin.good() && !input.empty())
            valid = 0;
        else {
            std::cin.clear();
            std::cout << "Invalid input; please try again." << std::endl;
        }
    }
    return (input);
}

void    Contact::new_contact(void)
{
	std::cout << std::endl;
	this->_f_name = this->_input("Please enter contact first name: ");
	this->_l_name = this->_input("Please enter contact last name: ");
	this->_n_name = this->_input("Please enter contact nickname: ");
	this->_p_numb = this->_input("Please enter contact phone number: ");
	this->_d_secr = this->_input("Please enter contact darkest secret: ");
	std::cout << std::endl;
}

void    Contact::summary(int index) const
{
	if (this->_f_name.empty() || this->_l_name.empty() || this->_n_name.empty())
		return ;
    std::cout << "|" << std::setw(10) << index + 1 << std::flush;
	if (this->_f_name.length() > 10)
    	std::cout << "|" << this->_f_name.substr(0, 9) + "." << std::flush;
	else
    	std::cout << "|" << std::setw(10) << this->_f_name << std::flush;
	if (this->_l_name.length() > 10)
    	std::cout << "|" << this->_l_name.substr(0, 9) + "." << std::flush;
	else
    	std::cout << "|" << std::setw(10) << this->_l_name << std::flush;
	if (this->_n_name.length() > 10)
    	std::cout << "|" << this->_n_name.substr(0, 9) + "." << std::flush;
	else
    	std::cout << "|" << std::setw(10) << this->_n_name << std::flush;
	std::cout << "|" << std::endl;
}

void    Contact::display(int index) const
{
	if (this->_f_name.empty() || this->_l_name.empty() || this->_n_name.empty())
		return ;
    std::cout << std::endl;
    std::cout << "---->> CONTACT #" << index << " <<----" << std::endl;
    std::cout << "First Name:\t" << this->_f_name << std::endl;
    std::cout << "Last Name:\t" << this->_l_name << std::endl;
    std::cout << "Nickname:\t" << this->_n_name << std::endl;
    std::cout << "Phone number:\t" << this->_p_numb << std::endl;
    std::cout << "Darkest secret:\t" << this->_d_secr << std::endl;
    std::cout << std::endl;
}
