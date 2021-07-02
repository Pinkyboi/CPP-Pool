/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 10:50:48 by abenaiss          #+#    #+#             */
/*   Updated: 2021/06/26 17:21:08 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _hitPoints(100), _energyPoints(100),
                                _maxHitPoints(100), _maxEnergyPoints(100),_level(1),
                                _meleeAttackDamage(100),_rangedAttackDamage(100),
                                _specialdAttackDamage(100), _armorDamageReduction(100),
                                _name("ClapTrap"), _narrator(NARRATOR)
{
    std::cout << "[ClapTrap] Default constructor is called." << std::endl;
    std::srand (std::time(NULL));
}

ClapTrap::ClapTrap(std::string name):_name(name), _hitPoints(100), _energyPoints(100),
                                _maxHitPoints(100), _maxEnergyPoints(100),_level(1),
                                _meleeAttackDamage(100),_rangedAttackDamage(100),
                                _specialdAttackDamage(100), _armorDamageReduction(100), _narrator(NARRATOR)
{
    std::cout << "[ClapTrap] Default constructor is called." << std::endl;
    std::srand (std::time(NULL));
}

ClapTrap::ClapTrap(const ClapTrap &argument)
{
    std::cout << "[ClapTrap] Copy constructor is called." << std::endl;
    std::srand (std::time(NULL));
    *this = argument;
}

ClapTrap::~ClapTrap()
{
    std::cout << "[ClapTrap] Destructor constructor is called." << std::endl;
}

int ClapTrap::getMinValue(int firstNum, int secondNum) const
{
    return (firstNum > secondNum) ? secondNum : firstNum;
}

int ClapTrap::getMaxValue(int firstNum, int secondNum) const
{
    return (firstNum > secondNum) ? firstNum : secondNum;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &argument)
{
    if (&argument == this)
        return *this;
    this->_name                 = argument._name;
    this->_hitPoints            = argument._hitPoints;
    this->_hitPoints            = argument._hitPoints;
    this->_energyPoints         = argument._energyPoints;
    this->_maxHitPoints         = argument._maxHitPoints;
    this->_maxEnergyPoints      = argument._maxEnergyPoints;
    this->_level                = argument._level;
    this->_meleeAttackDamage    = argument._meleeAttackDamage;
    this->_rangedAttackDamage   = argument._rangedAttackDamage;
    this->_specialdAttackDamage = argument._specialdAttackDamage;
    this->_armorDamageReduction = argument._armorDamageReduction;
    return *this;
}

void    ClapTrap::displayAttack(std::string const & target, std::string attackType, int damage) const
{
    std::cout << this->_narrator;
    std::cout << this->_name;
    std::cout << " attacks " << target;
    std::cout << " " << attackType;
    std::cout << " causing " << damage<< " points of damage!" << std::endl;
}

void    ClapTrap::rangedAttack(std::string const & target)
{
    displayAttack(target, "at range", this->_rangedAttackDamage);
}

void    ClapTrap::meleeAttack(std::string const & target)
{
    displayAttack(target, "in melee", this->_meleeAttackDamage);
}
    
void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints != 0)
    {
        this->_armorDamageReduction -= amount;
        if (this->_armorDamageReduction < 0)
        {
            std::cout << this->_narrator << this->_name << " recieved " << amount << " points of damage!" << std::endl;
            this->_hitPoints += this->_armorDamageReduction;
            this->_hitPoints = getMaxValue(this->_hitPoints, MIN_HP);
            if(!this->_hitPoints)
                std::cout << this->_narrator << this->_name << " died, bye bye " << this->_name << "." << std::endl;
            this->_armorDamageReduction = 0;
        }
        else
            std::cout << this->_narrator << this->_name << "'s shield took " << amount << " points of damage!" << std::endl;
    }
    else
        std::cout << this->_narrator << "He is already dead...please stop this massacre already" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    this->_hitPoints += amount;
    this->_hitPoints = getMinValue((int)this->_hitPoints, MAX_HP);
}