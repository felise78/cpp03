/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:24:17 by hemottu           #+#    #+#             */
/*   Updated: 2023/11/29 16:35:19 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// ###############################
// #       FORME CANONIQUE       #
// ###############################

ScavTrap::ScavTrap() : ClapTrap()
{
	this->m_name = "default";
	this->m_hitPts = 100;
	this->m_energyPts = 50;
	this->m_attackDmg = 20;
	std::cout << GREEN << "ScavTrap " << m_name << " has been created." << RESET << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& copy ) : ClapTrap(copy)
{
	*this = copy;
	std::cout << GREEN << this->m_name << " : ScavTrap copy has been created." << RESET << std::endl;

}

ScavTrap& ScavTrap::operator=( const ScavTrap& src )
{
	this->m_name = src.m_name;
	this->m_hitPts = src.m_hitPts;
	this->m_energyPts = src.m_energyPts;
	this->m_attackDmg = src.m_attackDmg;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << GREEN << "ScavTrap " << m_name << " has left this world" << RESET << std::endl;
}


// ##############################
// #     AUTRE CONSTRUCTEUR     #
// ##############################

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	this->m_hitPts = 100;
	this->m_energyPts = 50;
	this->m_attackDmg = 20;
	std::cout << GREEN << "ScavTrap " << m_name << " has been created." << RESET << std::endl;
}

// ###############################
// #      FONCTIONS MEMBRES      #
// ###############################

void	ScavTrap::guardGate( void )
{
	std::cout << this->m_name << " is now in Gate keeper mode." << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->m_energyPts == 0 || this->m_hitPts == 0)
	{
		std::cout << this->m_name << " is too weak and can't do anything." << std::endl;
		return ;
	}
	std::cout << "BOUMMM ! ScavTrap " << this->m_name << " attacks " << target;
	std::cout << " causing " << this->m_attackDmg << " points of damage!" << std::endl;
	this->m_energyPts--;
	if (this->m_energyPts < 0)
		this->m_energyPts = 0;
}