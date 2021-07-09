/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:58:03 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/08 18:17:03 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void):_battleCry("For the holy PLOT!"),
                                    _rangedAttack("* attacks with a bolter *"),
                                    _meleeAttack("* attacks with a chainsword *")
{
    std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine &marineInstance)
{
    std::cout << "Tactical Marine ready for battle!" << std::endl;
    *this = marineInstance;
}

void TacticalMarine::battleCry(void) const
{
    std::cout << this->_battleCry << std::endl;
}

void TacticalMarine::rangedAttack(void)const
{
    std::cout << this->_rangedAttack << std::endl;
}

void TacticalMarine::meleeAttack(void)const
{
    std::cout << this->_meleeAttack << std::endl;
}

TacticalMarine::~TacticalMarine()
{
    std::cout << "Aaargh..." << std::endl;
}

ISpaceMarine *TacticalMarine::clone(void) const
{
    TacticalMarine *spaceClone = new TacticalMarine();
    *spaceClone = *this;
    return spaceClone;
}

TacticalMarine &TacticalMarine::operator=(const TacticalMarine &marineInstance)
{
    if(this == &marineInstance)
        return *this;
    this->_battleCry = marineInstance._battleCry;
    this->_rangedAttack = marineInstance._rangedAttack;
    this->_meleeAttack = marineInstance._meleeAttack;
    return *this;
}