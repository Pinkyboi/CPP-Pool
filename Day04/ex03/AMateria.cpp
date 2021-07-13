/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 17:39:51 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/13 19:39:11 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"


AMateria::AMateria(void)
{
}

AMateria::AMateria(const std::string& type)
{
    this->_materiaType = type;
}

AMateria::~AMateria()
{
}

const std::string& AMateria::getType(void) const
{
    return this->_materiaType;
}


unsigned int AMateria::getXP(void) const
{
    return this->_xp;
}

AMateria& AMateria::operator=(const AMateria &materiaInstance)
{
    if(this == &materiaInstance)
        return *this;
    this->_materiaType = materiaInstance._materiaType;
    this->_xp = materiaInstance._xp;
}