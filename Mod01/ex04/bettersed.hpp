/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bettersed.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:22:46 by r                 #+#    #+#             */
/*   Updated: 2023/11/14 18:31:13 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BETTERSED_HPP
# define BETTERSED_HPP
# include <iostream>
# include <fstream>

class	Bettersed
{
	private:
		std::string	_src;
		std::string	_dest;

	public:
		Bettersed( std::string src );
		~Bettersed();
		void	ft_replace( std::string s1, std::string s2);
};
#endif
