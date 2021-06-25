/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 17:46:29 by abenaiss          #+#    #+#             */
/*   Updated: 2021/06/06 17:46:30 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
	setZombie(name, type);
	ZombieInfos();
	std::cout << " has been created" << std::endl;	
}

Zombie::Zombie(void)
{
	std::cout << "A zombie has been created" << std::endl;	
}

Zombie::~Zombie()
{
	ZombieInfos();
	std::cout << "has been destroyed" << std::endl;
}

void Zombie::setZombie(std::string name, std::string type)
{
	this->_name = name;
	this->_type = type;
}

void Zombie::ZombieInfos()
{
	std::cout << "< " << this->_name << " (" << this->_type << ") " << "> ";
}

void Zombie::annouce(void)
{
	ZombieInfos();
	std::cout << "Braiiiiiinnnssss..." << std::endl;
}
