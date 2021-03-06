/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 13:09:54 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/02 13:09:56 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __A_WEAPON__
#define __A_WEAPON__

#include <iostream>

class AWeapon
{
    private:
        std::string         _name;
        int                 _apCost;
        int                 _damagePoint;
    public:
                            AWeapon(void);
                            AWeapon(const AWeapon &weaponInstance);
                            AWeapon(const std::string &name, int apcost, int damage);
        int                 getAPCost(void) const;
        int                 getDamage(void) const;
        std::string         getName(void) const;
        void                setAPCost(unsigned int apCost);
        void                setDamage(unsigned int damagePoint);
        void                setName(std::string name);
        virtual void        attack() const = 0;
        virtual             ~AWeapon();
        AWeapon &operator=(const AWeapon &weaponInstance);
};

#endif
