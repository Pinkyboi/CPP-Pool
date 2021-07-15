/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 18:18:48 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/15 15:45:51 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void):_currentIndex(0)
{
    for(int i = 0; i < this->_maxMateria; i++)
        this->_materia[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource& sourceInstance)
{
    *this = sourceInstance;
}

MateriaSource::~MateriaSource()
{
}

void MateriaSource::learnMateria(AMateria *materia)
{
    if(materia && this->_currentIndex < this->_maxMateria)
    {
        this->_materia[this->_currentIndex] = materia;
        this->_currentIndex++;
    }
}

AMateria* MateriaSource::createMateria(const std::string &materiaType)
{
    for(int i =0; i < this->_currentIndex; i++)
        if(this->_materia[i])
            if(this->_materia[i]->getType() == materiaType)
                return this->_materia[i]->clone();
    return nullptr;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& sourceInstance)
{
    if(this == &sourceInstance)
        return *this;
    for(int i = 0; i < this->_currentIndex; i++)
        this->_materia[i] = nullptr;
    this->_currentIndex = sourceInstance._currentIndex;
    for(int i = 0; i < sourceInstance._currentIndex; i++)
        this->_materia[i] = sourceInstance._materia[i];
    return *this;
}