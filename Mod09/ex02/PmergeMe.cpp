/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 12:35:25 by r                 #+#    #+#             */
/*   Updated: 2024/05/21 15:28:52 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
// Constructor initializes attributes to 0 by default 

PmergeMe::PmergeMe()
{
	std::cout << "PmergeMe constructor called" << std::endl;
}

PmergeMe::PmergeMe( const PmergeMe& rhs)
{
	std::cout << "PmergeMe copy constructor called" << std::endl;
	*this = rhs;
}

PmergeMe::~PmergeMe()
{
	std::cout << "PmergeMe destructor called" << std::endl;
}

PmergeMe	&PmergeMe::operator=( const PmergeMe& rhs )
{
	(void)rhs;
	return *this;
}

// Getters 
static bool	isDigit(std::string str)
{
	return (str.find_first_not_of("0123456789") == std::string::npos);
}

void PmergeMe::printVec(std::vector<size_t> &v)
{
	std::vector<size_t>::iterator	it;

	std::cout << "Vector :";
	for (it = v.begin(); it != v.end(); ++it)
		std::cout << " " << *it;
	std::cout << std::endl;
}

void PmergeMe::printDeq(std::deque<size_t> &d)
{
	std::deque<size_t>::iterator	it;

	std::cout << "Deque :";
	for (it = d.begin(); it != d.end(); ++it)
		std::cout << " " << *it;
	std::cout << std::endl;
}

static void insertInSortedOrderVec(std::vector<size_t> &sortedVec, int value)
{
	std::vector<size_t>::iterator pos = std::lower_bound(sortedVec.begin(), sortedVec.end(), value);
    sortedVec.insert(pos, value);
}

static void insertInSortedOrderDeq(std::deque<size_t> &sortedDeque, int value)
{
	std::deque<size_t>::iterator pos = std::lower_bound(sortedDeque.begin(), sortedDeque.end(), value);
    sortedDeque.insert(pos, value);
}

// Setters 
void PmergeMe::SortVec(std::vector<size_t> &vec)
{
    int n = vec.size();
    if (n <= 1)
        return;

    std::vector<size_t> A;
    std::vector<size_t> B;
    std::vector<size_t> C;

    for (int i = 0; i < n; i += 2)
	{
        if (i + 1 < n)
		{
            if (vec[i] < vec[i + 1])
			{
                A.push_back(vec[i]);
                B.push_back(vec[i + 1]);
            }
			else
			{
                A.push_back(vec[i + 1]);
                B.push_back(vec[i]);
            }
        }
		else
            C.push_back(vec[i]);
    }

    SortVec(A);
    SortVec(B);

    vec.clear();
    size_t i = 0, j = 0;
    while (i < A.size() && j < B.size())
	{
        if (A[i] < B[j])
            vec.push_back(A[i++]);
        else
            vec.push_back(B[j++]);
    }
    while (i < A.size())
        vec.push_back(A[i++]);
    while (j < B.size())
	{
        vec.push_back(B[j++]);
	}
	if (C.size() > 0)
        insertInSortedOrderVec(vec, C[0]);
} 

void PmergeMe::SortDeq(std::deque<size_t> &deq)
{
    int n = deq.size();
    if (n <= 1)
        return;

    std::deque<size_t> A;
    std::deque<size_t> B;
    std::vector<size_t> C;

    for (int i = 0; i < n; i += 2)
	{
        if (i + 1 < n)
		{
            if (deq[i] < deq[i + 1])
			{
                A.push_back(deq[i]);
                B.push_back(deq[i + 1]);
            }
			else
			{
                A.push_back(deq[i + 1]);
                B.push_back(deq[i]);
            }
        } 
		else
            C.push_back(deq[i]);
    }

    SortDeq(A);
    SortDeq(B);

    deq.clear();
    size_t i = 0, j = 0;
    while (i < A.size() && j < B.size())
	{
        if (A[i] < B[j])
            deq.push_back(A[i++]);
        else
            deq.push_back(B[j++]);
    }
    while (i < A.size())
        deq.push_back(A[i++]);
    while (j < B.size())
	{
        deq.push_back(B[j++]);
	}

	if (C.size() > 0)
        insertInSortedOrderDeq(deq, C[0]);
}
// Output
void	PmergeMe::parsing()
{
	int i = 0;
	while (_arg[++i])
		if (!isDigit(_arg[i]))
			throw std::invalid_argument("Invalid argument");
	i = 0;
	std::cout << "Before :";
	size_t	nb;
	while (_arg[++i])
	{
		nb = atoi(_arg[i]);
		std::cout << " " << nb;
		_vec.push_back(nb);
		_deq.push_back(nb);
	}
	std::cout << std::endl;
}

void	PmergeMe::sort()
{
	clock_t	start, finish;
	double	time_vec, time_deq;

	parsing();

	printVec(_vec);
	start = clock();
	SortVec(_vec);
	finish = clock();
	time_vec = (double) (finish - start) / CLOCKS_PER_SEC * 1000000;
	printVec(_vec);

	printDeq(_deq);
	start = clock();
	SortDeq(_deq);
	finish = clock();
	time_deq = (double) (finish - start) / CLOCKS_PER_SEC * 1000000;
	printDeq(_deq);

	std::cout << "Time to process a range of " << _vec.size() \
		<< " elements with std::vecotr<size_t> : " << time_vec << " us" << std::endl;
	std::cout << "Time to process a range of " << _deq.size() \
		<< " elements with std::vecotr<size_t> : " << time_deq << " us" << std::endl;
}

PmergeMe::PmergeMe(char **input) : _arg(input)
{
    std::cout << "PmergeMe constructor called" << std::endl;
	sort();
}

