/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 18:18:59 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/14 19:57:24 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIA_SOURCE__
#define __MATERIA_SOURCE__

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        static const int            _maxMateria = 4;
        int                         _currentIndex;
        AMateria*                   _materia[_maxMateria];
    public:
        MateriaSource(void);
        MateriaSource(const MateriaSource& sourceInstance);
        ~MateriaSource();
		virtual void        learnMateria   (AMateria *materia);
		virtual AMateria    *createMateria (const std::string& materiaType);
        MateriaSource&      operator=(const MateriaSource& sourceInstance);
};

#endif