/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 13:11:22 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/02 13:11:32 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ENEMY__
#define __ENEMY__

#include <iostream>

class Enemy
{
    private:
        unsigned int    _hp;
        std::string     _type;
    public:
                            Enemy(void);
                            Enemy(int hp, const std::string &type);
                            Enemy(const Enemy &enemyInstance);
        std::string         getType() const;
        int                 getHP() const;
        void                setType(std::string type);
        void                setHP(unsigned int hp);
        virtual void        takeDamage(int damagePoints) = 0;
        ~Enemy(void);
        Enemy&              operator=(const Enemy &enemyInstance);
};

#endif