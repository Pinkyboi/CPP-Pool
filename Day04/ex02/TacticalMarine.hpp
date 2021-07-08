/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:58:08 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/04 16:58:09 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __TACTICAL_MARINE__
#define __TACTICAL_MARINE__

#include <iostream>
#include "ISpaceMarine.hpp"
class TacticalMarine : public ISpaceMarine
{
    private:
        std::string             _battleCry;
        std::string             _rangedAttack;
        std::string             _meleeAttack;
    public:
                                TacticalMarine(void); //output : "Tactical Marine ready for battle!"
                                TacticalMarine(const TacticalMarine &marineInstance);
                                ~TacticalMarine(); // output : "Aaargh..."
        virtual ISpaceMarine*   clone() const; // return a copy of the current object
        virtual void            battleCry(void) const; // output : "For the holy PLOT!"
        virtual void            rangedAttack(void) const; // output : "* attacks with a bolter *"
        virtual void            meleeAttack(void) const; // output :  "* attacks with a chainsword *"
        TacticalMarine &operator=(const TacticalMarine &marineInstance);
};

#endif