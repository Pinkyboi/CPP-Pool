/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 13:10:43 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/02 13:10:45 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __POWER_FIST__
#define __POWER_FIST__

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
    public:
        PowerFist(void);
        PowerFist(const PowerFist &fistInstance);
        ~PowerFist();
        virtual void        attack() const;
        PowerFist &operator=(const PowerFist &fistInstance);
};

#endif
