/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 16:26:10 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/14 16:28:09 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __I_MATERIA_SOURCE__
#define __I_MATERIA_SOURCE__

#include "AMateria.hpp"

class IMateriaSource {

	public:
		virtual             ~IMateriaSource(){}
		virtual void        learnMateria   (AMateria *materia) = 0;
		virtual AMateria    *createMateria (const std::string& materiaType) = 0;
};
#endif