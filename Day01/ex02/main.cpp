/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 19:07:38 by abenaiss          #+#    #+#             */
/*   Updated: 2021/06/06 19:07:39 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main()
{
	Zombie *instance;
	ZombieEvent *event;

	event = new ZombieEvent;
	event->setZombieType("archer");
	instance = event->randomChump();
	instance->annouce();
	delete instance;
	return 0;
}