/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 19:15:29 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/15 16:29:12 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void)
{
    this->setType("ice");
    this->setXP(0);
}

Ice::~Ice(void)
{
}

Ice::Ice(const Ice& iceInstance)
{
    this->setType("ice");
    this->setXP(0);
    *this = iceInstance;
}

AMateria*   Ice::clone(void) const
{
    return new Ice;
}

void    Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " + target.getName() + " *" << std::endl;
    this->setXP(this->getXP() + 10);
}

Ice&    Ice::operator=(const Ice& iceInstance)
{
    if(this == &iceInstance)
        return *this;
    this->setXP(iceInstance.getXP());
    return *this;
}