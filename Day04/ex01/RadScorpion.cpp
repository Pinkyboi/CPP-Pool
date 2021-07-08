/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 13:12:42 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/07 18:46:49 by abenaiss         ###   ########.fr       */
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
    std::cout << "* SPROTCH *" << std::endl;
}

void       RadScorpion::takeDamage(int damagePoints)
{
    Enemy::takeDamage(damagePoints);
}

RadScorpion &RadScorpion::operator=(const RadScorpion &mutantInstance)
{
    if(this == &mutantInstance)
        return *this;
    this->setHP(mutantInstance.getHP());
    this->setType(mutantInstance.getType());
    return *this;
}
