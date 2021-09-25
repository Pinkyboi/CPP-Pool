/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 16:31:07 by abenaiss          #+#    #+#             */
/*   Updated: 2021/09/25 16:17:10 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
}

void HumanB::attack()
{
	std::string string;	
	std::cout << this->_name << " attacks with his " << *this->_weapon << std::endl;
}

void HumanB::setWeapon(const std::string &weaponType)
{
	this->_weapon = &weaponType;
}

HumanB::~HumanB()
{
}