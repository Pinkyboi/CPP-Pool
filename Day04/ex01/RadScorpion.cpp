/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 13:12:42 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/02 13:12:43 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"


RadScorpion::RadScorpion(void):Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &scorpionInstance)
{
    std::cout << "A \" RadScorpion \" clone has been created !" << std::endl;
    std::cout << "* click click click *" << std::endl;
    *this = scorpionInstance;
}

RadScorpion::~RadScorpion()
{
}

void       RadScorpion::takeDamage(int damagePoints)
{
    const int monsterHp = this->getHP();
    if (damagePoints && monsterHp)
    {
        this->setHP((monsterHp - damagePoints > 0) ? monsterHp - damagePoints : 0 );
        if (!this->getHP())
            std::cout << "* SPROTCH *" << std::endl;
    }
}

RadScorpion &RadScorpion::operator=(const RadScorpion &mutantInstance)
{
    if(this == &mutantInstance)
        return *this;
    this->setHP(mutantInstance.getHP());
    this->setType(mutantInstance.getType());
    return *this;
}
