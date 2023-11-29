/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:28:39 by hemottu           #+#    #+#             */
/*   Updated: 2023/11/29 12:04:37 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

void	print_state(ClapTrap& david, ClapTrap& goliath)
{
	std::cout << std::endl;
	std::cout << david.getName() << " : " << david.getHitPts() << " hits Points | ";
	std::cout << david.getNrjPts() << " energy Points | " << david.getAttackDmg();
	std::cout << " attack damage" << std::endl;
	std::cout << goliath.getName() << " : " << goliath.getHitPts() << " hits Points | ";
	std::cout << goliath.getNrjPts() << " energy Points | " << goliath.getAttackDmg();
	std::cout << " attack damage" << std::endl;
	std::cout << std::endl;
}

int main ()
{
	ClapTrap david("David");
	ClapTrap goliath("Goliath");

	print_state(david, goliath);
	david.attack("Goliath");
	print_state(david, goliath);
	goliath.takeDamage(5);
	print_state(david, goliath);
	goliath.beRepaired(3);
	print_state(david, goliath);
	goliath.attack("David");
	print_state(david, goliath);
	david.takeDamage(10);
	print_state(david, goliath);
	david.attack("Goliath");
	print_state(david, goliath);
	david.beRepaired(3);
	print_state(david, goliath);
	david.attack("Goliath");
	print_state(david, goliath);
}
