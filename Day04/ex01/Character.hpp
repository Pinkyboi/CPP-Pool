/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 13:13:10 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/02 13:13:12 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER__
#define __CHARACTER__

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
    private:
        static const unsigned int   _maxAP = 40;
        std::string                 _name;
        int                         _APNumber;
        // unsigned int        _weaponAPCost;
        // unsigned int        _weaponDamage;
        AWeapon                     *_equipedWeapon; 
                                    Character(void);
    public:
                                    Character(const std::string &name);
                                    Character(const Character &characterInstance);
                                    ~Character(void);
        void                        recoverAP(void);
        void                        equip(AWeapon *weapon);
        void                        attack(Enemy *attackedEnemy);
        AWeapon                     *getWeapon() const;
        std::string                 getName(void) const;
        unsigned int                getAP(void) const;
        Character                   &operator=(const Character &characterInstance);
};

std::ostream &operator<<(std::ostream &out, const Character &characterInstance);
    
#endif