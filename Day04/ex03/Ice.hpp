/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 16:21:11 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/14 19:56:29 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICE__
#define __ICE__

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{

	public:
		            		Ice(void);
		            		Ice(const Ice& IceInstance);
		            		~Ice( void );
		virtual AMateria	*clone() const;
		void        		use(ICharacter& target);
        Ice 				&operator=(const Ice& IceInstance);
};
#endif