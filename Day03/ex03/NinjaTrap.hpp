/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 16:18:01 by abenaiss          #+#    #+#             */
/*   Updated: 2021/06/26 17:04:15 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _NINJA_TRAP_HPP_
#define _NINJA_TRAP_HPP_

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
    private:
        
    public:
		NinjaTrap(std::string name);
		NinjaTrap(void);
		NinjaTrap(NinjaTrap &argument);
		~NinjaTrap();
		void ninjaShoebox(const ClapTrap &ClapTrap);
		void ninjaShoebox(const FragTrap &FragTrap);
		void ninjaShoebox(const ScavTrap &ScavTrap);
		void ninjaShoebox(const NinjaTrap &NinjaTrap);
        NinjaTrap	&operator=(const NinjaTrap &argument);
};

#endif