/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:46:30 by r                 #+#    #+#             */
/*   Updated: 2023/11/08 14:52:38 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
    std::cout << "PhoneBook constructor called!" << std::endl;
}

PhoneBook::~PhoneBook()
{
    std::cout << "PhoneBook destructor called!" << std::endl;
}

void    PhoneBook::add_contact(void)
{
    static int  i;

    this->_contacts[i].new_contact();
    i++;
	if (i > 7)
		i = 0;
}

void    PhoneBook::search_contact(void)
{
	int			index;

	for	(int i = 0; i < 7; i++)
		this->_contacts[i].summary(i);
	while (1)
    {
        std::cout << "Index : ";
        std::cin >> index;
		if (std::cin.good())
			if (index < 9 && index > 0)
				break ;
		std::cin.clear();
		std::cout << "Invalid index; please try again." << std::endl;
	}
	this->_contacts[index - 1].display(index);
	std::cin.ignore(10000, '\n');
}

int	main(void)
{
	PhoneBook	book;
	std::string	str;

	std::cout << "|---Welcome to the awesome Phonebook---|" << std::endl;
	std::cout << "|              1-ADD                   |" << std::endl;
	std::cout << "|              2-SEARCH                |" << std::endl;
	std::cout << "|              3-EXIT                  |" << std::endl;
	std::cout << "|--------------------------------------|" << std::endl;
	while (1)
	{
		std::cout << "> ";
		getline(std::cin, str);
		if ((str.compare("ADD")) == 0)
			book.add_contact();
		else if ((str.compare("SEARCH")) == 0)
			book.search_contact();
		else if ((str.compare("EXIT")) == 0)
			break;
		else
			std::cout << "Command not found, please read the menu above!!" << std::endl;
	}
	return (0);
}
