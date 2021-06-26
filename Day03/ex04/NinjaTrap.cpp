/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 16:18:01 by abenaiss          #+#    #+#             */
/*   Updated: 2021/06/26 17:48:49 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name):ClapTrap(name)
{
	std::cout << "[NinjaTrap] Default constructor is called." << std::endl;
    this->_energyPoints = 120;
    this->_maxEnergyPoints = 120;
    this->_meleeAttackDamage = 60;
    std::srand (std::time(NULL));
}

NinjaTrap::NinjaTrap(void):ClapTrap()
{
	std::cout << "[NinjaTrap] Default constructor is called." << std::endl;
	this->_name = "NinjaTrap";
    this->_energyPoints = 120;
    this->_maxEnergyPoints = 120;
    this->_meleeAttackDamage = 60;
	std::srand (std::time(NULL));
}

NinjaTrap::NinjaTrap(NinjaTrap &argument)
{
	std::cout << "[NinjaTrap] Copy constructor is called." << std::endl;
	*this = argument;
    std::srand (std::time(NULL));
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "[NinjaTrap] Destructor constructor is called." << std::endl;
}

NinjaTrap &NinjaTrap::operator=(const NinjaTrap &argument)
{
	if (&argument == this)
		return *this;
	this->_name					= argument._name;
	this->_hitPoints			= argument._hitPoints;
	this->_hitPoints 			= argument._hitPoints;
	this->_energyPoints 		= argument._energyPoints;
	this->_maxHitPoints 		= argument._maxHitPoints;
	this->_maxEnergyPoints 		= argument._maxEnergyPoints;
	this->_level				= argument._level;
	this->_meleeAttackDamage	= argument._meleeAttackDamage;
	this->_rangedAttackDamage	= argument._rangedAttackDamage;
	this->_specialdAttackDamage	= argument._specialdAttackDamage;
	this->_armorDamageReduction	= argument._armorDamageReduction;
	return *this;
}

void    NinjaTrap::ninjaShoebox(const ClapTrap &ClapTrap)
{
    std::cout << this->_name << ": ";
    std::cout << "For god's sake please stop Claptrap...";
    std::cout << "your overenthusiasm makes me wanna puke." << std::endl;
}

void    NinjaTrap::ninjaShoebox(const FragTrap &FragTrap)
{
    std::cout << this->_name << ": ";
    std::cout << "A little bit better than your regular Claptrap ";
    std::cout << "but still not a match for me." << std::endl;
}

void    NinjaTrap::ninjaShoebox(const ScavTrap &ScavTrap)
{
    std::cout << this->_name << ": ";
    std::cout << "What do we have here ? a Scavtrap ? ";
    std::cout << "why wont you go eat some dirt and lefover like the scavenger you are." << std::endl;
}

void    NinjaTrap::ninjaShoebox(const NinjaTrap &NinjaTrap)
{
 std::cout << this->_name << ": ";
    std::cout << "Look how pretty you are ! how shinny and sturdy you look, ";
    std::cout << "you are definitely one of my kind ! let's get along comrade." << std::endl;
}