/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 17:41:03 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/13 18:00:34 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __A_MATERIA__
#define __A_MATERIA__

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
    private:
        unsigned int        _xp;
        std::string         _materiaType;
                            AMateria(void);
    public:
                            AMateria(const std::string& type);
                            ~AMateria();
        const std::string&  getType(void) const;
        unsigned int        getXP(void) const;
        virtual AMateria*   clone() const = 0;
        virtual void        use(ICharacter& target);
        AMateria&           operator=(const AMateria& materiaInstance);  
};

#endif