/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 13:10:17 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/02 13:10:18 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PLASMA_RIFLE_
#define __PLASMA_RIFLE_

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
    public:
        PlasmaRifle(void);
        PlasmaRifle(const PlasmaRifle &rifleInstance);
        ~PlasmaRifle();
        virtual void        attack() const;
        PlasmaRifle &operator=(const PlasmaRifle &rifleInstance);
};

#endif