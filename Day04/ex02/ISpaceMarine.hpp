/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:56:57 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/08 19:34:22 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ISPACE_MARINE__
#define __ISPACE_MARINE__

class ISpaceMarine
{
    public:
        ISpaceMarine            *next;
    public:
        virtual                 ~ISpaceMarine(void) {} // output : "Aaargh..."
        virtual ISpaceMarine*   clone() const = 0;
        virtual void            battleCry(void) const = 0;
        virtual void            rangedAttack(void) const = 0;
        virtual void            meleeAttack(void) const = 0;
};

#endif