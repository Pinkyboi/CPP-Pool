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

Squad::Squad(void): _listHead(0),_armyNumber(0)
{
}

Squad::Squad(const Squad &squadInstance):_listHead(0),_armyNumber(0)
{
    *this = squadInstance;
}

Squad& Squad::operator=(const Squad &SquadInstance)
{
    if(this == &SquadInstance)
        return *this;
    clearUnitList();
    this->_listHead = SquadInstance.cloneUnitList();
    this->_armyNumber = SquadInstance.getCount();
    return *this;
}

Squad::~Squad()
{
    clearUnitList();
}

int Squad::getCount(void) const
{
    return this->_armyNumber;
}

void    Squad::clearUnitList(void)
{
    UnitList *nextNode;
    while (this->_listHead)
    {
        nextNode = this->_listHead->next;
        delete this->_listHead->marineUnit;
        delete this->_listHead;
        this->_listHead->marineUnit = nullptr;
        this->_listHead = nullptr;
        this->_listHead = nextNode;
    }
    this->_armyNumber = 0;
}

Squad::UnitList *Squad::cloneUnitList(void) const
{
    if(!this->_listHead)
        return nullptr;
    UnitList *headClone     = this->_listHead;
    UnitList *listClone     = createUnitNode(this->_listHead->marineUnit->clone());
    UnitList *listCloneSave = listClone;
    headClone               = headClone->next;
    while(headClone)
    {
        listClone = listClone->next = createUnitNode(headClone->marineUnit->clone());
        headClone = headClone->next;
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

Squad::UnitList*    Squad::createUnitNode(ISpaceMarine *newUnit) const
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
    return ++this->_armyNumber;
}
