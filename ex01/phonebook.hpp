/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpouzet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:23:19 by gpouzet           #+#    #+#             */
/*   Updated: 2023/10/28 19:06:01 by gpouzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class	Contact {

public :
	char	*f_name;
	char	*l_name;
	char	*n_name;
	int		*f_numb;
	char	*d_secr;

	Contact( void );
	~Contact( void );
}

class	PhoneBook {

public :
	int[8]	contact;

	public	ADD( Contact );
	public	SEARCH( Contact );
	public	EXIT( void );
	PhoneBook( void );
	~PhoneBook( void );
}
