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
#define RESET   "\033[0m"

void	print_state( ClapTrap& david, ClapTrap& goliath )
{
	int r = 150;
    int g = 150;
    int b = 150;

	std::cout << std::endl;
	std::cout << "\033[38;2;" << r << ";" << g << ";" << b << "m";
	std::cout << david.getName() << " : " << david.getHitPts() << " hits Points | ";
	std::cout << david.getNrjPts() << " energy Points | " << david.getAttackDmg();
	std::cout << " attack damage" << std::endl;
	std::cout << goliath.getName() << " : " << goliath.getHitPts() << " hits Points | ";
	std::cout << goliath.getNrjPts() << " energy Points | " << goliath.getAttackDmg();
	std::cout << " attack damage" << std::endl;
	std::cout << RESET << std::endl;
}

int main ()
{
	std::cout << std::endl;
    std::cout << "  -----------------------  " << std::endl;
    std::cout << " |     Constructeurs     | " << std::endl;
    std::cout << "  -----------------------  " << std::endl;
	std::cout << std::endl;

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

	std::cout << std::endl;
    std::cout << "  -----------------------  " << std::endl;
    std::cout << " |    Deconstructeurs    | " << std::endl;
    std::cout << "  -----------------------  " << std::endl;
	std::cout << std::endl;
}
