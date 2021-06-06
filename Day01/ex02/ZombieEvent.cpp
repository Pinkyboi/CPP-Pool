/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 17:47:15 by abenaiss          #+#    #+#             */
/*   Updated: 2021/06/06 18:00:05 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

const std::string ZombieEvent::_nameList[LIST_SIZE] = 
{
	"Darcey",
	"Harvey",
	"Karl",
	"Rowe",
	"Cristian",
	"Martin",
	"Jagdeep",
	"Tapia",
	"Ahmad",
	"Patterson",
	"Samina",
	"Frazier",
	"Samanta",
	"Mohamed",
	"Candice",
	"Henry"
};

ZombieEvent::ZombieEvent(void)
{

}

ZombieEvent::~ZombieEvent(void)
{

}

void	ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie	*ZombieEvent::randomChump(void)
{
	Zombie *newZombie;

	srand((unsigned)time(0)); 
	newZombie = new Zombie(this->_nameList[rand() % LIST_SIZE], this->_type);
	std::cout << "I am :";
	newZombie->ZombieInfos();
	std::cout << std::endl;
	return(newZombie);
}