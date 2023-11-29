/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:24:20 by hemottu           #+#    #+#             */
/*   Updated: 2023/11/29 15:29:53 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

	#include "ClapTrap.hpp"
	#include <iostream>
	#define GREEN   "\033[32m"
	#define RESET   "\033[0m"

	class ScavTrap : public ClapTrap {
		
		public:
		ScavTrap();
		ScavTrap( std::string name );
		ScavTrap( const ScavTrap& copy );
		ScavTrap& operator=( const ScavTrap& src );
		~ScavTrap();

		void	guardGate( void );
		void	attack( const std::string& target );
	};

#endif