/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 17:41:03 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/14 20:14:32 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __A_MATERIA__
#define __A_MATERIA__

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;
class AMateria
{
    private:
        unsigned int        _xp;
        std::string         _materiaType;
    protected:
                            AMateria(void);
    public:
                            AMateria(const std::string& type);
                            ~AMateria();
        const std::string&  getType(void) const;
        unsigned int        getXP(void) const;
        void                setXP(unsigned int xp);
        void                setType(std::string materiaType);
        virtual AMateria*   clone() const = 0;
        virtual void        use(ICharacter& target);
        AMateria&           operator=(const AMateria& materiaInstance);  
};

#endif