/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:56:20 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/08 18:16:10 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void):_battleCry("This code is unclean. PURIFY IT!"),
                                    _rangedAttack("* does nothing *"),
                                    _meleeAttack("* attacks with chainfists *")
{
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &marineInstance)
{
    std::cout << "* teleports from space *" << std::endl;
    *this = marineInstance;
}

void AssaultTerminator::battleCry(void) const
{
    std::cout << this->_battleCry << std::endl;
}

void AssaultTerminator::rangedAttack(void) const
{
    std::cout << this->_rangedAttack << std::endl;
}

void AssaultTerminator::meleeAttack(void) const
{
    std::cout << this->_meleeAttack << std::endl;
}

AssaultTerminator::~AssaultTerminator(void)
{
    std::cout << "I’ll be back..." << std::endl;
}

ISpaceMarine *AssaultTerminator::clone(void) const
{
    AssaultTerminator *spaceClone = new AssaultTerminator();
    *spaceClone = *this;
    return spaceClone;
}

AssaultTerminator &AssaultTerminator::operator=(const AssaultTerminator &marineInstance)
{
    if(this == &marineInstance)
        return *this;
    this->_battleCry = marineInstance._battleCry;
    this->_rangedAttack = marineInstance._rangedAttack;
    this->_meleeAttack = marineInstance._meleeAttack;
    return *this;
}