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

ScavTrap::ScavTrap(ScavTrap &argument)
{
	std::cout << "[ScavTrap] Copy constructor called." << std::endl;
	*this = argument;
	std::srand (std::time(NULL));
}

ScavTrap::ScavTrap(void):_hitPoints(100), _energyPoints(50),
								_maxHitPoints(100), _maxEnergyPoints(50),_level(1),
								_meleeAttackDamage(20),_rangedAttackDamage(15),
								_specialdAttackDamage(50), _armorDamageReduction(3),
								_name("ScavTrap")
{
	std::cout << "[ScavTrap] Default constructor called." << std::endl;
	std::srand (std::time(NULL));
}

ScavTrap::ScavTrap(std::string name):_name(name), _hitPoints(100), _energyPoints(50),
								_maxHitPoints(100), _maxEnergyPoints(50),_level(1),
								_meleeAttackDamage(20),_rangedAttackDamage(15),
								_specialdAttackDamage(50), _armorDamageReduction(3)
{
	std::cout << "[ScavTrap] Default constructor called." << std::endl;
	std::srand (std::time(NULL));
}

ScavTrap::~ScavTrap()
{
	std::cout << "[ScavTrap] Destructor constructor called." << std::endl;
}

int ScavTrap::getMinValue(int firstNum, int secondNum) const
{
	return (firstNum > secondNum) ? secondNum : firstNum;
}

int ScavTrap::getMaxValue(int firstNum, int secondNum) const
{
	return (firstNum > secondNum) ? firstNum : secondNum;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &argument)
{
	if (&argument == this)
		return *this;
    *this = argument;
	return *this;
}

void	ScavTrap::displayAttack(std::string const & target, std::string attackType, int damage) const
{
	std::cout << NARRATOR;
	std::cout << this->_name;
	std::cout << " attacks " << target;
	std::cout << " " << attackType;
	std::cout << " causing " << damage<< " points of damage!" << std::endl;
}

void	ScavTrap::rangedAttack(std::string const & target)
{
	displayAttack(target, "at range", this->_rangedAttackDamage);
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	displayAttack(target, "in melee", this->_meleeAttackDamage);
}
	
void	ScavTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints != 0)
	{
		this->_armorDamageReduction -= amount;
		if (this->_armorDamageReduction < 0)
		{
			std::cout << NARRATOR << this->_name << " recieved " << amount << " points of damage!" << std::endl;
			this->_hitPoints += this->_armorDamageReduction;
			this->_hitPoints = getMaxValue(this->_hitPoints, MIN_HP);
			if(!this->_hitPoints)
				std::cout << NARRATOR << this->_name << " died, bye bye " << this->_name << "." << std::endl;
			this->_armorDamageReduction = 0;
		}
		else
			std::cout << NARRATOR << this->_name << "'s shield took " << amount << " points of damage!" << std::endl;
	}
	else
		std::cout << NARRATOR << "He is already dead...please stop this massacre already" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	this->_hitPoints += amount;
	this->_hitPoints = getMinValue((int)this->_hitPoints, MAX_HP);
}

void ScavTrap::challengeNewcomer()
{
	std::cout << this->_name;
	std::cout << " challenges you to : " << this->_challengesList[rand() % CHALLENGES_NUMBER] << std::endl;
}