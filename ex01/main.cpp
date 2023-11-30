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

void	print_state_scv(ScavTrap& perso)
{
	// codes couleurs pour gris clair
	int r = 150;
    int g = 150;
    int b = 150;

	std::cout << "\033[38;2;" << r << ";" << g << ";" << b << "m";
	std::cout << perso.getName() << " : " << perso.getHitPts() << " hits Points | ";
	std::cout << perso.getNrjPts() << " energy Points | " << perso.getAttackDmg();
	std::cout << " attack damage" << RESET << std::endl;
}

void	print_state_clp(ClapTrap& perso)
{
	// codes couleurs pour gris clair
	int r = 150;
    int g = 150;
    int b = 150;

	std::cout << "\033[38;2;" << r << ";" << g << ";" << b << "m";
	std::cout << perso.getName() << " : " << perso.getHitPts() << " hits Points | ";
	std::cout << perso.getNrjPts() << " energy Points | " << perso.getAttackDmg();
	std::cout << " attack damage" << RESET << std::endl;
}

int main ()
{
	// codes couleurs pour gris clair
	int r = 150;
    int g = 150;
    int b = 150;

	std::cout << std::endl;
    std::cout << "  -----------------------  " << std::endl;
    std::cout << " |     Constructeurs     | " << std::endl;
    std::cout << "  -----------------------  " << std::endl;
	std::cout << std::endl;
	
	ClapTrap riri("Riri");
	ClapTrap fifi("Fifi");
	ScavTrap loulou("Loulou");
	
	std::cout << std::endl;
    std::cout << "  -----------------------  " << std::endl;
    std::cout << " |    Tests Fonctions    | " << std::endl;
    std::cout << "  -----------------------  " << std::endl;
	std::cout << std::endl;

	std::cout << "\033[38;2;" << r << ";" << g << ";" << b << "m";
	std::cout << "-------------------[ Initialisation ]----------------------";
	std::cout << RESET << std::endl << std::endl;
	print_state_clp(riri);
	print_state_clp(fifi);
	print_state_scv(loulou);
	std::cout << std::endl << std::endl;

	std::cout << BLUE;
	std::cout << "------------------[ fonctions ClapTrap ]-------------------";
	std::cout << RESET << std::endl << std::endl;
	riri.attack("Loulou");
	print_state_clp(riri);
	std::cout << std::endl;
	riri.beRepaired(0);
	print_state_clp(riri);
	std::cout << std::endl;
	loulou.beRepaired(10);
	print_state_scv(loulou);
	std::cout << std::endl;
	loulou.takeDamage(20);
	print_state_scv(loulou);
	std::cout << std::endl << std::endl;

	std::cout << GREEN;
	std::cout << "------------------[ fonctions ScavTrap ]-------------------";
	std::cout << RESET << std::endl << std::endl;
	loulou.attack("Riri");
	print_state_scv(loulou);
	std::cout << std::endl;
	loulou.guardGate();
	//david.guardGate();
	std::cout << std::endl;

	std::cout << std::endl;
    std::cout << "  -----------------------  " << std::endl;
    std::cout << " |       Test Copie      | " << std::endl;
    std::cout << "  -----------------------  " << std::endl;
	std::cout << std::endl;

	ScavTrap copy(loulou);
	print_state_scv(copy);
	
	std::cout << std::endl;
    std::cout << "  -----------------------  " << std::endl;
    std::cout << " |    Deconstructeurs    | " << std::endl;
    std::cout << "  -----------------------  " << std::endl;
	std::cout << std::endl;
}