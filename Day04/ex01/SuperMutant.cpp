/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 13:12:04 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/02 13:12:06 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"


SuperMutant::SuperMutant(void):Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &mutantInstance)
{
    std::cout << "A \" Super Mutant \" clone has been created !" << std::endl;
    std::cout << "* click click click *" << std::endl;
    *this = mutantInstance;
}

SuperMutant::~SuperMutant()
{
}

void       SuperMutant::takeDamage(int damagePoints)
{
    if(!damagePoints)
    {
        const int finalDamage = damagePoints - 3;
        this->setHP(this->getHP() - finalDamage);
        if(!this->getHP())
            std::cout << "Aaargh ..." << std::endl;
    }
}

SuperMutant &SuperMutant::operator=(const SuperMutant &mutantInstance)
{
    if(this == &mutantInstance)
        return *this;
    this->setHP(mutantInstance.getHP());
    this->setType(mutantInstance.getType());
    return *this;
}