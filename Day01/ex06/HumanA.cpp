/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 16:29:47 by abenaiss          #+#    #+#             */
/*   Updated: 2021/06/09 16:29:48 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon Weapon)
{
	this->_weapon = Weapon.getType();
	this->_name = name;
}
HumanA::HumanA(std::string name)
{
	this->_name = name;
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
	std::cout << this->_name << " attacks with his " << this->_weapon << std::endl;
}

void HumanA::setWeapon(std::string weaponName)
{
	this->_weapon = Weapon.getType();
}