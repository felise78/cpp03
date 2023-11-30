/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:50:40 by hemottu           #+#    #+#             */
/*   Updated: 2023/11/29 17:11:40 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// ###############################
// #       FORME CANONIQUE       #
// ###############################

FragTrap::FragTrap() : ClapTrap()
{
	int r = 150;
    int g = 200;
    int b = 250;
	
	this->m_hitPts = 100;
	this->m_energyPts = 100;
	this->m_attackDmg = 30;
	std::cout << "\033[38;2;" << r << ";" << g << ";" << b << "m";
	std::cout << "FragTrap " << this->m_name << " has been created." << RESET << std::endl;
// changer le message
}


FragTrap::FragTrap( const FragTrap& copy ) : ClapTrap(copy)
{
	int r = 150;
    int g = 200;
    int b = 250;

	*this = copy;
	std::cout << "\033[38;2;" << r << ";" << g << ";" << b << "m";
	std::cout << this->m_name << " : FragTrap copy has been created." << RESET << std::endl;
}

FragTrap&	FragTrap::operator=( const FragTrap& src )
{
	this->m_name = src.m_name;
	this->m_hitPts = src.m_hitPts;
	this->m_energyPts = src.m_energyPts;
	this->m_attackDmg = src.m_attackDmg;
	return *this;
}

FragTrap::~FragTrap()
{
	int r = 150;
    int g = 200;
    int b = 250;

	std::cout << "\033[38;2;" << r << ";" << g << ";" << b << "m";
	std::cout << "FragTrap " << m_name << " has left this world" << RESET << std::endl;
// changer le message ?
}


// ##############################
// #     AUTRE CONSTRUCTEUR     #
// ##############################

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	int r = 150;
    int g = 200;
    int b = 250;

	this->m_hitPts = 100;
	this->m_energyPts = 100;
	this->m_attackDmg = 30;
	std::cout << "\033[38;2;" << r << ";" << g << ";" << b << "m";
	std::cout << "FragTrap " << this->m_name << " has been created." << RESET << std::endl;
}


// ###############################
// #      FONCTIONS MEMBRES      #
// ###############################

void	FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap " << m_name << " is asking for a high fives." << RESET << std::endl;
}