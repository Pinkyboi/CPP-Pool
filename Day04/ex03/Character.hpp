/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 18:00:20 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/13 19:38:20 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER__
#define __CHARACTER__

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character
{
    private:
        static const int            _maxMateria = 4;
        int                         _materiaListIndex;
        AMateria*                   _materia[_maxMateria];
        std::string                 _characterName;
                                    Character(void);
    public:
                                    Character(const std::string &characterName);
                                    ~Character();
        virtual const std::string&  getName() const;
        virtual void                equip(AMateria* materia);
        virtual void                unequip(int materiaIndex);
        virtual void                use(int materiaIndex, ICharacter& target);
};

#endif