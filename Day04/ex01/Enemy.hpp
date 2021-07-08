/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 13:11:22 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/07 18:40:54 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ENEMY__
#define __ENEMY__

#include <iostream>

class Enemy
{
    private:
        int             _hp;
        std::string     _type;
    public:
                            Enemy(void);
                            Enemy(int hp, const std::string &type);
                            Enemy(const Enemy &enemyInstance);
        std::string         getType() const;
        int                 getHP() const;
        void                setType(std::string type);
        void                setHP(int hp);
        virtual void        takeDamage(int damagePoints);
        virtual             ~Enemy(void);
        Enemy&              operator=(const Enemy &enemyInstance);
};

#endif