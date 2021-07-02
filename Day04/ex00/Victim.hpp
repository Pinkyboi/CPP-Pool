/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:26:20 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/01 17:26:21 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __VICTIM__
#define __VICTIM__

#include <iostream>

class Victim
{
    protected:
        std::string _name;        
    public:
        Victim(std::string name = "Charlie");
        Victim(const Victim &victimInstance);
        virtual ~Victim();
        std::string getVictimName(void) const;
        virtual void getPolymorphed() const;
        Victim &operator=(const Victim &victimInstance);
};

std::ostream &operator<<(std::ostream &out, const Victim &Victim);

#endif
