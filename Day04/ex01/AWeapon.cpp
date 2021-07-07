/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 13:09:59 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/02 13:10:01 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(void):_name("unnamed"),_damagePoint(42069),_apCost(0)
{
    std::cout <<    "You fool created the ultimate weapon"
                    "prepare yourself to face the consequences !";
    std::cout <<     std::endl;
}

AWeapon::AWeapon(const std::string &name, int apcost, int damage):_name(name),_apCost(apcost),_damagePoint(damage)
{

}

AWeapon::AWeapon(const AWeapon &weaponInstance)
{
    *this = weaponInstance;
    std::cout << "A clone of \"" + this->_name + "\" has been created." << std::endl;
}

AWeapon::~AWeapon()
{
    std::cout << "The weapon: \"" + this->_name + "\" has been destroyed." << std::endl;
}

int         AWeapon::getAPCost(void) const
{
    return this->_apCost;
}

int         AWeapon::getDamage(void) const
{
    return this->_damagePoint;
}

std::string AWeapon::getName(void) const
{
    return this->_name;
}

void         AWeapon::setAPCost(unsigned int apCost)
{
    this->_apCost = apCost;
}

void         AWeapon::setDamage(unsigned int damagePoint)
{
    this->_damagePoint = damagePoint;
}

void AWeapon::setName(std::string name)
{
    this->_name = name;
}

AWeapon&    AWeapon::operator=(const AWeapon &weaponInstance)
{
    if(this == &weaponInstance)
        return *this;
    this->_name = weaponInstance._name;  
    this->_apCost = weaponInstance._apCost;  
    this->_damagePoint = weaponInstance._damagePoint;  
    return *this;
}