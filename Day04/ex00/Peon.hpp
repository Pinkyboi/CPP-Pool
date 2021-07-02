/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:26:46 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/01 17:26:47 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PEON__
#define __PEON__

#include <iostream>
#include "Victim.hpp"

class Peon : public Victim
{
    public:
                Peon(const std::string name = "Jim");
                Peon(const Peon &peonInstance);
                ~Peon();
        void    getPolymorphed() const;
        Peon    &operator=(const Peon &peonInstance);
};


#endif