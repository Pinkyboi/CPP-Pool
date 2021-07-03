/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 13:11:57 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/02 13:11:58 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SUPER_MUTANT__
#define __SUPER_MUTANT__

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
    private:
        
    public:
                    SuperMutant(void);
                    SuperMutant(const SuperMutant &mutantInstance);
                    ~SuperMutant();
        void        takeDamage(int damagePoints);
        SuperMutant &operator=(const SuperMutant &mutantInstance);
};

#endif
