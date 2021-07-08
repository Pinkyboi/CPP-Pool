/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:57:26 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/04 16:57:27 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __I_SQUAD__
#define __I_SQUAD__

#include "ISpaceMarine.hpp"
class ISquad
{
    public:
        virtual                 ~ISquad() {};
        virtual int             getCount() const = 0; //return number of units in the squad
        virtual ISpaceMarine*   getUnit(int unitIndex) const = 0; //Return pointer to the Nth unit (NULL is unit number is 0)
        virtual int             push(ISpaceMarine* newUnit) = 0; // add a new unit to the list if its not NULL and not already in the list  
};

#endif