/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 18:00:13 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/14 20:25:13 by abenaiss         ###   ########.fr       */
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
    for (int i = 0; i < this->_maxMateria; i++)
        this->_materia[i] = nullptr;
    this->_characterName = characterName;
}

const std::string& Character::getName() const
{
    return this->_characterName;
}

void Character::equip(AMateria *materia)
{
    for(int i = 0; i < this->_maxMateria; i++)
    {
        if(!this->_materia[i]){
            this->_materia[i] = materia;
            break ;
        }
    }
}

void Character::unequip(int materiaIndex)
{
    if(materiaIndex >= 0 && materiaIndex < _maxMateria)
        if(this->_materia[materiaIndex])
            this->_materia[materiaIndex] = nullptr;
}

void Character::use(int materiaIndex, ICharacter& target)
{
    if(materiaIndex >= 0 && materiaIndex < _maxMateria)
        if(this->_materia[materiaIndex])
            this->_materia[materiaIndex]->use(target);
}

Character&  Character::operator=(const Character& characterInstance)
{
    if(this == &characterInstance)
        return *this;
    this->_characterName = characterInstance._characterName;
    for(int i = 0; i < this->_maxMateria; i++)
        unequip(i);
    for(int i = 0; i < this->_maxMateria; i++)
        equip(characterInstance._materia[i]);
    return *this;
}