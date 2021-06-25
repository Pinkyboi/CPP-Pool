/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 15:42:44 by abenaiss          #+#    #+#             */
/*   Updated: 2021/06/07 15:42:45 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

const std::string ZombieHorde::_nameList[LIST_SIZE] = 
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

ZombieHorde::ZombieHorde(int zombieNumber, std::string type):_zombieNumber(zombieNumber)
{	
	this->_theHorde = new Zombie[zombieNumber];
	for(int i = 0; i < zombieNumber; i++)
		this->_theHorde[i].setZombie(this->_nameList[rand() % LIST_SIZE], type);
}

ZombieHorde::~ZombieHorde()
{
	delete [] this->_theHorde;
	std::cout << "All the Zombies has been destroyed."<< std::endl;
	std::cout << "The Horde is empty now :c" << std::endl;
}

void ZombieHorde::announce(void)
{
	for(int i = 0; i < this->_zombieNumber; i++)
		this->_theHorde[i].annouce();
}