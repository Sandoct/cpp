/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpouzet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:23:19 by gpouzet           #+#    #+#             */
/*   Updated: 2023/11/07 16:00:09 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "contact.hpp"

class	PhoneBook {

public :
	Contact	_contacts[8];

	void	add_contact(void);
	void	search_contact(void);
	PhoneBook( void );
	~PhoneBook( void );
};

#endif
