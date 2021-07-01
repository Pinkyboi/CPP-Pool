/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:26:15 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/01 17:26:17 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name):_name(name)
{
    std::cout << "Some random victim called";
    std::cout << this->_name;
    std::cout << " just popped !" << std::endl;
}

Victim::~Victim()
{
    std::cout << "Victim ";
    std::cout << this->_name;
    std::cout << " just died for no apparent reason !" << std::endl;
}


std::string Victim::getVictimName(void) const
{
    return this->_name;
}

void Victim::getPolymorphed() const
{
    std::cout << this->_name;
    std::cout << " has been turned into a cute little sheep !" << std::endl;
}

std::ostream &operator <<(std::ostream &out, const Victim &Victim)
{
    out << "I'm ";
    out << Victim.getVictimName();
    out << " and I like otters !" << std::endl;
    return out;
}