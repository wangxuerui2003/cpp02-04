/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wxuerui <wangxuerui2003@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 13:26:33 by wxuerui           #+#    #+#             */
/*   Updated: 2023/05/16 17:05:49 by wxuerui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"
#include <cstdlib>

int main(int ac, char **av) {
	if (ac != 9) {
		std::cerr << "Usage: ./bsp a.x a.y b.x b.y c.x c.y p.x p.y" << std::endl;
		return 1;
	}
	
	Point a(atof(av[1]), atof(av[2]));
	Point b(atof(av[3]), atof(av[4]));
	Point c(atof(av[5]), atof(av[6]));
	Point p(atof(av[7]), atof(av[8]));

	if (bsp(a, b, c, p)) {
		std::cout << "True";
	} else {
		std::cout << "False";
	}
	std::cout << std::endl;
	
	return 0;
}