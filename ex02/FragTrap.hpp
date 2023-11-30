/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:50:36 by hemottu           #+#    #+#             */
/*   Updated: 2023/11/29 17:05:48 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

	#include <string>
	#include "ClapTrap.hpp"
	#include <iostream>
	
	class FragTrap : public ClapTrap {
		public:
		FragTrap();
		FragTrap( std::string name );
		FragTrap( const FragTrap& copy );
		FragTrap& operator=( const FragTrap& src );
		~FragTrap();

		void	highFivesGuys( void );
	};

#endif