/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:26:07 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/01 17:26:09 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SORCERER__
#define __SORCERER__

#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
    private:
        std::string _name;
        std::string _title;
    public:
        Sorcerer(std::string name = "Nomu", std::string title = "The great wolf");
        ~Sorcerer(void);
        std::string getSorcererName(void) const;
        std::string getSorcererTitle(void) const;
        void polymorph(Victim const &Victim);      
};

std::ostream &operator<<(std::ostream &out, const Sorcerer &Sorcerer);

#endif