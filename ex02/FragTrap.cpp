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
	this->m_hitPts = 100;
	this->m_energyPts = 100;
	this->m_attackDmg = 30;
	std::cout << YELLOW << "FragTrap " << this->m_name << " has been created." << RESET << std::endl;
}

FragTrap::FragTrap( const FragTrap& copy ) : ClapTrap(copy)
{
	std::cout << YELLOW << this->m_name << " : FragTrap copy has been created." << RESET << std::endl;
}

FragTrap&	FragTrap::operator=( const FragTrap& src )
{
	// to do
	(void) src;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << YELLOW << "FragTrap " << m_name << " has left this world" << RESET << std::endl;
}


// ##############################
// #     AUTRE CONSTRUCTEUR     #
// ##############################

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	this->m_hitPts = 100;
	this->m_energyPts = 100;
	this->m_attackDmg = 30;
	std::cout << YELLOW << "FragTrap " << this->m_name << " has been created." << RESET << std::endl;
}


// ###############################
// #      FONCTIONS MEMBRES      #
// ###############################

void	FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap " << m_name << " is asking for a high fives." << RESET << std::endl;
}