/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:37:24 by r                 #+#    #+#             */
/*   Updated: 2023/11/08 14:50:23 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <iomanip>
# include <string>

class	Contact {

private :
	std::string	_f_name;
	std::string	_l_name;
	std::string	_n_name;
	std::string	_p_numb;
	std::string	_d_secr;
	std::string _input(std::string str) const;

public :
	Contact( void );
	~Contact( void );
	void	new_contact(void);
	void	summary(int index) const;
	void    display(int index) const;
};

#endif
