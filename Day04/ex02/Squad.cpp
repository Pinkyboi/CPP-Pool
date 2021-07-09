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

Squad::Squad(void):_listHead(0)
{
}


Squad::~Squad()
{
}

int Squad::getCount(void) const
{
    ISpaceMarine *headClone = _listHead;
    int  armyNumber = 0;
    while (headClone)
    {
        armyNumber++;
        headClone = headClone->next;
    }
    return armyNumber;
}

ISpaceMarine* Squad::getUnit(int unitIndex) const
{
    ISpaceMarine *headClone = _listHead;
    int  armyNumber;
    while (headClone)
    {
        if(armyNumber == unitIndex)
            return headClone;
        armyNumber++;
        headClone = headClone->next;
    }
    return 0;
}


int Squad::push(ISpaceMarine* newUnit)
{
    ISpaceMarine *headClone;
    bool exists = false;
    int  armyNumber = 0;

    newUnit->next = 0;
    if(!_listHead)
        _listHead = newUnit;
    else
    {
        headClone = _listHead;
        while (headClone)
        {
            if(newUnit == headClone)
                exists = true;
            armyNumber++;
            headClone = headClone->next;
        }
        if (!exists){
            headClone = newUnit;
            armyNumber++;
        }
    }
    return armyNumber;
}
