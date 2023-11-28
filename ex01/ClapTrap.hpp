/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:28:32 by hemottu           #+#    #+#             */
/*   Updated: 2023/11/27 20:39:13 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap {
	
	public:
	// forme canonique
	ClapTrap();
	ClapTrap( const ClapTrap& copy );
	ClapTrap& operator=(const ClapTrap& src);
	~ClapTrap();
	
	// autre constructeur
	ClapTrap(std::string name);

	// accesseurs
	const std::string&	getName( void ) const;
	const int&			getHitPts( void ) const;
	const int&			getNrjPts( void ) const;
	const int&			getAttackDmg( void ) const;

	// fonctions membres 
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	
	private:
	std::string		m_name;
	int				m_hitPts;
	int				m_energyPts;
	int				m_attackDmg;
};

#endif