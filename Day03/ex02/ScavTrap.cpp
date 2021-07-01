/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 13:35:47 by abenaiss          #+#    #+#             */
/*   Updated: 2021/06/26 17:22:27 by abenaiss         ###   ########.fr       */
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

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
	std::cout << "[ScavTrap] Default constructor is called." << std::endl;
    this->_energyPoints = 50;
    this->_maxEnergyPoints = 50;
    this->_meleeAttackDamage = 20;
    this->_rangedAttackDamage = 15;
    this->_armorDamageReduction = 3;
	std::srand (std::time(NULL));
}

ScavTrap::ScavTrap(void):ClapTrap()
{
	std::cout << "[ScavTrap] Default constructor is called." << std::endl;
	this->_name = "ScavTrap";
    this->_energyPoints = 50;
    this->_maxEnergyPoints = 50;
    this->_meleeAttackDamage = 20;
    this->_rangedAttackDamage = 15;
    this->_armorDamageReduction = 3;
	std::srand (std::time(NULL));
}

ScavTrap::ScavTrap(ScavTrap &argument)
{
	std::cout << "[ScavTrap] Copy constructor is called." << std::endl;
	*this = argument;
	std::srand (std::time(NULL));
}

ScavTrap::~ScavTrap()
{
	std::cout << "[ScavTrap] Destructor constructor is called." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &argument)
{
	if (&argument == this)
		return *this;
	*this = argument;
	return *this;
}

void ScavTrap::challengeNewcomer()
{
	std::cout << this->_name;
	std::cout << " challenges you to : " << this->_challengesList[rand() % CHALLENGES_NUMBER] << std::endl;
}