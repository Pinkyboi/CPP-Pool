/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:57:44 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/04 16:57:46 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SQUAD__
#define __SQUAD__;

#include "ISquad.hpp"

class Squad : public Squad
{
    private:
        ISpaceMarine            *_listHead;
    public:
        Squad(void);
        ~Squad();
        virtual int             getCount() const; //return number of units in the squad
        virtual ISpaceMarine*   getUnit(int unitIndex) const; //Return pointer to the Nth unit (NULL is unit number is 0)
        virtual int             push(ISpaceMarine* newUnit); // add a new unit to the list if its not NULL and not already in the list
};


Squad::Squad(void):_listHead(0)
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
    ISpaceMarine *headClone = _listHead;
    bool exists = false;
    int  armyNumber = 0;
    while (headClone)
    {
        if(newUnit == headClone)
            exists = true;
        armyNumber++;
        headClone = headClone->next;
    }
    if((!exists) && headClone->next == 0)
        headClone->next = newUnit;
}

Squad::~Squad()
{
}


#endif