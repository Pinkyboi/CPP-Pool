/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 13:10:35 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/02 13:10:37 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void):AWeapon("Power Fist", 8, 50)
{

}

PowerFist::PowerFist(const PowerFist &fistInstance)
{
    *this = fistInstance;
}

PowerFist::~PowerFist()
{
    
}

void    PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *";
}

PowerFist&    PowerFist::operator=(const PowerFist &fistInstance)
{
    if(this == &fistInstance)
        return *this;
    this->setName(fistInstance.getName());  
    this->setAPCost(fistInstance.getAPCost());  
    this->setDamage(fistInstance.getDamage());
    return *this;
}
