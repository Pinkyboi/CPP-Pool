/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 16:17:53 by abenaiss          #+#    #+#             */
/*   Updated: 2021/06/23 16:17:54 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef _FRAG_TRAP_HPP_
#define _FRAG_TRAP_HPP_

#include "ClapTrap.hpp"

#define ATTACKS_NUMBER 5
// #include <iostream>
class FragTrap : public ClapTrap
{

	private:
		static const std::string _attackPool[ATTACKS_NUMBER];
	public:
		FragTrap(std::string name);
		FragTrap(const FragTrap &argument);
		FragTrap(void);
		~FragTrap();
		void		vaulthunter_dot_exe(std::string const & target);
		FragTrap	&operator=(const FragTrap &argument);
};

#endif