/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:40:03 by r                 #+#    #+#             */
/*   Updated: 2024/05/17 14:49:51 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

template <typename T>
static void	diplay(MutantStack<T>& mstack)
{
	typename MutantStack<T>::iterator it = mstack.begin();
    typename MutantStack<T>::iterator ite = mstack.end();

    std::cout << "MutantStack :" << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << std::endl;
}

template <typename T>
static void	rdiplay(MutantStack<T>& mstack)
{
	typename MutantStack<T>::iterator it = mstack.begin();
    typename MutantStack<T>::iterator ite = mstack.end();

    std::cout << "MutantStack revers :" << std::endl;
    while (it != ite--)
        std::cout << *ite << std::endl;
    std::cout << std::endl;
}

int main()
{
	// test with list
	std::cout << "// test with list //" << std::endl << std::endl;
	std::list<int>	lstack;

	lstack.push_back(5);
	lstack.push_back(17);

	std::cout << lstack.back() << std::endl;
	std::cout << std::endl;

	lstack.pop_back();

	std::cout << lstack.size() << std::endl;
	std::cout << std::endl;

	lstack.push_back(3);
	lstack.push_back(5);
	lstack.push_back(737);
	//[...]
	lstack.push_back(0);

	std::list<int>::iterator lit = lstack.begin();
	std::list<int>::iterator lite = lstack.end();
	
	++lit;
	--lit;
	while (lit != lite)
	{
		std::cout << *lit << std::endl;
		++lit;
	}
	// test with MutantStack
	std::cout << std::endl << " // test with MutantStack //" << std::endl << std::endl;
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;
	std::cout << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;
	std::cout << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	// personal test
	std::cout << std::endl << "// personal test //" << std::endl << std::endl;
	MutantStack<int>	copy(mstack);
	std::cout << std::endl;
	diplay(copy);
	rdiplay(copy);
	std::cout << "pop top element" << std::endl << std::endl;
	copy.pop();
	rdiplay(copy);
	return 0;
}
