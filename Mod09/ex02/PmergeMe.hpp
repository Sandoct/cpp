/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 12:11:24 by r                 #+#    #+#             */
/*   Updated: 2024/05/21 14:18:44 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP
# include <iostream>
# include <string>
# include <deque>
# include <vector>
# include <algorithm>

// Class definition
class PmergeMe
{
	private:
		char	**_arg;
		std::vector<size_t>	_vec;
		std::deque<size_t>	_deq;
		void	SortVec(std::vector<size_t> &vec);
		void	SortDeq(std::deque<size_t> &deq);
		void	printVec(std::vector<size_t> &v);
		void	printDeq(std::deque<size_t> &d);
		void	parsing();
		void	sort();
		PmergeMe(); 
 
	public:
	// Constructor 
		PmergeMe(char **input); 
		PmergeMe( const PmergeMe &rhs); 
		~PmergeMe(); 
		PmergeMe& operator=( const PmergeMe &rhs); 
}; 
 
#endif
