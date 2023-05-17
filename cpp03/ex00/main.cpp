/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wxuerui <wangxuerui2003@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:47:00 by wxuerui           #+#    #+#             */
/*   Updated: 2023/05/17 15:23:31 by wxuerui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#define ARR_SIZE 10

void	attacking(ClapTrap& c1, ClapTrap& c2) {
	if (&c1 == &c2) {
		std::cout << "You can't attack yourself!" << std::endl;
		return;
	}

	c1.attack(c2.getName());
	c2.takeDamage(c1.getAd());

	if (c2.getHp() <= 3) {
		c2.beRepaired(2);
	}

	std::cout << std::endl;
}

int	main(void) {
	ClapTrap	clapTraps[ARR_SIZE];
	std::string	names[10] = {
		"0",
		"1",
		"2",
		"3",
		"4",
		"5",
		"6",
		"7",
		"8",
		"9"
	};
	
	for (int i = 0; i < ARR_SIZE; i++) {
		clapTraps[i] = ClapTrap(names[i]);
		clapTraps[i].setAd(((i + 1) % 5) + 1);
	}

	attacking(clapTraps[0], clapTraps[1]);
	attacking(clapTraps[2], clapTraps[8]);
	attacking(clapTraps[9], clapTraps[6]);
	attacking(clapTraps[4], clapTraps[1]);
	attacking(clapTraps[7], clapTraps[3]);
	attacking(clapTraps[5], clapTraps[0]);
	attacking(clapTraps[1], clapTraps[3]);
	attacking(clapTraps[2], clapTraps[3]);
	attacking(clapTraps[6], clapTraps[3]);
	attacking(clapTraps[8], clapTraps[3]);


	clapTraps[0].beRepaired(2);
	clapTraps[3].beRepaired(6);

}