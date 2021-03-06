/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:57:49 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/08 19:33:55 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SQUAD__
#define __SQUAD__

#include "ISquad.hpp"
#include <iostream>
class Squad : public ISquad
{
    private:
        typedef struct          UnitList
        {
            ISpaceMarine        *marineUnit;    
            struct UnitList     *next;    
        }                       UnitList;
        UnitList                *_listHead;
        int                     _armyNumber;
        UnitList*               createUnitNode(ISpaceMarine *newUnit) const;
        void                    clearUnitList(void);
        UnitList*               cloneUnitList(void) const;
    public:
        Squad(void);
        Squad(const Squad &squadInstance);
        ~Squad();
        virtual int             getCount() const; //return number of units in the squad
        virtual ISpaceMarine*   getUnit(int unitIndex) const; //Return pointer to the Nth unit (NULL is unit number is 0)
        virtual int             push(ISpaceMarine* newUnit); // add a new unit to the list if its not NULL and not already in the list
        Squad                   &operator=(const Squad &SquadInstance);    
};

#endif
