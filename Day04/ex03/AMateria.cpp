/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 17:39:51 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/15 16:29:23 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
}

AMateria::~AMateria()
{
}

AMateria::AMateria(const std::string& type)
{
    this->_materiaType = type;
}

const std::string& AMateria::getType(void) const
{
    return this->_materiaType;
}


unsigned int AMateria::getXP(void) const
{
    return this->_xp;
}

void AMateria::setXP(unsigned int xp)
{
    this->_xp = xp;
}
void AMateria::setType(std::string materiaType)
{
    this->_materiaType = materiaType;
}
        
void AMateria::use(ICharacter& target)
{
    std::cout << "A Materia is used on " + target.getName() + "!";
    this->_xp += 10;
}

AMateria& AMateria::operator=(const AMateria &materiaInstance)
{
    if(this == &materiaInstance)
        return *this;
    this->_materiaType = materiaInstance._materiaType;
    this->_xp = materiaInstance._xp;
    return *this;
}