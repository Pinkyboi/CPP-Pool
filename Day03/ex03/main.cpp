/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 16:18:01 by abenaiss          #+#    #+#             */
/*   Updated: 2021/06/26 15:18:18 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "FragTrap.hpp"
// #include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int	main( void ) {
	FragTrap	b("saniq");
	ClapTrap	a("Ihya");
	ScavTrap	c("chi7aja");
	NinjaTrap	d("Aymane");

	
	b.takeDamage(2);
	b.beRepaired(1);
	b.takeDamage(104);
	b.beRepaired(45);
	b.vaulthunter_dot_exe("omok");

	d.ninjaShoebox(a);
	d.ninjaShoebox(b);
	d.ninjaShoebox(c);
	d.ninjaShoebox(d);


	// c.challengeNewcomer();
	return 0;
}