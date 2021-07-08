/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:56:49 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/04 16:56:50 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ASSAULT_TERMINATOR__
#define __ASSAULT_TERMINATOR__

#include <iostream>
#include "ISpaceMarine.hpp"
class AssaultTerminator : public ISpaceMarine
{
    private:
        std::string             _battleCry;
        std::string             _rangedAttack;
        std::string             _meleeAttack;
    public:
                                AssaultTerminator(void); //output : "* teleports from space *"
                                AssaultTerminator(const AssaultTerminator &marineInstance);
                                ~AssaultTerminator(); // output : "I’ll be back..."
        virtual ISpaceMarine*   clone() const; // return a copy of the current object
        virtual void            battleCry(void) const; // output : "This code is unclean. PURIFY IT!"
        virtual void            rangedAttack(void) const; // output : "* does nothing *"
        virtual void            meleeAttack(void) const; // output :  "* attacks with chainfists *"
        AssaultTerminator &operator=(const AssaultTerminator &marineInstance);
};


#endif
