/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:28:29 by hemottu           #+#    #+#             */
/*   Updated: 2023/11/29 16:34:03 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

// ###############################
// #       FORME CANONIQUE       #
// ###############################

ClapTrap::ClapTrap() : m_name("default"), m_hitPts(10), m_energyPts(10), m_attackDmg(0)
{
	std::cout << BLUE << "ClapTrap " << m_name << " has been created." << RESET << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& copy )
{
	*this = copy;
	std::cout << BLUE << this->m_name << " : ClapTrap copy has been created." << RESET << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& src)
{
	this->m_name = src.getName();
	this->m_hitPts = src.getHitPts();
	this->m_energyPts = src.getNrjPts();
	this->m_attackDmg = src.getAttackDmg();
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << BLUE << "ClapTrap " << m_name << " has left this world" << RESET << std::endl;
}



// ##############################
// #     AUTRE CONSTRUCTEUR     #
// ##############################

ClapTrap::ClapTrap( std::string name ) : m_name(name), m_hitPts(10), m_energyPts(10), m_attackDmg(0)
{
	std::cout << BLUE << "ClapTrap " << m_name << " has been created.";
}



// ##############################
// #         ACCESSEURS         #
// ##############################

const std::string&	ClapTrap::getName( void ) const
{
	return this->m_name;
}

const int&	ClapTrap::getHitPts( void ) const
{
	return this->m_hitPts;
}

const int&	ClapTrap::getNrjPts( void ) const
{
	return this->m_energyPts;
}

const int&	ClapTrap::getAttackDmg( void ) const
{
	return this->m_attackDmg;
}



// ###############################
// #      FONCTIONS MEMBRES      #
// ###############################

void	ClapTrap::attack(const std::string& target)
{
	if (this->m_energyPts == 0 || this->m_hitPts == 0)
	{
		std::cout << this->m_name << " is too weak and can't do anything." << std::endl;
		return ;
	}
	std::cout << getName() << " attacks " << target;
	std::cout << " causing " << m_attackDmg << " points of damage!" << std::endl;
	this->m_energyPts--;
	if (this->m_energyPts < 0)
		this->m_energyPts = 0;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << getName() << " takes " << amount;
	std::cout << " damages " << std::endl;
	this->m_hitPts -= amount;
	if (this->m_hitPts < 0)
		this->m_hitPts = 0;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << getName() << " repairs itself and gets " << amount;
	std::cout << " hit points back." << std::endl;
	
	this->m_energyPts--;
	if (this->m_energyPts < 0)
		this->m_energyPts = 0;
	this->m_hitPts += amount;
}