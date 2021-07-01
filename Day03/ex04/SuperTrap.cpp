/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 16:04:45 by abenaiss          #+#    #+#             */
/*   Updated: 2021/06/26 17:40:54 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name)
{
	std::cout << "[SuperTrap] Default constructor is called." << std::endl;
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
    this->_maxHitPoints = FragTrap::_maxHitPoints;
    this->_energyPoints = NinjaTrap::_energyPoints;
    this->_maxEnergyPoints = NinjaTrap::_maxEnergyPoints;
    this->_meleeAttackDamage = NinjaTrap::_meleeAttackDamage;
    this->_rangedAttackDamage = FragTrap::_rangedAttackDamage;
    this->_armorDamageReduction = FragTrap::_armorDamageReduction;
    std::srand (std::time(NULL));
}

SuperTrap::SuperTrap(void)
{
	std::cout << "[SuperTrap] Default constructor is called." << std::endl;
	this->_name = "SuperTrap";
    this->_hitPoints = FragTrap::_hitPoints;
    this->_maxHitPoints = FragTrap::_maxHitPoints;
    this->_energyPoints = NinjaTrap::_energyPoints;
    this->_maxEnergyPoints = NinjaTrap::_maxEnergyPoints;
    this->_meleeAttackDamage = NinjaTrap::_meleeAttackDamage;
    this->_rangedAttackDamage = FragTrap::_rangedAttackDamage;
    this->_armorDamageReduction = FragTrap::_armorDamageReduction;
	std::srand (std::time(NULL));
}

SuperTrap::SuperTrap(SuperTrap &argument)
{
	std::cout << "[SuperTrap] Copy constructor is called." << std::endl;
	*this = argument;
	std::srand (std::time(NULL));
}

SuperTrap::~SuperTrap()
{
	std::cout << "[SuperTrap] Destructor constructor is called." << std::endl;
}

SuperTrap &SuperTrap::operator=(const SuperTrap &argument)
{
	if (&argument == this)
		return *this;
	*this = argument;
	return *this;
}

void    SuperTrap::rangedAttack(std::string const & target)
{
    FragTrap::rangedAttack(target);
}

void    SuperTrap::meleeAttack(std::string const & target)
{
    NinjaTrap::meleeAttack(target);
}