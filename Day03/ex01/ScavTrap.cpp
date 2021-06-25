/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 13:35:47 by abenaiss          #+#    #+#             */
/*   Updated: 2021/06/24 13:35:49 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

const std::string ScavTrap::_challengesList[CHALLENGES_NUMBER] = 
{
	"slay the Nemean lion.",
	"slay the nine-headed Lernaean Hydra.",
	"capture the Ceryneian Hind.",
	"capture the Erymanthian Boar.",
	"clean the Augean stables in a single day.",
	"slay the Stymphalian birds.",
	"capture the Cretan Bull.",
	"steal the Mares of Diomedes.",
	"obtain the girdle of Hippolyta, queen of the Amazons.",
	"obtain the cattle of the three-bodied giant Geryon.",
	"steal three of the golden apples of the Hesperides.",
	"capture and bring back Cerberus.",
};

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "Default constructor called" << std::endl;
	this->_name = name;
    this->_level = 1;
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 50;
    this->_maxEnergyPoints = 50;
    this->_meleeAttackDamage = 20;
    this->_rangedAttackDamage = 15;
    this->_armorDamageReduction = 3;
	std::srand (std::time(NULL));
}

ScavTrap::ScavTrap(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_name = "ScavTrap";
    this->_level = 1;
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 50;
    this->_maxEnergyPoints = 50;
    this->_meleeAttackDamage = 20;
    this->_rangedAttackDamage = 15;
    this->_armorDamageReduction = 3;
	std::srand (std::time(NULL));
}

ScavTrap::ScavTrap(ScavTrap &argument)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_name = argument._name;
    this->_level = argument._level;
    this->_hitPoints = argument._hitPoints;
    this->_maxHitPoints = argument._maxHitPoints;
    this->_energyPoints = argument._energyPoints;
    this->_maxEnergyPoints = argument._maxEnergyPoints;
    this->_meleeAttackDamage = argument._meleeAttackDamage;
    this->_rangedAttackDamage = argument._rangedAttackDamage;
    this->_armorDamageReduction = argument._armorDamageReduction;
	std::srand (std::time(NULL));
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor constructor called" << std::endl;
}

void ScavTrap::challengeNewcomer()
{
	std::cout << this->_name;
	std::cout << " challenges you to : " << this->_challengesList[rand() % CHALLENGES_NUMBER] << std::endl;
}