/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 13:12:04 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/07 18:48:07 by abenaiss         ###   ########.fr       */
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
    std::cout << "Aaargh ..." << std::endl;
}

void       SuperMutant::takeDamage(int damagePoints)
{
    damagePoints -= 3;
    Enemy::takeDamage(damagePoints);
}

SuperMutant &SuperMutant::operator=(const SuperMutant &mutantInstance)
{
    if(this == &mutantInstance)
        return *this;
    this->setHP(mutantInstance.getHP());
    this->setType(mutantInstance.getType());
    return *this;
}