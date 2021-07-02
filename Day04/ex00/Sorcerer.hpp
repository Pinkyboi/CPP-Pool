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
                    Sorcerer(void);
    public:
                    Sorcerer(std::string name, std::string title);
                    Sorcerer(const Sorcerer &sorcererInstance);
                    ~Sorcerer(void);
        std::string getSorcererName(void) const;
        std::string getSorcererTitle(void) const;
        void        polymorph(const Victim &victimInstance) const;
        Sorcerer    &operator=(const Sorcerer &sorcererInstance);
};

std::ostream    &operator<<(std::ostream &out, const Sorcerer &Sorcerer);

#endif