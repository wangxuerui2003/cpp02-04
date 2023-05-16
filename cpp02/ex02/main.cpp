/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wxuerui <wangxuerui2003@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 13:26:33 by wxuerui           #+#    #+#             */
/*   Updated: 2023/05/16 15:51:24 by wxuerui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) {

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << "a: " << a << std::endl; // 0
	std::cout << "++a: " << ++a << std::endl; // 0.00390625 (2 ^ -8)
	std::cout << "a: " << a << std::endl; // 0.00390625
	std::cout << "a++: " << a++ << std::endl; // 0.00390625 (post-inc)
	std::cout << "a: " << a << std::endl; // 0.0078125
	std::cout << "--a: " << --a << std::endl; // 0.00390625
	std::cout << "a: " << a << std::endl; // 0.00390625
	std::cout << "a--: " << a-- << std::endl; // 0.00390625 (post-dec)
	std::cout << "a: " << a << std::endl; // 0
	
	a++;
	a++;

	std::cout << "b: " << b << std::endl;

	std::cout << "Fixed::max(a,b): " << Fixed::max( a, b ) << std::endl;

	std::cout << "Fixed::min(a,b): " << Fixed::min( a, b ) << std::endl;

	return 0;
}