/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 13:12:50 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/02 13:12:52 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __RAD_SCORPION__
#define __RAD_SCORPION__

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
    private:
        
    public:
                    RadScorpion(void);
                    RadScorpion(const RadScorpion &scorpionInstance);
                    ~RadScorpion();
        void        takeDamage(int damagePoints);
        RadScorpion &operator=(const RadScorpion &scorpionInstance);
};

#endif
