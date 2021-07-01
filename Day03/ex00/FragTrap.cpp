/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 16:17:46 by abenaiss          #+#    #+#             */
/*   Updated: 2021/06/23 16:17:47 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

const std::string FragTrap::_attackPool[ATTACKS_NUMBER] = 
{
	"by casting \"EXPLOSIOOON!\"",
	"by casting \"Purify\"",
	"slashing with The Power Sword ! (heyyeyaaeyaaaeyaeyaa)",
	"slashing with The Blade of Chaos",
	"launching a giant boulder",
};

FragTrap::FragTrap(void):_name("FragTrap"),_hitPoints(100), _energyPoints(100),
								_maxHitPoints(100), _maxEnergyPoints(100),_level(1),
								_meleeAttackDamage(30),_rangedAttackDamage(20),
								_specialdAttackDamage(50), _armorDamageReduction(5)
{
	std::cout << "Default constructor called" << std::endl;
	std::srand (std::time(NULL));
}

FragTrap::FragTrap(std::string name):_name(name), _hitPoints(100), _energyPoints(100),
								_maxHitPoints(100), _maxEnergyPoints(100),_level(1),
								_meleeAttackDamage(30),_rangedAttackDamage(20),
								_specialdAttackDamage(50), _armorDamageReduction(5)
{
	std::cout << "Default constructor called" << std::endl;
	std::srand (std::time(NULL));
}

FragTrap::FragTrap(const FragTrap &argument)
{
	std::cout << "Copy constructor called" << std::endl;
	std::srand (std::time(NULL));
	*this = argument;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor constructor called" << std::endl;
}

int FragTrap::getMinValue(int firstNum, int secondNum) const
{
	return (firstNum > secondNum) ? secondNum : firstNum;
}

int FragTrap::getMaxValue(int firstNum, int secondNum) const
{
	return (firstNum > secondNum) ? firstNum : secondNum;
}

FragTrap &FragTrap::operator=(const FragTrap &argument)
{
	if (&argument == this)
		return *this;
	*this = argument;
	return *this;
}

void	FragTrap::displayAttack(std::string const & target, std::string attackType, int damage) const
{
	std::cout << NARRATOR;
	std::cout << this->_name;
	std::cout << " attacks " << target;
	std::cout << " " << attackType;
	std::cout << " causing " << damage<< " points of damage!" << std::endl;
}

void	FragTrap::rangedAttack(std::string const & target)
{
	displayAttack(target, "at range", this->_rangedAttackDamage);
}

void	FragTrap::meleeAttack(std::string const & target)
{
	displayAttack(target, "in melee", this->_meleeAttackDamage);
}
	
void	FragTrap::takeDamage(unsigned int amount)
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

void	FragTrap::beRepaired(unsigned int amount)
{
	this->_hitPoints += amount;
	this->_hitPoints = getMinValue((int)this->_hitPoints, MAX_HP);
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if(this->_maxEnergyPoints >= 25)
	{
		this->_maxEnergyPoints -= 25;
		displayAttack(target, _attackPool[(int)(rand() % 5)], this->_specialdAttackDamage);
	}
	else
		std::cout << NARRATOR << "Unable to cast a spell, a long rest may help." << std::endl;
}