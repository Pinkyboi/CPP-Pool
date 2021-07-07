/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 13:10:12 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/02 13:10:13 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void):AWeapon("Plasma Rifle", 5, 21)
{

}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &rifleInstance)
{
    *this = rifleInstance;
}

PlasmaRifle::~PlasmaRifle()
{
    
}

void    PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle&    PlasmaRifle::operator=(const PlasmaRifle &rifleInstance)
{
    if(this == &rifleInstance)
        return *this;
    this->setName(rifleInstance.getName());  
    this->setAPCost(rifleInstance.getAPCost());  
    this->setDamage(rifleInstance.getDamage());
    return *this;
}