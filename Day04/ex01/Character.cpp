/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 13:13:05 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/02 13:13:06 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


Character::Character(void)
{
}

Character::Character(const std::string &name):_name(name), _APNumber(_maxAP),_equipedWeapon(NULL)
{
}

Character::Character(const Character &characterInstance)
{
    *this = characterInstance;
}

Character::~Character(void)
{

}

void    Character::equip(AWeapon *weapon)
{
    this->_equipedWeapon = weapon;
}

void    Character::attack(Enemy *attackedEnemy)
{
    const int newAPNumber = this->_APNumber - this->_equipedWeapon->getAPCost(); 
    if(attackedEnemy && newAPNumber > 0)
    {
        std::cout << this->_name << " attacks " << attackedEnemy->getType()
            << " with a " << this->_equipedWeapon->getName() << std::endl;
        this->_equipedWeapon->attack();
        attackedEnemy->takeDamage(this->_equipedWeapon->getDamage());
        this->_APNumber = newAPNumber;
        if(!(attackedEnemy->getHP()))
        {
            delete attackedEnemy;
            attackedEnemy = NULL;
        }
    }
    else
        std::cout << this->_name + " doesn't have enough AP to attack." << std::endl;
}

void    Character::recoverAP(void)
{
    this->_APNumber += 10;
    if(this->_APNumber > _maxAP)
        this->_APNumber = _maxAP;
}

unsigned int Character::getAP(void) const
{
    return this->_APNumber;
}

AWeapon* Character::getWeapon(void) const
{
    return this->_equipedWeapon;
}

std::string     Character::getName(void) const
{
    return this->_name;
}

Character &Character::operator=(const Character &characterInstance)
{
    if(this == &characterInstance)
        return *this;
    this->_name = characterInstance._name;
    this->_APNumber = characterInstance._APNumber;
    this->_equipedWeapon = characterInstance._equipedWeapon;
    return *this;
}

std::ostream  &operator<<(std::ostream &out, const Character &characterInstance)
{
    out << characterInstance.getName() <<  " has " << characterInstance.getAP() << " AP and ";
    if (characterInstance.getWeapon())
        out  << "wields a " << characterInstance.getWeapon()->getName() << std::endl;
    else
        out << " is unarmed" << std::endl;
    return out;
}
