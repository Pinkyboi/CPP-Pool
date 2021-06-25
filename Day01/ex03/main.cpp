/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 16:47:07 by abenaiss          #+#    #+#             */
/*   Updated: 2021/06/07 16:47:33 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int main( void ){
	ZombieHorde		horde(8);
	std::cout << "Horde created." << std::endl;
	horde.announce();
	std::cout << "Zombies announced." << std::endl;
	return 0;
}
