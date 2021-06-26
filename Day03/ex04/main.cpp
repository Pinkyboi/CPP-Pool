/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 16:18:01 by abenaiss          #+#    #+#             */
/*   Updated: 2021/06/26 17:25:08 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "SuperTrap.hpp"

int	main( void ) {
	SuperTrap	e("Aymane");


	e.meleeAttack("Ihya");
	e.rangedAttack("Ihya");
	// c.challengeNewcomer();
	return 0;
}