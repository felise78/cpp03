/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:28:39 by hemottu           #+#    #+#             */
/*   Updated: 2023/11/29 16:45:58 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#define RED     "\033[31m"
#define ITALIC	"\033[3m"

void	print_state(ScavTrap& perso)
{
	std::cout << ITALIC;
	std::cout << perso.getName() << " : " << perso.getHitPts() << " hits Points | ";
	std::cout << perso.getNrjPts() << " energy Points | " << perso.getAttackDmg();
	std::cout << " attack damage" << RESET << std::endl << std::endl;
}

int main ()
{
	std::cout << RED << "# Constructeurs : " << RESET << std::endl;
	
	ClapTrap riri("Riri");
	ClapTrap fifi("Fifi");
	ScavTrap loulou("Loulou");
	
	std::cout << std::endl;
	std::cout << RED << "# Tests fonctions : " << RESET << std::endl;
	print_state(loulou);
	loulou.attack("Riri");
	fifi.attack("Loulou");
	loulou.takeDamage(20);
	print_state(loulou);
	riri.attack("Loulou");
	std::cout << "Riri has : " << riri.getNrjPts() << " energy Pts." << std::endl;
	riri.beRepaired(0);
	std::cout << "Riri has : " << riri.getNrjPts() << " energy Pts." << std::endl;
	loulou.beRepaired(10);
	print_state(loulou);
	
	
	loulou.guardGate();
	//david.guardGate();

	std::cout << std::endl;
	std::cout << RED << "# Test copie : " << RESET << std::endl;
	ScavTrap copy(loulou);
	print_state(copy);
	
	std::cout << std::endl;
	std::cout << RED << "# Deconstructeurs : " << RESET << std::endl;
}

// pointeur class Parent puis creer un new de la classe 
// enfant dedans et voir ce qui se passe