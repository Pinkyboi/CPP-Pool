/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 16:20:15 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/14 20:25:44 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
{
    this->setType("cure");
    this->setXP(0);
}

Cure::~Cure(void)
{
}

Cure::Cure(const Cure& cureInstance)
{
    this->setType("cure");
    this->setXP(0);
    *this = cureInstance;
}

AMateria*   Cure::clone(void) const
{
    
    return new Cure;
}

void    Cure::use(ICharacter& target)
{
    std::cout << "* heals " + target.getName() + "’s " "wounds *" << std::endl;
    this->setXP(this->getXP() + 10);
}

Cure&    Cure::operator=(const Cure& cureInstance)
{
    if(this == &cureInstance)
        return *this;
    this->setXP(cureInstance.getXP());
    return *this;
}