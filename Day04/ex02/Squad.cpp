/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:57:44 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/08 19:42:30 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void):_listHead(nullptr),_armyNumber(0)
{
}


Squad::~Squad()
{
}

int Squad::getCount(void) const
{
    return this->_armyNumber;
}

void    Squad::clearUnitList()
{
    UnitList *headClone = this->_listHead;
    while (headClone)
    {
        delete headClone->marineUnit;
        headClone = headClone->next;
    }
    this->_listHead = nullptr;
}

Squad::UnitList *Squad::cloneUnitList(void)
{
    UnitList *headClone = this->_listHead;
    UnitList *listClone = createUnitNode(this->_listHead->marineUnit);
    UnitList *listCloneSave = listClone;
    headClone = headClone->next;
    while(headClone)
    {
        listClone = createUnitNode(headClone->marineUnit);
        headClone = headClone->next;
        listClone = listClone->next;
    }
    return listCloneSave;
}

ISpaceMarine* Squad::getUnit(int unitIndex) const
{
    UnitList *headClone = this->_listHead;

    for (int armyNumber = 0; headClone; armyNumber++)
    {
        if (armyNumber == unitIndex)
            return headClone->marineUnit;
        headClone = headClone->next;
    }
    return 0;
}

Squad::UnitList*    Squad::createUnitNode(ISpaceMarine *newUnit)
{
    UnitList *node= new UnitList;
    node->marineUnit = newUnit;
    node->next = nullptr;
    return node;
}

int Squad::push(ISpaceMarine* newUnit)
{
    if(!this->_listHead)
        this->_listHead = createUnitNode(newUnit);
    else
    {
        UnitList *headClone = this->_listHead;
        while (headClone)
        {
            if (newUnit == headClone->marineUnit)
                return this->_armyNumber;
            if (!headClone->next)
                break ;
            headClone = headClone->next;
        }
        headClone->next = createUnitNode(newUnit);
    }
    return this->_armyNumber++;
}
