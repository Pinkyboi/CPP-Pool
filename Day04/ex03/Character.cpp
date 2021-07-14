/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 18:00:13 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/14 16:29:59 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
    
}

Character::~Character()
{

}

Character::Character(const std::string &characterName)
{
    this->_characterName = characterName;
}

const std::string& Character::getName() const
{
    return this->_characterName;
}

void Character::equip(AMateria *materia)
{
    if(this->_materiaListIndex + 1 < this->_maxMateria && materia)
    {
        this->_materiaListIndex++;
        this->_materia[this->_materiaListIndex] = materia;
    }
}

void Character::unequip(int materiaIndex)
{
    if(materiaIndex >= 0 && materiaIndex < _maxMateria)
        if(this->_materia[materiaIndex])
            this->_materia[materiaIndex] = nullptr;
}
