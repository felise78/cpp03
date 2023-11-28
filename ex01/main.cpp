/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:28:39 by hemottu           #+#    #+#             */
/*   Updated: 2023/11/28 18:17:27 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main ()
{
	ClapTrap david("David");
	ClapTrap goliath("Goliath");

	david.attack("Goliath");
	goliath.takeDamage(5);
	goliath.beRepaired(3);
	goliath.attack("David");
	david.takeDamage(10);
	david.attack("Goliath");
	david.beRepaired(3);
	david.attack("Goliath");

}
