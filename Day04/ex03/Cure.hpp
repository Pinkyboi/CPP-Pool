/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 16:21:11 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/14 16:25:00 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CURE__
#define __CURE__

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{

	public:
		            Cure(void);
		            Cure(const Cure& cureInstance);
		            ~Cure( void );
		AMateria    *clone() const;
		void        use(ICharacter& target);
        Cure &operator=(const Cure& cureInstance);
};
#endif