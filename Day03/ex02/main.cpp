/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 16:18:01 by abenaiss          #+#    #+#             */
/*   Updated: 2021/06/23 16:18:02 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main( void ) {
	FragTrap	b("saniq");
	ScavTrap	c("chi7aja");
	
	b.takeDamage(2);
	b.beRepaired(1);
	b.takeDamage(104);
	b.beRepaired(45);
	b.vaulthunter_dot_exe("omok");
	// c.challengeNewcomer();
	return 0;
}