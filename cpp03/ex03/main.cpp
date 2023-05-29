/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wxuerui <wxuerui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:47:00 by wxuerui           #+#    #+#             */
/*   Updated: 2023/05/29 14:45:04 by wxuerui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

#define ATTACK_DAMAGE 30

int	main(void) {
	DiamondTrap	dt1("dt1"), dt2("dt2");

	dt1.attack("dt2");
	dt2.takeDamage(ATTACK_DAMAGE);
	dt2.beRepaired(2);
	dt2.attack("dt1");
	dt1.takeDamage(ATTACK_DAMAGE);
	dt1.beRepaired(2);

	dt1.attack("dt2");
	dt2.takeDamage(ATTACK_DAMAGE);
	dt2.beRepaired(2);
	dt2.attack("dt1");
	dt1.takeDamage(ATTACK_DAMAGE);
	dt1.beRepaired(2);

	dt1.highFivesGuys();
	dt2.highFivesGuys();
	

	// Tests for killing a Diamond

	// dt1.attack("dt2");
	// dt2.takeDamage(ATTACK_DAMAGE);
	// dt2.beRepaired(2);
	// dt2.attack("dt1");
	// dt1.takeDamage(ATTACK_DAMAGE);
	// dt1.beRepaired(2);

	// dt1.attack("dt2");
	// dt2.takeDamage(ATTACK_DAMAGE);
	// dt2.beRepaired(2);
	// dt2.attack("dt1");
	// dt1.takeDamage(ATTACK_DAMAGE);
	// dt1.beRepaired(2);

}