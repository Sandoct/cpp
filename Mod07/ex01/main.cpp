/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:06:37 by r                 #+#    #+#             */
/*   Updated: 2024/05/02 15:36:58 by gpouzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
  o << rhs.get();
  return o;
}

template< typename T >
void print( T& x )
{
  std::cout << x << std::endl;
  return;
}

int	main()
{
	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];

	std::cout << "---- String array ----" << std::endl;
	std::string strArray[5] = {"this", "is", "a", "string", "array"};
	iter<std::string>(strArray, 5, printarray<std::string>);

	std::cout << "---- Int array ----" << std::endl;
	int intArray[2] = {1, 2};
	iter<int>(intArray, 2, printarray<int>);

	std::cout << "---- Float array ----" << std::endl;
	float floatArray[2] = { 1.02f, 2.04f };
	iter<float>(floatArray, 2, printarray<float>);

	std::cout << "---- Double array ----" << std::endl;
	double doubleArray[2] = {1.1, 2.2};
	iter<double>(doubleArray, 2, printarray<double>);

	std::cout << "---- Char array ----" << std::endl;
	char charArray[2] = {'a', 'b'};
	iter<char>(charArray, 2, printarray<char>);

	std::cout << "---- other array ----" << std::endl;
	iter( tab, 5, print<const int> );
	iter( tab2, 5, print<Awesome> );

	return (0);
}
